
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_4__ {int cqn; } ;
struct TYPE_3__ {int doorbell_lock; scalar_t__ kar; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,scalar_t__,int ) ;
 TYPE_2__* FUNC_2 (struct ib_cq*) ;
 TYPE_1__* FUNC_3 (int ) ;

int FUNC_4(struct ib_cq *VAR_5, enum ib_cq_notify_flags VAR_6)
{
 u32 VAR_7 = ((VAR_6 & VAR_1) == VAR_0 ?
      VAR_4 :
      VAR_3) |
  FUNC_2(VAR_5)->cqn;

 FUNC_1(VAR_7, 0xffffffff, FUNC_3(VAR_5->device)->kar + VAR_2,
        FUNC_0(&FUNC_3(VAR_5->device)->doorbell_lock));

 return 0;
}
