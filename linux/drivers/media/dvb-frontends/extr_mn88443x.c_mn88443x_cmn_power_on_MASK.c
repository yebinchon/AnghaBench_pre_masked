
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mn88443x_priv {TYPE_1__* spec; int reset_gpio; int mclk; struct regmap* regmap_t; } ;
struct TYPE_2__ {scalar_t__ primary; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct regmap*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct mn88443x_priv *VAR_7)
{
 struct regmap *VAR_8 = VAR_7->regmap_t;

 FUNC_0(VAR_7->mclk);

 FUNC_1(VAR_7->reset_gpio, 1);
 FUNC_3(100, 1000);
 FUNC_1(VAR_7->reset_gpio, 0);

 if (VAR_7->spec->primary) {
  FUNC_2(VAR_8, VAR_3, VAR_4);
  FUNC_2(VAR_8, VAR_5, VAR_6);
  FUNC_2(VAR_8, VAR_0, 0x80);
  FUNC_2(VAR_8, VAR_1, 0xe0);
 } else {
  FUNC_2(VAR_8, VAR_2, 0x8f);
 }
}
