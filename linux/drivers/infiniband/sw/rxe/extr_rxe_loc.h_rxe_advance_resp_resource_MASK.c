
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ res_head; } ;
struct TYPE_3__ {scalar_t__ max_dest_rd_atomic; } ;
struct rxe_qp {TYPE_2__ resp; TYPE_1__ attr; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct rxe_qp *VAR_0)
{
 VAR_0->resp.res_head++;
 if (FUNC_0(VAR_0->resp.res_head == VAR_0->attr.max_dest_rd_atomic))
  VAR_0->resp.res_head = 0;
}
