
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_sge; } ;
struct TYPE_3__ {int flags; int num_sge; } ;
struct siw_wqe {int mem; TYPE_2__ rqe; TYPE_1__ sqe; } ;
typedef enum siw_opcode { ____Placeholder_siw_opcode } siw_opcode ;
 int VAR_0 ;
 int FUNC_0 (int ,int) ;

void FUNC_1(struct siw_wqe *VAR_1, enum siw_opcode VAR_2)
{
 switch (VAR_2) {
 case 131:
 case 128:
 case 129:
 case 130:
 case 135:
 case 134:
  if (!(VAR_1->sqe.flags & VAR_0))
   FUNC_0(VAR_1->mem, VAR_1->sqe.num_sge);
  break;

 case 132:
  FUNC_0(VAR_1->mem, VAR_1->rqe.num_sge);
  break;

 case 133:
  FUNC_0(VAR_1->mem, 1);
  break;

 default:




  break;
 }
}
