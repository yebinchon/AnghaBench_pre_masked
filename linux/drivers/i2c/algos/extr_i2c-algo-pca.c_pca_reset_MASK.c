
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pca_data {scalar_t__ chip; int data; int (* reset_chip ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_algo_pca_data*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_algo_pca_data *VAR_4)
{
 if (VAR_4->chip == VAR_0) {



  FUNC_0(VAR_4, VAR_2, VAR_3);
  FUNC_0(VAR_4, VAR_1, 0xA5);
  FUNC_0(VAR_4, VAR_1, 0x5A);
 } else {
  VAR_4->reset_chip(VAR_4->data);
 }
}
