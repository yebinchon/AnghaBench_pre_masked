
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_i2c_dev {int clk_freq; int tft; int rft; int timeout; int sm; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static void FUNC_1(struct device_node *VAR_2,
        struct nmk_i2c_dev *VAR_3)
{

 if (FUNC_0(VAR_2, "clock-frequency", &VAR_3->clk_freq))
  VAR_3->clk_freq = 100000;


 if (VAR_3->clk_freq <= 100000)
  VAR_3->sm = VAR_1;
 else
  VAR_3->sm = VAR_0;
 VAR_3->tft = 1;
 VAR_3->rft = 8;
 VAR_3->timeout = 200;
}
