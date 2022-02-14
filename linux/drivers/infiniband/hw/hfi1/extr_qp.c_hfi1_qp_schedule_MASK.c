
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_iowait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rvt_qp*) ;
 int FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct rvt_qp *VAR_2)
{
 struct hfi1_qp_priv *VAR_3 = VAR_2->priv;
 bool VAR_4;

 if (FUNC_3(&VAR_3->s_iowait, VAR_0)) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4)
   FUNC_2(&VAR_3->s_iowait, VAR_0);
 }
 if (FUNC_3(&VAR_3->s_iowait, VAR_1)) {
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   FUNC_2(&VAR_3->s_iowait, VAR_1);
 }
}
