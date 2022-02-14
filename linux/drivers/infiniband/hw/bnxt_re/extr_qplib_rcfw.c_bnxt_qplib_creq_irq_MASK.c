
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct creq_base {int dummy; } ;
struct bnxt_qplib_hwq {scalar_t__ pbl_ptr; int cons; } ;
struct bnxt_qplib_rcfw {int worker; struct bnxt_qplib_hwq creq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,struct bnxt_qplib_hwq*) ;
 int VAR_0 ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct creq_base*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct bnxt_qplib_rcfw *VAR_3 = VAR_2;
 struct bnxt_qplib_hwq *VAR_4 = &VAR_3->creq;
 struct creq_base **VAR_5;
 u32 VAR_6;


 VAR_6 = FUNC_0(VAR_4->cons, VAR_4);
 VAR_5 = (struct creq_base **)VAR_3->creq.pbl_ptr;
 FUNC_3(&VAR_5[FUNC_2(VAR_6)][FUNC_1(VAR_6)]);

 FUNC_4(&VAR_3->worker);

 return VAR_0;
}
