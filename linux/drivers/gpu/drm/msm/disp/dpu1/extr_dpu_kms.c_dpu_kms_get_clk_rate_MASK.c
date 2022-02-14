
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dss_clk {int clk; } ;
struct dpu_kms {int dummy; } ;


 int VAR_0 ;
 struct dss_clk* FUNC_0 (struct dpu_kms*,char*) ;
 int FUNC_1 (int ) ;

u64 FUNC_2(struct dpu_kms *VAR_1, char *VAR_2)
{
 struct dss_clk *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_1(VAR_3->clk);
}
