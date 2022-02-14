
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_config {int val_bits; int reg_bits; scalar_t__ pad_bits; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct regmap_config *VAR_1)
{

 if (VAR_1->val_bits != 8)
  return -VAR_0;


 if (VAR_1->reg_bits != 32)
  return -VAR_0;

 if (VAR_1->pad_bits != 0)
  return -VAR_0;

 return 0;
}
