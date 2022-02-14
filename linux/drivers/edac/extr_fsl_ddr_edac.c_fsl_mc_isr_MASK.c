
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct fsl_mc_pdata* pvt_info; } ;
struct fsl_mc_pdata {scalar_t__ mc_vbase; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mem_ctl_info*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct mem_ctl_info *VAR_5 = VAR_4;
 struct fsl_mc_pdata *VAR_6 = VAR_5->pvt_info;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->mc_vbase + VAR_0);
 if (!VAR_7)
  return VAR_2;

 FUNC_1(VAR_5);

 return VAR_1;
}
