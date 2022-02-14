
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7511 {int current_edid_segment; int regmap; TYPE_1__* i2c_main; } ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct adv7511 *VAR_8)
{
 VAR_8->current_edid_segment = -1;

 FUNC_1(VAR_8->regmap, VAR_4,
      VAR_3, 0);
 if (VAR_8->i2c_main->irq) {





  FUNC_2(VAR_8->regmap, FUNC_0(0),
        VAR_0 | VAR_1);
  FUNC_1(VAR_8->regmap,
       FUNC_0(1),
       VAR_2,
       VAR_2);
 }
 FUNC_1(VAR_8->regmap, VAR_5,
      VAR_6,
      VAR_7);
}
