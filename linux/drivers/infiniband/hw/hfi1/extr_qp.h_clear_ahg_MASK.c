
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {int s_flags; scalar_t__ s_ahgidx; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {scalar_t__ s_sde; TYPE_1__* s_ahg; } ;
struct TYPE_2__ {scalar_t__ ahgcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct rvt_qp *VAR_2)
{
 struct hfi1_qp_priv *VAR_3 = VAR_2->priv;

 VAR_3->s_ahg->ahgcount = 0;
 VAR_2->s_flags &= ~(VAR_1 | VAR_0);
 if (VAR_3->s_sde && VAR_2->s_ahgidx >= 0)
  FUNC_0(VAR_3->s_sde, VAR_2->s_ahgidx);
 VAR_2->s_ahgidx = -1;
}
