
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct i2c_pca_pf_data {TYPE_1__ adap; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct i2c_pca_pf_data *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->adap.dev, "No reset-pin found. Chip may get stuck!\n");
}
