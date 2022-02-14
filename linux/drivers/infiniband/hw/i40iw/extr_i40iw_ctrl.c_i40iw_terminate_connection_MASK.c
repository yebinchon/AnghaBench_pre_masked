
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40iw_sc_qp {int term_flags; int eventtype; } ;
struct i40iw_aeqe_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40iw_sc_qp*,struct i40iw_aeqe_info*) ;
 int FUNC_1 (struct i40iw_sc_qp*,int ,int ,int ) ;
 int FUNC_2 (struct i40iw_sc_qp*) ;

void FUNC_3(struct i40iw_sc_qp *VAR_4, struct i40iw_aeqe_info *VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_4->term_flags & VAR_2)
  return;


 VAR_4->eventtype = VAR_3;
 VAR_6 = FUNC_0(VAR_4, VAR_5);
 FUNC_2(VAR_4);
 VAR_4->term_flags |= VAR_2;
 FUNC_1(VAR_4, VAR_1,
        VAR_0, VAR_6);
}
