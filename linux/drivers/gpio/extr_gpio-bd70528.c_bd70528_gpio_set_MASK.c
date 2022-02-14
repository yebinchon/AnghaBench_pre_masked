
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int dev; int regmap; } ;
struct bd70528_gpio {TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 struct bd70528_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_3, unsigned int VAR_4,
        int VAR_5)
{
 int VAR_6;
 struct bd70528_gpio *VAR_7 = FUNC_2(VAR_3);
 u8 VAR_8 = (VAR_5) ? VAR_0 : VAR_1;

 VAR_6 = FUNC_3(VAR_7->chip.regmap, FUNC_0(VAR_4),
     VAR_2, VAR_8);
 if (VAR_6)
  FUNC_1(VAR_7->chip.dev, "Could not set gpio to %d\n", VAR_5);
}
