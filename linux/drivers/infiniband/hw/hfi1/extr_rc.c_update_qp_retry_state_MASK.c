
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rvt_qp {scalar_t__ s_cur; scalar_t__ s_size; void* s_state; scalar_t__ s_psn; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {scalar_t__ s_tid_cur; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rvt_qp *VAR_2, u32 VAR_3, u32 VAR_4,
      u32 VAR_5)
{
 struct hfi1_qp_priv *VAR_6 = VAR_2->priv;

 VAR_2->s_psn = VAR_3 + 1;






 if (FUNC_1(VAR_3, VAR_5) >= 0) {
  VAR_2->s_cur = VAR_6->s_tid_cur + 1;
  if (VAR_2->s_cur >= VAR_2->s_size)
   VAR_2->s_cur = 0;
  VAR_2->s_state = FUNC_0(VAR_0);
 } else if (!FUNC_1(VAR_3, VAR_4)) {
  VAR_2->s_cur = VAR_6->s_tid_cur;
  VAR_2->s_state = FUNC_0(VAR_1);
 }
}
