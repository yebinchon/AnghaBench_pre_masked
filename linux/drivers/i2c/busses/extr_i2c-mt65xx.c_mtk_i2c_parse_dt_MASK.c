
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_i2c {scalar_t__ speed_hz; scalar_t__ clk_src_div; void* use_push_pull; void* have_pmic; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_2, struct mtk_i2c *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, "clock-frequency", &VAR_3->speed_hz);
 if (VAR_4 < 0)
  VAR_3->speed_hz = VAR_1;

 VAR_4 = FUNC_1(VAR_2, "clock-div", &VAR_3->clk_src_div);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->clk_src_div == 0)
  return -VAR_0;

 VAR_3->have_pmic = FUNC_0(VAR_2, "mediatek,have-pmic");
 VAR_3->use_push_pull =
  FUNC_0(VAR_2, "mediatek,use-push-pull");

 return 0;
}
