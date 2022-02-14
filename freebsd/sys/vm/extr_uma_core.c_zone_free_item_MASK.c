
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef enum zfreeskip { ____Placeholder_zfreeskip } zfreeskip ;
struct TYPE_8__ {int uz_flags; scalar_t__ uz_ctor; scalar_t__ uz_max_items; scalar_t__ uz_items; scalar_t__ uz_sleepers; int uz_frees; int uz_arg; int (* uz_release ) (int ,void**,int) ;int uz_size; int (* uz_fini ) (void*,int ) ;int (* uz_dtor ) (void*,int ,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (void*,int ,void*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (int ,void**,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (void*,int ,void*) ;
 int FUNC_7 (TYPE_1__*,void*,void*) ;
 int FUNC_8 (TYPE_1__*,void*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(uma_zone_t VAR_6, void *VAR_7, void *VAR_8, enum zfreeskip VAR_9)
{
 if (VAR_9 < VAR_1 && VAR_6->uz_dtor != ((void*)0))

  VAR_6->uz_dtor(VAR_7, VAR_6->uz_size, VAR_8);

 if (VAR_9 < VAR_2 && VAR_6->uz_fini)
  VAR_6->uz_fini(VAR_7, VAR_6->uz_size);

 VAR_6->uz_release(VAR_6->uz_arg, &VAR_7, 1);

 if (VAR_9 & VAR_0)
  return;

 FUNC_2(VAR_6->uz_frees, 1);

 if (VAR_6->uz_max_items > 0) {
  FUNC_0(VAR_6);
  VAR_6->uz_items--;
  if (VAR_6->uz_sleepers > 0 &&
      VAR_6->uz_items < VAR_6->uz_max_items)
   FUNC_9(VAR_6);
  FUNC_1(VAR_6);
 }
}
