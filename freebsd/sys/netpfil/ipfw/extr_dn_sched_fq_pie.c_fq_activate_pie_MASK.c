
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pie_status {int sflags; int lock_mtx; int aqm_pie_callout; int measurement_start; scalar_t__ avg_dq_time; scalar_t__ dq_count; scalar_t__ accu_prob; int burst_allowance; scalar_t__ qdelay_old; scalar_t__ drop_prob; struct dn_aqm_pie_parms* parms; } ;
struct fq_pie_flow {struct pie_status pst; } ;
struct dn_aqm_pie_parms {scalar_t__ tupdate; int max_burst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,int ,struct fq_pie_flow*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) __inline static void
FUNC_3(struct fq_pie_flow *VAR_5)
{
 struct pie_status *VAR_6 = &VAR_5->pst;
 struct dn_aqm_pie_parms *VAR_7;

 FUNC_1(&VAR_6->lock_mtx);
 VAR_7 = VAR_6->parms;

 VAR_7 = VAR_6->parms;
 VAR_6->drop_prob = 0;
 VAR_6->qdelay_old = 0;
 VAR_6->burst_allowance = VAR_7->max_burst;
 VAR_6->accu_prob = 0;
 VAR_6->dq_count = 0;
 VAR_6->avg_dq_time = 0;
 VAR_6->sflags = VAR_2 | VAR_1;
 VAR_6->measurement_start = VAR_0;

 FUNC_0(&VAR_6->aqm_pie_callout,
  (uint64_t)VAR_7->tupdate * VAR_3,
  0, VAR_4, VAR_5, 0);

 FUNC_2(&VAR_6->lock_mtx);
}
