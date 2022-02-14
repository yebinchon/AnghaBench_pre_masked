
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct cppc_perf_caps {void* nominal_freq; void* lowest_freq; void* lowest_nonlinear_perf; void* guaranteed_perf; void* nominal_perf; void* lowest_perf; void* highest_perf; } ;
struct cppc_pcc_data {int pcc_lock; } ;
struct TYPE_2__ {int reg; } ;
struct cpc_register_resource {scalar_t__ type; TYPE_1__ cpc_entry; } ;
struct cpc_desc {struct cpc_register_resource* cpc_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cpc_register_resource*) ;
 scalar_t__ FUNC_1 (struct cpc_register_resource*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int,struct cpc_register_resource*,void**) ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 struct cppc_pcc_data** VAR_14 ;
 struct cpc_desc* FUNC_5 (int ,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(int VAR_15, struct cppc_perf_caps *VAR_16)
{
 struct cpc_desc *VAR_17 = FUNC_5(VAR_12, VAR_15);
 struct cpc_register_resource *VAR_18, *VAR_19,
  *VAR_20, *VAR_21, *VAR_22,
  *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 u64 VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30 = 0, VAR_31 = 0;
 int VAR_32 = FUNC_5(VAR_13, VAR_15);
 struct cppc_pcc_data *VAR_33 = ((void*)0);
 int VAR_34 = 0, VAR_35 = 0;

 if (!VAR_17) {
  FUNC_6("No CPC descriptor for CPU:%d\n", VAR_15);
  return -VAR_4;
 }

 VAR_18 = &VAR_17->cpc_regs[VAR_6];
 VAR_19 = &VAR_17->cpc_regs[VAR_8];
 VAR_20 = &VAR_17->cpc_regs[VAR_9];
 VAR_21 = &VAR_17->cpc_regs[VAR_11];
 VAR_23 = &VAR_17->cpc_regs[VAR_7];
 VAR_24 = &VAR_17->cpc_regs[VAR_10];
 VAR_22 = &VAR_17->cpc_regs[VAR_5];


 if (FUNC_0(VAR_18) || FUNC_0(VAR_19) ||
  FUNC_0(VAR_20) || FUNC_0(VAR_21) ||
  FUNC_0(VAR_23) || FUNC_0(VAR_24)) {
  if (VAR_32 < 0) {
   FUNC_6("Invalid pcc_ss_id\n");
   return -VAR_4;
  }
  VAR_33 = VAR_14[VAR_32];
  VAR_35 = 1;
  FUNC_4(&VAR_33->pcc_lock);

  if (FUNC_7(VAR_32, VAR_1) < 0) {
   VAR_34 = -VAR_3;
   goto out_err;
  }
 }

 FUNC_3(VAR_15, VAR_18, &VAR_25);
 VAR_16->highest_perf = VAR_25;

 FUNC_3(VAR_15, VAR_19, &VAR_26);
 VAR_16->lowest_perf = VAR_26;

 FUNC_3(VAR_15, VAR_21, &VAR_28);
 VAR_16->nominal_perf = VAR_28;

 if (VAR_22->type != VAR_0 ||
     FUNC_2(&VAR_22->cpc_entry.reg)) {
  VAR_16->guaranteed_perf = 0;
 } else {
  FUNC_3(VAR_15, VAR_22, &VAR_27);
  VAR_16->guaranteed_perf = VAR_27;
 }

 FUNC_3(VAR_15, VAR_20, &VAR_29);
 VAR_16->lowest_nonlinear_perf = VAR_29;

 if (!VAR_25 || !VAR_26 || !VAR_28 || !VAR_29)
  VAR_34 = -VAR_2;


 if (FUNC_1(VAR_23))
  FUNC_3(VAR_15, VAR_23, &VAR_30);

 if (FUNC_1(VAR_24))
  FUNC_3(VAR_15, VAR_24, &VAR_31);

 VAR_16->lowest_freq = VAR_30;
 VAR_16->nominal_freq = VAR_31;


out_err:
 if (VAR_35)
  FUNC_8(&VAR_33->pcc_lock);
 return VAR_34;
}
