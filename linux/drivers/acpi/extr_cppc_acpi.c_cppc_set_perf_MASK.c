
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cppc_perf_ctrls {int desired_perf; } ;
struct cppc_pcc_data {int pending_pcc_write_cmd; scalar_t__ pcc_write_cnt; int pcc_write_wait_q; int pcc_lock; scalar_t__ platform_owns_pcc; } ;
struct cpc_register_resource {int dummy; } ;
struct cpc_desc {scalar_t__ write_cmd_id; int write_cmd_status; struct cpc_register_resource* cpc_regs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpc_register_resource*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int,struct cpc_register_resource*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct cppc_pcc_data** VAR_5 ;
 struct cpc_desc* FUNC_5 (int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;

int FUNC_11(int VAR_6, struct cppc_perf_ctrls *VAR_7)
{
 struct cpc_desc *VAR_8 = FUNC_5(VAR_3, VAR_6);
 struct cpc_register_resource *VAR_9;
 int VAR_10 = FUNC_5(VAR_4, VAR_6);
 struct cppc_pcc_data *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 if (!VAR_8) {
  FUNC_6("No CPC descriptor for CPU:%d\n", VAR_6);
  return -VAR_2;
 }

 VAR_9 = &VAR_8->cpc_regs[VAR_1];
 if (FUNC_0(VAR_9)) {
  if (VAR_10 < 0) {
   FUNC_6("Invalid pcc_ss_id\n");
   return -VAR_2;
  }
  VAR_11 = VAR_5[VAR_10];
  FUNC_3(&VAR_11->pcc_lock);
  if (VAR_11->platform_owns_pcc) {
   VAR_12 = FUNC_1(VAR_10, 0);
   if (VAR_12) {
    FUNC_8(&VAR_11->pcc_lock);
    return VAR_12;
   }
  }




  VAR_11->pending_pcc_write_cmd = 1;
  VAR_8->write_cmd_id = VAR_11->pcc_write_cnt;
  VAR_8->write_cmd_status = 0;
 }





 FUNC_2(VAR_6, VAR_9, VAR_7->desired_perf);

 if (FUNC_0(VAR_9))
  FUNC_8(&VAR_11->pcc_lock);
 if (FUNC_0(VAR_9)) {
  if (FUNC_4(&VAR_11->pcc_lock)) {

   if (VAR_11->pending_pcc_write_cmd)
    FUNC_7(VAR_10, VAR_0);
   FUNC_9(&VAR_11->pcc_lock);
  } else

   FUNC_10(VAR_11->pcc_write_wait_q,
       VAR_8->write_cmd_id != VAR_11->pcc_write_cnt);


  VAR_12 = VAR_8->write_cmd_status;
 }
 return VAR_12;
}
