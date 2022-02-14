
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_16__ {scalar_t__ uz_max_items; scalar_t__ uz_items; scalar_t__ uz_sleepers; int (* uz_import ) (int ,void**,int,int,int) ;scalar_t__ (* uz_init ) (void*,int ,int) ;scalar_t__ (* uz_ctor ) (void*,int ,void*,int) ;scalar_t__ uz_dtor; int uz_name; int uz_fails; int uz_allocs; int uz_size; int uz_arg; int uz_lockptr; int uz_sleeps; } ;


 int FUNC_0 (int ,char*,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,void*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_1__*,int ,int ,char*,int ) ;
 int FUNC_8 (int ,void**,int,int,int) ;
 scalar_t__ FUNC_9 (void*,int ,int) ;
 scalar_t__ FUNC_10 (void*,int ,void*,int) ;
 scalar_t__ FUNC_11 (void*,int ,void*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (TYPE_1__*,int *,void*) ;
 int FUNC_13 (TYPE_1__*,void*) ;
 int FUNC_14 (void*,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,void*,void*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static void *
FUNC_19(uma_zone_t VAR_9, void *VAR_10, int VAR_11, int VAR_12)
{
 void *VAR_13;




 FUNC_4(VAR_9);

 if (VAR_9->uz_max_items > 0) {
  if (VAR_9->uz_items >= VAR_9->uz_max_items) {
   FUNC_17(VAR_9);
   FUNC_18(VAR_9);
   if (VAR_12 & VAR_1) {
    FUNC_5(VAR_9);
    return (((void*)0));
   }
   VAR_9->uz_sleeps++;
   VAR_9->uz_sleepers++;
   while (VAR_9->uz_items >= VAR_9->uz_max_items)
    FUNC_7(VAR_9, VAR_9->uz_lockptr, VAR_3,
        "zonelimit", 0);
   VAR_9->uz_sleepers--;
   if (VAR_9->uz_sleepers > 0 &&
       VAR_9->uz_items + 1 < VAR_9->uz_max_items)
    FUNC_15(VAR_9);
  }
  VAR_9->uz_items++;
 }
 FUNC_5(VAR_9);


 if (VAR_11 != VAR_7 && FUNC_2(VAR_11))
  VAR_11 = VAR_7;

 if (VAR_9->uz_import(VAR_9->uz_arg, &VAR_13, 1, VAR_11, VAR_12) != 1)
  goto fail;
 if (VAR_9->uz_init != ((void*)0)) {
  if (VAR_9->uz_init(VAR_13, VAR_9->uz_size, VAR_12) != 0) {
   FUNC_16(VAR_9, VAR_13, VAR_10, VAR_6 | VAR_4);
   goto fail;
  }
 }
 if (VAR_9->uz_ctor != ((void*)0) &&




     VAR_9->uz_ctor(VAR_13, VAR_9->uz_size, VAR_10, VAR_12) != 0) {
  FUNC_16(VAR_9, VAR_13, VAR_10, VAR_5 | VAR_4);
  goto fail;
 }




 if (VAR_12 & VAR_2)
  FUNC_14(VAR_13, VAR_9);

 FUNC_6(VAR_9->uz_allocs, 1);
 FUNC_1(VAR_0, "zone_alloc_item item %p from %s(%p)", VAR_13,
     VAR_9->uz_name, VAR_9);

 return (VAR_13);

fail:
 if (VAR_9->uz_max_items > 0) {
  FUNC_3(VAR_9);
  VAR_9->uz_items--;
  FUNC_5(VAR_9);
 }
 FUNC_6(VAR_9->uz_fails, 1);
 FUNC_0(VAR_0, "zone_alloc_item failed from %s(%p)",
     VAR_9->uz_name, VAR_9);
 return (((void*)0));
}
