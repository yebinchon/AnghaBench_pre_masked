
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int type_part1; int type_part2; int type_mask; int ctrl_reg; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct regmap*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct regmap *VAR_1,
         u8 VAR_2, u8 VAR_3)
{
 u32 VAR_4 = (VAR_3 & 0x1) << VAR_0[VAR_2].type_part1;

 VAR_4 |= (VAR_3 & 0x2) << VAR_0[VAR_2].type_part2;

 FUNC_0(VAR_1, VAR_0[VAR_2].ctrl_reg,
      VAR_0[VAR_2].type_mask, VAR_4);
}
