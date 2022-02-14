
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfi1_packet {size_t opcode; TYPE_2__* rcd; } ;
struct hfi1_ibdev {TYPE_3__* fault; } ;
struct TYPE_6__ {int * n_rxfaults; } ;
struct TYPE_5__ {TYPE_1__* dd; } ;
struct TYPE_4__ {struct hfi1_ibdev verbs_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hfi1_ibdev*,size_t,int ) ;
 int FUNC_1 (struct hfi1_packet*) ;

bool FUNC_2(struct hfi1_packet *VAR_1)
{
 struct hfi1_ibdev *VAR_2 = &VAR_1->rcd->dd->verbs_dev;

 if (FUNC_0(VAR_2, VAR_1->opcode, VAR_0)) {
  FUNC_1(VAR_1);
  VAR_2->fault->n_rxfaults[VAR_1->opcode]++;
  return 1;
 }
 return 0;
}
