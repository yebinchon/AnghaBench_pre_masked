
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_bucket_t ;
struct TYPE_10__ {scalar_t__ ub_cnt; int * ub_bucket; int ub_entries; } ;
struct TYPE_9__ {scalar_t__ (* uz_import ) (int ,int *,int ,int,int) ;scalar_t__ (* uz_init ) (int ,int ,int) ;int uz_fails; int uz_arg; int (* uz_release ) (int ,int *,int) ;int uz_size; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,void*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,void*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int,int) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int *,int) ;

__attribute__((used)) static uma_bucket_t
FUNC_10(uma_zone_t VAR_4, void *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 uma_bucket_t VAR_9;

 FUNC_0(VAR_0, "zone_alloc:_bucket domain %d)", VAR_6);


 if (VAR_6 != VAR_3 && FUNC_2(VAR_6))
  VAR_6 = VAR_3;


 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_2 | (VAR_7 & VAR_1));
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 VAR_9->ub_cnt = VAR_4->uz_import(VAR_4->uz_arg, VAR_9->ub_bucket,
     FUNC_1(VAR_8, VAR_9->ub_entries), VAR_6, VAR_7);




 if (VAR_9->ub_cnt != 0 && VAR_4->uz_init != ((void*)0)) {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_9->ub_cnt; VAR_10++)
   if (VAR_4->uz_init(VAR_9->ub_bucket[VAR_10], VAR_4->uz_size,
       VAR_7) != 0)
    break;




  if (VAR_10 != VAR_9->ub_cnt) {
   VAR_4->uz_release(VAR_4->uz_arg, &VAR_9->ub_bucket[VAR_10],
       VAR_9->ub_cnt - VAR_10);




   VAR_9->ub_cnt = VAR_10;
  }
 }

 if (VAR_9->ub_cnt == 0) {
  FUNC_4(VAR_4, VAR_9, VAR_5);
  FUNC_6(VAR_4->uz_fails, 1);
  return (((void*)0));
 }

 return (VAR_9);
}
