
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_pca_pf_data {scalar_t__ reg_base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1)
{
 struct i2c_pca_pf_data *VAR_2 = VAR_0;
 return FUNC_0(VAR_2->reg_base + VAR_1);
}
