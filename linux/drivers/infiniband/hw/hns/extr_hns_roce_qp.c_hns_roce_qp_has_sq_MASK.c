
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_send_wr; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; TYPE_1__ cap; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ib_qp_init_attr *VAR_1)
{
 if (VAR_1->qp_type == VAR_0 || !VAR_1->cap.max_send_wr)
  return 0;

 return 1;
}
