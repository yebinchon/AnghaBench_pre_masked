
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pie_status {int one_third_q_size; int lock_mtx; int aqm_pie_callout; struct dn_aqm_pie_parms* parms; } ;
struct TYPE_4__ {int limit; int flows_cnt; } ;
struct fq_pie_schk {TYPE_2__ cfg; } ;
struct fq_pie_flow {TYPE_1__* psi_extra; struct pie_status pst; } ;
struct dn_aqm_pie_parms {int dummy; } ;
struct TYPE_3__ {int nr_active_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct fq_pie_flow *VAR_3, struct fq_pie_schk *VAR_4)
{
 struct pie_status *VAR_5=&VAR_3->pst;
 struct dn_aqm_pie_parms *VAR_6 = VAR_5->parms;

 int VAR_7 = 0;
 if (!VAR_6){
  FUNC_0("AQM_PIE is not configured");
  VAR_7 = VAR_1;
 } else {
  VAR_3->psi_extra->nr_active_q++;



  VAR_5->one_third_q_size = (VAR_4->cfg.limit /
   VAR_4->cfg.flows_cnt) / 3;

  FUNC_2(&VAR_5->lock_mtx, "mtx_pie", ((void*)0), VAR_2);
  FUNC_1(&VAR_5->aqm_pie_callout, &VAR_5->lock_mtx,
   VAR_0);
 }

 return VAR_7;
}
