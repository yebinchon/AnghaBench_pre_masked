
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct komeda_pipeline {int dual_link; int of_node; void** of_output_links; int of_output_port; struct clk* pxlclk; } ;
struct komeda_dev {size_t n_pipelines; struct komeda_pipeline** pipelines; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_1 ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,int ) ;
 void* FUNC_5 (struct device_node*,int ,int) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*,char*,size_t*) ;

__attribute__((used)) static int FUNC_8(struct komeda_dev *VAR_2, struct device_node *VAR_3)
{
 struct komeda_pipeline *VAR_4;
 struct clk *VAR_5;
 u32 VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_7(VAR_3, "reg", &VAR_6);
 if (VAR_7 != 0 || VAR_6 >= VAR_2->n_pipelines)
  return -VAR_0;

 VAR_4 = VAR_2->pipelines[VAR_6];

 VAR_5 = FUNC_3(VAR_3, "pxclk");
 if (FUNC_1(VAR_5)) {
  FUNC_0("get pxclk for pipeline %d failed!\n", VAR_6);
  return FUNC_2(VAR_5);
 }
 VAR_4->pxlclk = VAR_5;


 VAR_4->of_output_links[0] =
  FUNC_5(VAR_3, VAR_1, 0);
 VAR_4->of_output_links[1] =
  FUNC_5(VAR_3, VAR_1, 1);
 VAR_4->of_output_port =
  FUNC_4(VAR_3, VAR_1);

 VAR_4->dual_link = VAR_4->of_output_links[0] && VAR_4->of_output_links[1];
 VAR_4->of_node = FUNC_6(VAR_3);

 return 0;
}
