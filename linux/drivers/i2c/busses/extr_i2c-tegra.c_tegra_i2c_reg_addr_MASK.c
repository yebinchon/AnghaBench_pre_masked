
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_i2c_dev {scalar_t__ is_dvc; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct tegra_i2c_dev *VAR_1,
     unsigned long VAR_2)
{
 if (VAR_1->is_dvc)
  VAR_2 += (VAR_2 >= VAR_0) ? 0x10 : 0x40;
 return VAR_2;
}
