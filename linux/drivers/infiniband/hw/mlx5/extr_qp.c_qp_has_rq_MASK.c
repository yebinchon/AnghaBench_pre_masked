
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_recv_wr; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; TYPE_1__ cap; scalar_t__ srq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ib_qp_init_attr *VAR_3)
{
 if (VAR_3->qp_type == VAR_0 ||
     VAR_3->qp_type == VAR_1 || VAR_3->srq ||
     VAR_3->qp_type == VAR_2 ||
     !VAR_3->cap.max_recv_wr)
  return 0;

 return 1;
}
