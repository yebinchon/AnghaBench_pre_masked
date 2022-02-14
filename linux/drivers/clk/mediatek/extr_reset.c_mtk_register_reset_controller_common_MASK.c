
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_control_ops {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {unsigned int nr_resets; struct device_node* of_node; struct reset_control_ops const* ops; int owner; } ;
struct mtk_reset {int regofs; TYPE_1__ rcdev; struct regmap* regmap; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_1 ;
 int FUNC_2 (struct mtk_reset*) ;
 struct mtk_reset* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (TYPE_1__*) ;
 struct regmap* FUNC_6 (struct device_node*) ;

__attribute__((used)) static void FUNC_7(struct device_node *VAR_2,
   unsigned int VAR_3, int VAR_4,
   const struct reset_control_ops *VAR_5)
{
 struct mtk_reset *VAR_6;
 int VAR_7;
 struct regmap *VAR_8;

 VAR_8 = FUNC_6(VAR_2);
 if (FUNC_0(VAR_8)) {
  FUNC_4("Cannot find regmap for %pOF: %ld\n", VAR_2,
    FUNC_1(VAR_8));
  return;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return;

 VAR_6->regmap = VAR_8;
 VAR_6->regofs = VAR_4;
 VAR_6->rcdev.owner = VAR_1;
 VAR_6->rcdev.nr_resets = VAR_3 * 32;
 VAR_6->rcdev.ops = VAR_5;
 VAR_6->rcdev.of_node = VAR_2;

 VAR_7 = FUNC_5(&VAR_6->rcdev);
 if (VAR_7) {
  FUNC_4("could not register reset controller: %d\n", VAR_7);
  FUNC_2(VAR_6);
  return;
 }
}
