
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pca_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_algo_pca_data*) ;
 int FUNC_1 (struct i2c_algo_pca_data*,int) ;
 int FUNC_2 (struct i2c_algo_pca_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_algo_pca_data *VAR_4,
        int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4);

 VAR_6 &= ~(VAR_3|VAR_2|VAR_1|VAR_0);

 if (VAR_5)
  VAR_6 |= VAR_0;

 FUNC_1(VAR_4, VAR_6);
 return FUNC_2(VAR_4);
}
