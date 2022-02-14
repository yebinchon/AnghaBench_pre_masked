
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct cm3232_chip {int regs_cmd; struct i2c_client* client; TYPE_1__* als_info; } ;
typedef int s32 ;
struct TYPE_2__ {int hw_id; int regs_cmd_default; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct cm3232_chip *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_6->client;
 s32 VAR_8;

 VAR_6->als_info = &VAR_5;


 VAR_8 = FUNC_1(VAR_7, VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error reading addr_id\n");
  return VAR_8;
 }

 if ((VAR_8 & 0xFF) != VAR_6->als_info->hw_id)
  return -VAR_4;


 VAR_6->regs_cmd = VAR_0 | VAR_1;
 VAR_8 = FUNC_2(VAR_7, VAR_2,
     VAR_6->regs_cmd);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_6->client->dev, "Error writing reg_cmd\n");
  return VAR_8;
 }


 VAR_6->regs_cmd = VAR_6->als_info->regs_cmd_default;


 VAR_8 = FUNC_2(VAR_7, VAR_2,
     VAR_6->regs_cmd);
 if (VAR_8 < 0)
  FUNC_0(&VAR_6->client->dev, "Error writing reg_cmd\n");

 return VAR_8;
}
