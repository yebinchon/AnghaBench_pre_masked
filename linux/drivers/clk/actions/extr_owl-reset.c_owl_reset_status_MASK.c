
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct owl_reset_map {int bit; int reg; } ;
struct owl_reset {int regmap; struct owl_reset_map* reset_map; } ;


 int FUNC_0 (int ,int ,int*) ;
 struct owl_reset* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1)
{
 struct owl_reset *VAR_2 = FUNC_1(VAR_0);
 const struct owl_reset_map *VAR_3 = &VAR_2->reset_map[VAR_1];
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->regmap, VAR_3->reg, &VAR_4);
 if (VAR_5)
  return VAR_5;





 return !(VAR_3->bit & VAR_4);
}
