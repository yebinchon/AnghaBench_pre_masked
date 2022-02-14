
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tmp ;
struct i2c_adapter {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *,char*,struct device_node*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static bool FUNC_4(struct i2c_adapter *VAR_0,
         struct device_node *VAR_1,
         u32 VAR_2, char *VAR_3, int VAR_4)
{
 char VAR_5[16];
 if (FUNC_1(VAR_1, VAR_5, sizeof(VAR_5)) >= 0) {
  FUNC_3(VAR_3, VAR_4, "MAC,%s", VAR_5);
  return 1;
 }


 if (FUNC_2(VAR_1, "deq")) {

  if (VAR_2 == 0x34) {
   FUNC_3(VAR_3, VAR_4, "MAC,tas3001");
   return 1;
  } else if (VAR_2 == 0x35) {
   FUNC_3(VAR_3, VAR_4, "MAC,tas3004");
   return 1;
  }
 }

 FUNC_0(&VAR_0->dev, "i2c-powermac: modalias failure on %pOF\n", VAR_1);
 return 0;
}
