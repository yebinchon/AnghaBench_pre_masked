
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_adc {int fl_id; TYPE_1__* dfsdm; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct regmap*,int ,int ,int ) ;
 int FUNC_2 (struct stm32_dfsdm_adc*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct stm32_dfsdm_adc *VAR_1)
{
 struct regmap *VAR_2 = VAR_1->dfsdm->regmap;

 FUNC_3(VAR_1->dfsdm, VAR_1->fl_id);

 FUNC_1(VAR_2, FUNC_0(VAR_1->fl_id),
      VAR_0, 0);

 FUNC_2(VAR_1);
}
