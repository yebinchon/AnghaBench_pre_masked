
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int umem; int pbl_tbl; int pbl_info; } ;
struct qedr_srq {int prod_umem; TYPE_1__ usrq; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct qedr_srq *VAR_0)
{
 FUNC_1(VAR_0->dev, &VAR_0->usrq.pbl_info, VAR_0->usrq.pbl_tbl);
 FUNC_0(VAR_0->usrq.umem);
 FUNC_0(VAR_0->prod_umem);
}
