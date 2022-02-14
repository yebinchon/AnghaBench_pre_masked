
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int pwm_en; int ctrl_reg; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct regmap *VAR_1, u8 VAR_2,
           bool VAR_3)
{
 FUNC_0(VAR_1, VAR_0[VAR_2].ctrl_reg,
      VAR_0[VAR_2].pwm_en,
      VAR_3 ? VAR_0[VAR_2].pwm_en : 0);
}
