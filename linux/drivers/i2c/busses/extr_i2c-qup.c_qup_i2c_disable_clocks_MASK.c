
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_dev {int pclk; scalar_t__ base; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qup_i2c_dev*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct qup_i2c_dev *VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_3->clk);
 VAR_4 = FUNC_2(VAR_3->base + VAR_1);
 VAR_4 |= VAR_0;
 FUNC_3(VAR_4, VAR_3->base + VAR_1);
 FUNC_0(VAR_3->pclk);
}
