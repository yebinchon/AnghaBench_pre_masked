
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_sqe {int flags; int num_sge; TYPE_1__* sge; int opcode; int id; } ;
struct TYPE_2__ {int lkey; int length; int laddr; } ;


 int VAR_0 ;

void FUNC_0(struct siw_sqe *VAR_1, struct siw_sqe *VAR_2)
{
 VAR_1->id = VAR_2->id;
 VAR_1->opcode = VAR_2->opcode;
 VAR_1->sge[0].laddr = VAR_2->sge[0].laddr;
 VAR_1->sge[0].length = VAR_2->sge[0].length;
 VAR_1->sge[0].lkey = VAR_2->sge[0].lkey;
 VAR_1->sge[1].lkey = VAR_2->sge[1].lkey;
 VAR_1->flags = VAR_2->flags | VAR_0;
 VAR_1->num_sge = 1;
}
