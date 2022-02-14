
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dvo_device {int slave_addr; struct ch7017_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {int name; } ;
struct ch7017_priv {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_2 (struct ch7017_priv*) ;
 struct ch7017_priv* FUNC_3 (int,int ) ;

__attribute__((used)) static bool FUNC_4(struct intel_dvo_device *VAR_2,
   struct i2c_adapter *VAR_3)
{
 struct ch7017_priv *VAR_4;
 const char *VAR_5;
 u8 VAR_6;

 VAR_4 = FUNC_3(sizeof(struct ch7017_priv), VAR_1);
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_2->i2c_bus = VAR_3;
 VAR_2->dev_priv = VAR_4;

 if (!FUNC_1(VAR_2, VAR_0, &VAR_6))
  goto fail;

 switch (VAR_6) {
 case 130:
  VAR_5 = "ch7017";
  break;
 case 129:
  VAR_5 = "ch7018";
  break;
 case 128:
  VAR_5 = "ch7019";
  break;
 default:
  FUNC_0("ch701x not detected, got %d: from %s "
         "slave %d.\n",
         VAR_6, VAR_3->name, VAR_2->slave_addr);
  goto fail;
 }

 FUNC_0("%s detected on %s, addr %d\n",
        VAR_5, VAR_3->name, VAR_2->slave_addr);
 return 1;

fail:
 FUNC_2(VAR_4);
 return 0;
}
