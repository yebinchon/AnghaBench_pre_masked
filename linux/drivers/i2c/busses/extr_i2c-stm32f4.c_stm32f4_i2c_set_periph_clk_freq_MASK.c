
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32f4_i2c_dev {scalar_t__ speed; scalar_t__ base; int dev; int parent_rate; int clk; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct stm32f4_i2c_dev *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = 0;

 VAR_7->parent_rate = FUNC_2(VAR_7->clk);
 VAR_8 = FUNC_0(VAR_7->parent_rate, VAR_1);

 if (VAR_7->speed == VAR_6) {





  if (VAR_8 < VAR_5 ||
      VAR_8 > VAR_3) {
   FUNC_3(VAR_7->dev,
    "bad parent clk freq for standard mode\n");
   return -VAR_0;
  }
 } else {





  if (VAR_8 < VAR_4 ||
      VAR_8 > VAR_3) {
   FUNC_3(VAR_7->dev,
    "bad parent clk freq for fast mode\n");
   return -VAR_0;
  }
 }

 VAR_9 |= FUNC_1(VAR_8);
 FUNC_4(VAR_9, VAR_7->base + VAR_2);

 return 0;
}
