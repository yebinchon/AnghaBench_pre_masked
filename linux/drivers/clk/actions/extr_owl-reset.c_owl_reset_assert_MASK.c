
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct owl_reset_map {int bit; int reg; } ;
struct owl_reset {int regmap; struct owl_reset_map* reset_map; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct owl_reset* FUNC_1 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_2(struct reset_controller_dev *VAR_0,
       unsigned long VAR_1)
{
 struct owl_reset *VAR_2 = FUNC_1(VAR_0);
 const struct owl_reset_map *VAR_3 = &VAR_2->reset_map[VAR_1];

 return FUNC_0(VAR_2->regmap, VAR_3->reg, VAR_3->bit, 0);
}
