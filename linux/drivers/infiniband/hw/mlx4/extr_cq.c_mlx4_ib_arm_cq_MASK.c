
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_4__ {int mcq; } ;
struct TYPE_3__ {int uar_lock; int uar_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (struct ib_cq*) ;
 TYPE_1__* FUNC_3 (int ) ;

int FUNC_4(struct ib_cq *VAR_4, enum ib_cq_notify_flags VAR_5)
{
 FUNC_1(&FUNC_2(VAR_4)->mcq,
      (VAR_5 & VAR_1) == VAR_0 ?
      VAR_3 : VAR_2,
      FUNC_3(VAR_4->device)->uar_map,
      FUNC_0(&FUNC_3(VAR_4->device)->uar_lock));

 return 0;
}
