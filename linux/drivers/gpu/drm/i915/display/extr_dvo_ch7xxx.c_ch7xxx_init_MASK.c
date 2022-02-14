
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u8 ;
struct intel_dvo_device {char* slave_addr; struct ch7xxx_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {char* name; } ;
struct ch7xxx_priv {int quiet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (struct intel_dvo_device*,int ,char**) ;
 int FUNC_4 (struct ch7xxx_priv*) ;
 struct ch7xxx_priv* FUNC_5 (int,int ) ;

__attribute__((used)) static bool FUNC_6(struct intel_dvo_device *VAR_3,
   struct i2c_adapter *VAR_4)
{

 struct ch7xxx_priv *VAR_5;
 u8 VAR_6, VAR_7;
 char *VAR_8, *VAR_9;

 VAR_5 = FUNC_5(sizeof(struct ch7xxx_priv), VAR_2);
 if (VAR_5 == ((void*)0))
  return 0;

 VAR_3->i2c_bus = VAR_4;
 VAR_3->dev_priv = VAR_5;
 VAR_5->quiet = 1;

 if (!FUNC_3(VAR_3, VAR_1, &VAR_6))
  goto out;

 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8) {
  FUNC_0("ch7xxx not detected; got VID 0x%02x from %s slave %d.\n",
         VAR_6, VAR_4->name, VAR_3->slave_addr);
  goto out;
 }


 if (!FUNC_3(VAR_3, VAR_0, &VAR_7))
  goto out;

 VAR_9 = FUNC_1(VAR_7);
 if (!VAR_9) {
  FUNC_0("ch7xxx not detected; got DID 0x%02x from %s slave %d.\n",
         VAR_7, VAR_4->name, VAR_3->slave_addr);
  goto out;
 }

 VAR_5->quiet = 0;
 FUNC_0("Detected %s chipset, vendor/device ID 0x%02x/0x%02x\n",
    VAR_8, VAR_6, VAR_7);
 return 1;
out:
 FUNC_4(VAR_5);
 return 0;
}
