
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns2501_priv {int quiet; } ;
struct intel_dvo_device {int slave_addr; struct ns2501_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ns2501_priv*) ;
 struct ns2501_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (struct intel_dvo_device*,int ,unsigned char*) ;

__attribute__((used)) static bool FUNC_4(struct intel_dvo_device *VAR_5,
   struct i2c_adapter *VAR_6)
{

 struct ns2501_priv *VAR_7;
 unsigned char VAR_8;

 VAR_7 = FUNC_2(sizeof(struct ns2501_priv), VAR_0);
 if (VAR_7 == ((void*)0))
  return 0;

 VAR_5->i2c_bus = VAR_6;
 VAR_5->dev_priv = VAR_7;
 VAR_7->quiet = 1;

 if (!FUNC_3(VAR_5, VAR_4, &VAR_8))
  goto out;

 if (VAR_8 != (VAR_3 & 0xff)) {
  FUNC_0("ns2501 not detected got %d: from %s Slave %d.\n",
         VAR_8, VAR_6->name, VAR_5->slave_addr);
  goto out;
 }

 if (!FUNC_3(VAR_5, VAR_2, &VAR_8))
  goto out;

 if (VAR_8 != (VAR_1 & 0xff)) {
  FUNC_0("ns2501 not detected got %d: from %s Slave %d.\n",
         VAR_8, VAR_6->name, VAR_5->slave_addr);
  goto out;
 }
 VAR_7->quiet = 0;

 FUNC_0("init ns2501 dvo controller successfully!\n");

 return 1;

out:
 FUNC_1(VAR_7);
 return 0;
}
