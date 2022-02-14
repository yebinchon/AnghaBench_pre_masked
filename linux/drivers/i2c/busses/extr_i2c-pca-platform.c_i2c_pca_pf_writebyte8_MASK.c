
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_pca_pf_data {scalar_t__ reg_base; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1, int VAR_2)
{
 struct i2c_pca_pf_data *VAR_3 = VAR_0;
 FUNC_0(VAR_2, VAR_3->reg_base + VAR_1);
}
