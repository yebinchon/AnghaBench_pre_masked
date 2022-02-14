
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_packet {int opcode; TYPE_1__* qp; } ;
typedef int * opcode_handler ;
struct TYPE_2__ {size_t state; int allowed_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int ** VAR_4 ;

__attribute__((used)) static inline opcode_handler FUNC_0(struct hfi1_packet *VAR_5)
{
 if (!(VAR_3[VAR_5->qp->state] & VAR_2))
  return ((void*)0);
 if (((VAR_5->opcode & VAR_1) ==
      VAR_5->qp->allowed_ops) ||
     (VAR_5->opcode == VAR_0))
  return VAR_4[VAR_5->opcode];

 return ((void*)0);
}
