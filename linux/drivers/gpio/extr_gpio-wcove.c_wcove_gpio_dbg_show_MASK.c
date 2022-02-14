
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int regmap; } ;
struct seq_file {int dummy; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct wcove_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,unsigned int*) ;
 int FUNC_4 (struct seq_file*,char*,int,char*,char*,char*,char*,unsigned int,char*,char*) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_9,
          struct gpio_chip *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 struct wcove_gpio *VAR_15 = FUNC_1(VAR_10);
 int VAR_16, VAR_17, VAR_18, VAR_19 = 0;

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  VAR_18 = VAR_16 < VAR_5 ? 0 : 1;
  VAR_19 += FUNC_3(VAR_15->regmap, FUNC_5(VAR_16, VAR_4), &VAR_11);
  VAR_19 += FUNC_3(VAR_15->regmap, FUNC_5(VAR_16, VAR_3), &VAR_12);
  VAR_19 += FUNC_3(VAR_15->regmap, VAR_6 + VAR_18,
       &VAR_13);
  VAR_19 += FUNC_3(VAR_15->regmap, VAR_7 + VAR_18,
       &VAR_14);
  if (VAR_19) {
   FUNC_2("Failed to read registers: ctrl out/in or irq status/mask\n");
   break;
  }

  VAR_17 = VAR_16 % 8;
  FUNC_4(VAR_9, " gpio-%-2d %s %s %s %s ctlo=%2x,%s %s\n",
      VAR_16, VAR_11 & VAR_2 ? "out" : "in ",
      VAR_12 & 0x1 ? "hi" : "lo",
      VAR_12 & VAR_0 ? "fall" : "    ",
      VAR_12 & VAR_1 ? "rise" : "    ",
      VAR_11,
      VAR_13 & FUNC_0(VAR_17) ? "mask  " : "unmask",
      VAR_14 & FUNC_0(VAR_17) ? "pending" : "       ");
 }
}
