
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina3221_data {int reg_config; int pm_dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct ina3221_data *VAR_0, int VAR_1)
{
 return FUNC_1(VAR_0->pm_dev) &&
        (VAR_0->reg_config & FUNC_0(VAR_1));
}
