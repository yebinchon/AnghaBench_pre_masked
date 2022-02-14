
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mem_ctl_info {int ctl_name; struct bluefield_edac_priv* pvt_info; } ;
struct bluefield_edac_priv {int* dimm_ranks; scalar_t__ emi_base; } ;
typedef enum hw_event_mc_err_type { ____Placeholder_hw_event_mc_err_type } hw_event_mc_err_type ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct mem_ctl_info*,int,int ,int ,int,int,int ,int,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_12,
     int VAR_13,
     int VAR_14)
{
 struct bluefield_edac_priv *VAR_15 = VAR_12->pvt_info;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 enum hw_event_mc_err_type VAR_25;
 u64 VAR_26;
 int VAR_27;

 VAR_25 = VAR_14 ? VAR_0 :
       VAR_1;





 VAR_20 = VAR_5;
 FUNC_5(VAR_20, VAR_15->emi_base + VAR_4);






 VAR_21 = FUNC_4(VAR_15->emi_base + VAR_8);
 VAR_22 = FUNC_0(VAR_10, VAR_21);
 VAR_23 = FUNC_0(VAR_9, VAR_21);
 VAR_24 = FUNC_0(VAR_11, VAR_21);

 if ((VAR_14 && !VAR_22) || (!VAR_14 && !VAR_23)) {
  FUNC_2(VAR_25, VAR_12, VAR_13, 0, 0, 0,
         0, 0, -1, VAR_12->ctl_name, "");
  return;
 }

 VAR_16 = FUNC_4(VAR_15->emi_base + VAR_2);
 VAR_17 = FUNC_0(VAR_3, VAR_16);

 VAR_27 = (VAR_17 >= 2 && VAR_15->dimm_ranks[0] <= 2) ? 1 : 0;

 VAR_18 = FUNC_4(VAR_15->emi_base + VAR_6);
 VAR_19 = FUNC_4(VAR_15->emi_base + VAR_7);

 VAR_26 = ((u64)VAR_19 << 32) | VAR_18;

 FUNC_2(VAR_25, VAR_12, VAR_13,
        FUNC_1(VAR_26),
        FUNC_3(VAR_26),
        VAR_24, VAR_27, 0, 0, VAR_12->ctl_name, "");
}
