
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfp410_priv {int quiet; } ;
struct intel_dvo_device {int slave_addr; struct tfp410_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tfp410_priv*) ;
 struct tfp410_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (struct intel_dvo_device*,int ) ;

__attribute__((used)) static bool FUNC_4(struct intel_dvo_device *VAR_5,
   struct i2c_adapter *VAR_6)
{

 struct tfp410_priv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(struct tfp410_priv), VAR_0);
 if (VAR_7 == ((void*)0))
  return 0;

 VAR_5->i2c_bus = VAR_6;
 VAR_5->dev_priv = VAR_7;
 VAR_7->quiet = 1;

 if ((VAR_8 = FUNC_3(VAR_5, VAR_4)) != VAR_3) {
  FUNC_0("tfp410 not detected got VID %X: from %s "
    "Slave %d.\n",
     VAR_8, VAR_6->name, VAR_5->slave_addr);
  goto out;
 }

 if ((VAR_8 = FUNC_3(VAR_5, VAR_2)) != VAR_1) {
  FUNC_0("tfp410 not detected got DID %X: from %s "
    "Slave %d.\n",
     VAR_8, VAR_6->name, VAR_5->slave_addr);
  goto out;
 }
 VAR_7->quiet = 0;
 return 1;
out:
 FUNC_1(VAR_7);
 return 0;
}
