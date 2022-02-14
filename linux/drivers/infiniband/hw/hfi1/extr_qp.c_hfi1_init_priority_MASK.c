
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; struct hfi1_qp_priv* priv; } ;
struct iowait {int priority; } ;
struct hfi1_qp_priv {int s_flags; } ;


 int VAR_0 ;
 struct rvt_qp* FUNC_0 (struct iowait*) ;

__attribute__((used)) static void FUNC_1(struct iowait *VAR_1)
{
 struct rvt_qp *VAR_2 = FUNC_0(VAR_1);
 struct hfi1_qp_priv *VAR_3 = VAR_2->priv;

 if (VAR_2->s_flags & VAR_0)
  VAR_1->priority++;
 if (VAR_3->s_flags & VAR_0)
  VAR_1->priority++;
}
