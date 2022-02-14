
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blkcg_gq {int refcnt; int stat_bytes; int stat_ios; scalar_t__* pd; } ;
struct TYPE_2__ {int (* pd_free_fn ) (scalar_t__) ;} ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct blkcg_gq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct blkcg_gq *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_2->pd[VAR_3])
   VAR_1[VAR_3]->pd_free_fn(VAR_2->pd[VAR_3]);

 FUNC_0(&VAR_2->stat_ios);
 FUNC_0(&VAR_2->stat_bytes);
 FUNC_2(&VAR_2->refcnt);
 FUNC_1(VAR_2);
}
