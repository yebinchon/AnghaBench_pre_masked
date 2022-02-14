
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_qplib_rcfw {int dummy; } ;
struct bnxt_re_dev {int num_msix; struct bnxt_qplib_nq* nq; struct bnxt_qplib_rcfw rcfw; } ;
struct bnxt_qplib_nq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_qplib_nq*,int) ;
 int FUNC_1 (struct bnxt_qplib_rcfw*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct bnxt_re_dev *VAR_2 = (struct bnxt_re_dev *)VAR_1;
 struct bnxt_qplib_rcfw *VAR_3 = &VAR_2->rcfw;
 struct bnxt_qplib_nq *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 < VAR_2->num_msix; VAR_5++) {
  VAR_4 = &VAR_2->nq[VAR_5 - 1];
  FUNC_0(VAR_4, 0);
 }

 FUNC_1(VAR_3, 0);
}
