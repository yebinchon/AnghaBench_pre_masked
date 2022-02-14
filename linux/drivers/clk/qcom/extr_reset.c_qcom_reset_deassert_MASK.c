
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct qcom_reset_map {int reg; int bit; } ;
struct qcom_reset_controller {int regmap; struct qcom_reset_map* reset_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct qcom_reset_controller* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int
FUNC_3(struct reset_controller_dev *VAR_0, unsigned long VAR_1)
{
 struct qcom_reset_controller *VAR_2;
 const struct qcom_reset_map *VAR_3;
 u32 VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = &VAR_2->reset_map[VAR_1];
 VAR_4 = FUNC_0(VAR_3->bit);

 return FUNC_1(VAR_2->regmap, VAR_3->reg, VAR_4, 0);
}
