
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mem_ctl_info {struct hb_mc_drvdata* pvt_info; } ;
struct hb_mc_drvdata {scalar_t__ mc_err_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_4, u8 VAR_5)
{
 struct hb_mc_drvdata *VAR_6 = VAR_4->pvt_info;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->mc_err_base + VAR_0);
 VAR_7 &= VAR_2;
 VAR_7 |= (VAR_5 << VAR_3) | VAR_1;
 FUNC_1(VAR_7, VAR_6->mc_err_base + VAR_0);
}
