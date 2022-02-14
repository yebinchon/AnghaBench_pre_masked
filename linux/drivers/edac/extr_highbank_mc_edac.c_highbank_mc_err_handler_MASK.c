
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {int ctl_name; struct hb_mc_drvdata* pvt_info; } ;
struct hb_mc_drvdata {scalar_t__ mc_int_base; scalar_t__ mc_err_base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,int,int,int,int ,int ,int,int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_12, void *VAR_13)
{
 struct mem_ctl_info *VAR_14 = VAR_13;
 struct hb_mc_drvdata *VAR_15 = VAR_14->pvt_info;
 u32 VAR_16, VAR_17;


 VAR_16 = FUNC_1(VAR_15->mc_int_base + VAR_3);

 if (VAR_16 & VAR_5) {
  VAR_17 = FUNC_1(VAR_15->mc_err_base + VAR_6);
  FUNC_0(VAR_8, VAR_14, 1,
         VAR_17 >> VAR_11,
         VAR_17 & ~VAR_10, 0,
         0, 0, -1,
         VAR_14->ctl_name, "");
 }
 if (VAR_16 & VAR_4) {
  u32 VAR_18 = FUNC_1(VAR_15->mc_err_base + VAR_1);
  VAR_18 = (VAR_18 >> 8) & 0xff;
  VAR_17 = FUNC_1(VAR_15->mc_err_base + VAR_0);
  FUNC_0(VAR_7, VAR_14, 1,
         VAR_17 >> VAR_11,
         VAR_17 & ~VAR_10, VAR_18,
         0, 0, -1,
         VAR_14->ctl_name, "");
 }


 FUNC_2(VAR_16, VAR_15->mc_int_base + VAR_2);
 return VAR_9;
}
