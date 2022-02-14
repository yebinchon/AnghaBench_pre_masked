
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hfi1_packet {TYPE_2__* qp; } ;
typedef int * opcode_handler ;
struct TYPE_3__ {scalar_t__ qp_type; } ;
struct TYPE_4__ {size_t state; TYPE_1__ ibqp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int ** VAR_5 ;

__attribute__((used)) static opcode_handler FUNC_0(int VAR_6, struct hfi1_packet *VAR_7)
{
 if (VAR_7->qp->ibqp.qp_type != VAR_1 ||
     !(VAR_4[VAR_7->qp->state] & VAR_3))
  return ((void*)0);
 if ((VAR_6 & VAR_2) == VAR_0)
  return VAR_5[VAR_6];
 return ((void*)0);
}
