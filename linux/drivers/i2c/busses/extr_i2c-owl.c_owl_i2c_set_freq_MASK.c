
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_i2c_dev {int bus_freq; scalar_t__ base; int clk_rate; } ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct owl_i2c_dev *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk_rate, VAR_1->bus_freq * 16);


 FUNC_2(FUNC_1(VAR_2), VAR_1->base + VAR_0);
}
