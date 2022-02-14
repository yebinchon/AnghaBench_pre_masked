
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
typedef TYPE_2__* uma_bucket_t ;
struct TYPE_9__ {int ub_cnt; int * ub_bucket; } ;
struct TYPE_8__ {scalar_t__ uz_max_items; scalar_t__ uz_items; scalar_t__ uz_sleepers; int uz_arg; int (* uz_release ) (int ,int *,int) ;int uz_size; int (* uz_fini ) (int ,int ) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(uma_zone_t VAR_0, uma_bucket_t VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_0->uz_fini)
  for (VAR_2 = 0; VAR_2 < VAR_1->ub_cnt; VAR_2++)
   VAR_0->uz_fini(VAR_1->ub_bucket[VAR_2], VAR_0->uz_size);
 VAR_0->uz_release(VAR_0->uz_arg, VAR_1->ub_bucket, VAR_1->ub_cnt);
 if (VAR_0->uz_max_items > 0) {
  FUNC_0(VAR_0);
  VAR_0->uz_items -= VAR_1->ub_cnt;
  if (VAR_0->uz_sleepers && VAR_0->uz_items < VAR_0->uz_max_items)
   FUNC_4(VAR_0);
  FUNC_1(VAR_0);
 }
 VAR_1->ub_cnt = 0;
}
