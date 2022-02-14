
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct crystalcove_gpio {int regmap; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct crystalcove_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (struct seq_file*,char*,int,char*,char*,char*,char*,unsigned int,char*,char*,char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_12,
          struct gpio_chip *VAR_13)
{
 struct crystalcove_gpio *VAR_14 = FUNC_1(VAR_13);
 int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  FUNC_2(VAR_14->regmap, FUNC_4(VAR_15, VAR_5), &VAR_17);
  FUNC_2(VAR_14->regmap, FUNC_4(VAR_15, VAR_4), &VAR_18);
  FUNC_2(VAR_14->regmap, VAR_15 < 8 ? VAR_8 : VAR_10,
       &VAR_19);
  FUNC_2(VAR_14->regmap, VAR_15 < 8 ? VAR_9 : VAR_11,
       &VAR_20);
  FUNC_2(VAR_14->regmap, VAR_15 < 8 ? VAR_6 : VAR_7,
       &VAR_21);

  VAR_16 = VAR_15 % 8;
  FUNC_3(VAR_12, " gpio-%-2d %s %s %s %s ctlo=%2x,%s %s %s\n",
      VAR_15, VAR_17 & VAR_3 ? "out" : "in ",
      VAR_18 & 0x1 ? "hi" : "lo",
      VAR_18 & VAR_1 ? "fall" : "    ",
      VAR_18 & VAR_2 ? "rise" : "    ",
      VAR_17,
      VAR_19 & FUNC_0(VAR_16) ? "s0 mask  " : "s0 unmask",
      VAR_20 & FUNC_0(VAR_16) ? "sx mask  " : "sx unmask",
      VAR_21 & FUNC_0(VAR_16) ? "pending" : "       ");
 }
}
