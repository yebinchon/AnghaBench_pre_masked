
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_qp {int flush_code; scalar_t__ term_flags; } ;
struct i40iw_qp_flush_info {int sq; int rq; int rq_major_code; int rq_minor_code; int sq_major_code; int sq_minor_code; } ;
struct i40iw_qp {struct i40iw_sc_qp sc_qp; } ;
struct i40iw_device {int dummy; } ;


 int FUNC_0 (struct i40iw_device*,struct i40iw_sc_qp*,struct i40iw_qp_flush_info*,int) ;
 int FUNC_1 (struct i40iw_qp_flush_info*,int *,int *,int ) ;
 int FUNC_2 (struct i40iw_qp_flush_info*,int ,int) ;

void FUNC_3(struct i40iw_device *VAR_0, struct i40iw_qp *VAR_1)
{
 struct i40iw_qp_flush_info VAR_2;
 struct i40iw_qp_flush_info *VAR_3 = &VAR_2;

 struct i40iw_sc_qp *VAR_4 = &VAR_1->sc_qp;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_2.sq = 1;
 VAR_2.rq = 1;
 if (VAR_4->term_flags) {
  FUNC_1(VAR_3, &VAR_3->sq_minor_code,
         &VAR_3->sq_major_code, VAR_4->flush_code);
  FUNC_1(VAR_3, &VAR_3->rq_minor_code,
         &VAR_3->rq_major_code, VAR_4->flush_code);
 }
 (void)FUNC_0(VAR_0, &VAR_1->sc_qp, &VAR_2, 1);
}
