
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gdsc {int gdscr; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct gdsc *VAR_1, bool VAR_2)
{
 u32 VAR_3 = VAR_2 ? VAR_0 : 0;

 return FUNC_0(VAR_1->regmap, VAR_1->gdscr, VAR_0, VAR_3);
}
