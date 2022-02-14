
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pca9541 {struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct pca9541* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct pca9541 *VAR_2 = FUNC_0(VAR_0);
 struct i2c_client *VAR_3 = VAR_2->client;

 FUNC_1(VAR_3);
 return 0;
}
