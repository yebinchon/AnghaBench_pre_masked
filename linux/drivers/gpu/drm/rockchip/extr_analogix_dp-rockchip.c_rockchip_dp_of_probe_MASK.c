
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dp_device {int * rst; int * pclk; int * grfclk; int * grf; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,char*) ;
 int * FUNC_5 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_6(struct rockchip_dp_device *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct device_node *VAR_4 = VAR_3->of_node;

 VAR_2->grf = FUNC_5(VAR_4, "rockchip,grf");
 if (FUNC_1(VAR_2->grf)) {
  FUNC_0(VAR_3, "failed to get rockchip,grf property\n");
  return FUNC_2(VAR_2->grf);
 }

 VAR_2->grfclk = FUNC_3(VAR_3, "grf");
 if (FUNC_2(VAR_2->grfclk) == -VAR_0) {
  VAR_2->grfclk = ((void*)0);
 } else if (FUNC_2(VAR_2->grfclk) == -VAR_1) {
  return -VAR_1;
 } else if (FUNC_1(VAR_2->grfclk)) {
  FUNC_0(VAR_3, "failed to get grf clock\n");
  return FUNC_2(VAR_2->grfclk);
 }

 VAR_2->pclk = FUNC_3(VAR_3, "pclk");
 if (FUNC_1(VAR_2->pclk)) {
  FUNC_0(VAR_3, "failed to get pclk property\n");
  return FUNC_2(VAR_2->pclk);
 }

 VAR_2->rst = FUNC_4(VAR_3, "dp");
 if (FUNC_1(VAR_2->rst)) {
  FUNC_0(VAR_3, "failed to get dp reset control\n");
  return FUNC_2(VAR_2->rst);
 }

 return 0;
}
