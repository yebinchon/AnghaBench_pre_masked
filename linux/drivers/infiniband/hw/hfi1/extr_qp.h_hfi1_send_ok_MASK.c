
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int s_iowait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct rvt_qp *VAR_4)
{
 struct hfi1_qp_priv *VAR_5 = VAR_4->priv;

 return !(VAR_4->s_flags & (VAR_2 | VAR_0)) &&
  (FUNC_1(FUNC_0(&VAR_5->s_iowait)) ||
  (VAR_4->s_flags & VAR_3) ||
   !(VAR_4->s_flags & VAR_1));
}
