
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_res {int pdev; } ;
struct bnxt_qplib_frpl {int hwq; } ;


 int FUNC_0 (int ,int *) ;

int FUNC_1(struct bnxt_qplib_res *VAR_0,
           struct bnxt_qplib_frpl *VAR_1)
{
 FUNC_0(VAR_0->pdev, &VAR_1->hwq);
 return 0;
}
