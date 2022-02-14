
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int ctrl_reg1; int ctrl_reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int ,size_t) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct regmap *VAR_6, u8 VAR_7,
      u8 VAR_8, u16 VAR_9, u8 VAR_10)
{
 u32 VAR_11 = ((VAR_8 << VAR_3) |
    (VAR_9 << VAR_4) |
    (VAR_10 << VAR_1));

 FUNC_0(VAR_6, VAR_5[VAR_7].ctrl_reg,
      VAR_2, VAR_11);
 FUNC_0(VAR_6, VAR_5[VAR_7].ctrl_reg1,
      VAR_0, VAR_9 << 16);
}
