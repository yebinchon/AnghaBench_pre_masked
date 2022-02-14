
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_kbc {int repeat_cnt; int irq; scalar_t__ mmio; scalar_t__ num_pressed_keys; int cp_dly_jiffies; int debounce_cnt; int rst; int clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tegra_kbc*) ;
 int FUNC_9 (struct tegra_kbc*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct tegra_kbc *VAR_9)
{
 unsigned int VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_9->clk);
 if (VAR_12)
  return VAR_12;


 FUNC_6(VAR_9->rst);
 FUNC_10(100);
 FUNC_7(VAR_9->rst);
 FUNC_10(100);

 FUNC_8(VAR_9);
 FUNC_9(VAR_9, 0);

 FUNC_12(VAR_9->repeat_cnt, VAR_9->mmio + VAR_8);


 VAR_10 = FUNC_4(VAR_9->debounce_cnt, VAR_7);
 VAR_11 = FUNC_0(VAR_10);
 VAR_11 |= FUNC_1(1);
 VAR_11 |= VAR_1;
 VAR_11 |= VAR_2;
 FUNC_12(VAR_11, VAR_9->mmio + VAR_0);





 VAR_11 = FUNC_5(VAR_9->mmio + VAR_3);
 VAR_9->cp_dly_jiffies = FUNC_11((VAR_11 & 0xfffff) * 32);

 VAR_9->num_pressed_keys = 0;





 while (1) {
  VAR_11 = FUNC_5(VAR_9->mmio + VAR_4);
  VAR_11 >>= 4;
  if (!VAR_11)
   break;

  VAR_11 = FUNC_5(VAR_9->mmio + VAR_5);
  VAR_11 = FUNC_5(VAR_9->mmio + VAR_6);
 }
 FUNC_12(0x7, VAR_9->mmio + VAR_4);

 FUNC_3(VAR_9->irq);

 return 0;
}
