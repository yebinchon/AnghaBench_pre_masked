
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca954x {int idle_state; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct i2c_mux_core* FUNC_1 (struct i2c_client*) ;
 struct pca954x* FUNC_2 (struct i2c_mux_core*) ;
 int FUNC_3 (char*,char*,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_0);
 struct i2c_mux_core *VAR_4 = FUNC_1(VAR_3);
 struct pca954x *VAR_5 = FUNC_2(VAR_4);

 return FUNC_3(VAR_2, "%d\n", FUNC_0(VAR_5->idle_state));
}
