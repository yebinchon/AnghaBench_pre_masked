
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct tps68470_gpio_data {TYPE_1__ gc; struct regmap* tps68470_regmap; } ;
struct regmap {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 struct tps68470_gpio_data* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct regmap*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3,
           unsigned int VAR_4)
{
 struct tps68470_gpio_data *VAR_5 = FUNC_2(VAR_3);
 struct regmap *VAR_6 = VAR_5->tps68470_regmap;
 int VAR_7, VAR_8;


 if (VAR_4 >= VAR_2)
  return 0;

 VAR_8 = FUNC_3(VAR_6, FUNC_0(VAR_4), &VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_5->gc.parent, "reg 0x%x read failed\n",
   FUNC_0(VAR_4));
  return VAR_8;
 }

 VAR_7 &= VAR_0;
 return VAR_7 >= VAR_1 ? 0 : 1;
}
