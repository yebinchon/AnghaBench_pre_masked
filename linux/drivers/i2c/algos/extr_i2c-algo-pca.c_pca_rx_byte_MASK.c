
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pca_data {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_algo_pca_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_algo_pca_data *VAR_1,
   __u8 *VAR_2, int VAR_3)
{
 *VAR_2 = FUNC_1(VAR_1, VAR_0);
 FUNC_0("=== READ %#04x %s\n", *VAR_2, VAR_3 ? "ACK" : "NACK");
}
