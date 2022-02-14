
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * umem; } ;
struct TYPE_3__ {int * umem; } ;
struct qedr_qp {TYPE_2__ urq; TYPE_1__ usq; } ;
struct qedr_dev {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qedr_dev *VAR_0, struct qedr_qp *VAR_1)
{
 FUNC_0(VAR_1->usq.umem);
 VAR_1->usq.umem = ((void*)0);

 FUNC_0(VAR_1->urq.umem);
 VAR_1->urq.umem = ((void*)0);
}
