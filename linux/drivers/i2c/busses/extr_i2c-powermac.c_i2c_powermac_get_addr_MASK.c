
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int dev; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,char*,struct device_node*) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static u32 FUNC_4(struct i2c_adapter *VAR_0,
        struct pmac_i2c_bus *VAR_1,
        struct device_node *VAR_2)
{
 const __be32 *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_2(VAR_2, "reg", &VAR_4);
 if (VAR_3 && (VAR_4 >= sizeof(int)))
  return (FUNC_0(VAR_3) & 0xff) >> 1;


 VAR_3 = FUNC_2(VAR_2, "i2c-address", &VAR_4);
 if (VAR_3 && (VAR_4 >= sizeof(int)))
  return (FUNC_0(VAR_3) & 0xff) >> 1;


 if (FUNC_3(VAR_2, "cereal"))
  return 0x60;
 else if (FUNC_3(VAR_2, "deq"))
  return 0x34;

 FUNC_1(&VAR_0->dev, "No i2c address for %pOF\n", VAR_2);

 return 0xffffffff;
}
