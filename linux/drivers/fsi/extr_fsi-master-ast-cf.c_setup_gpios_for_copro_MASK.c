
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_acf {int gpio_data; int gpio_clk; int dev; int gpio_tra_bit; int gpio_tra_dreg; int gpio_tra_vreg; int gpio_trans; int gpio_dat_bit; int gpio_dat_dreg; int gpio_dat_vreg; int gpio_clk_bit; int gpio_clk_dreg; int gpio_clk_vreg; int gpio_enable; int gpio_mux; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct fsi_master_acf *VAR_0)
{

 int VAR_1;


 FUNC_3(VAR_0->gpio_mux, 1);
 FUNC_3(VAR_0->gpio_enable, 1);


 VAR_1 = FUNC_0(VAR_0->gpio_clk, &VAR_0->gpio_clk_vreg,
      &VAR_0->gpio_clk_dreg, &VAR_0->gpio_clk_bit);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to assign clock gpio to coprocessor\n");
  return VAR_1;
 }
 VAR_1 = FUNC_0(VAR_0->gpio_data, &VAR_0->gpio_dat_vreg,
      &VAR_0->gpio_dat_dreg, &VAR_0->gpio_dat_bit);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to assign data gpio to coprocessor\n");
  FUNC_1(VAR_0->gpio_clk);
  return VAR_1;
 }
 VAR_1 = FUNC_0(VAR_0->gpio_trans, &VAR_0->gpio_tra_vreg,
      &VAR_0->gpio_tra_dreg, &VAR_0->gpio_tra_bit);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "failed to assign trans gpio to coprocessor\n");
  FUNC_1(VAR_0->gpio_clk);
  FUNC_1(VAR_0->gpio_data);
  return VAR_1;
 }
 return 0;
}
