
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_msg {int buf; int len; int addr; int flags; } ;
struct i2c_command {int number_of_payloads; TYPE_1__* payloads; } ;
struct dc_link {struct amdgpu_dm_connector* priv; } ;
struct dc_context {int dummy; } ;
struct amdgpu_dm_connector {TYPE_2__* i2c; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {int data; int length; int address; scalar_t__ write; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct i2c_msg*,int) ;
 struct i2c_msg* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct i2c_msg*) ;

bool FUNC_4(
  struct dc_context *VAR_2,
  const struct dc_link *VAR_3,
  struct i2c_command *VAR_4)
{
 struct amdgpu_dm_connector *VAR_5 = VAR_3->priv;
 struct i2c_msg *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = VAR_4->number_of_payloads;
 bool VAR_9;

 if (!VAR_5) {
  FUNC_0("Failed to found connector for link!");
  return 0;
 }

 VAR_6 = FUNC_2(VAR_8, sizeof(struct i2c_msg), VAR_0);

 if (!VAR_6)
  return 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6[VAR_7].flags = VAR_4->payloads[VAR_7].write ? 0 : VAR_1;
  VAR_6[VAR_7].addr = VAR_4->payloads[VAR_7].address;
  VAR_6[VAR_7].len = VAR_4->payloads[VAR_7].length;
  VAR_6[VAR_7].buf = VAR_4->payloads[VAR_7].data;
 }

 VAR_9 = FUNC_1(&VAR_5->i2c->base, VAR_6, VAR_8) == VAR_8;

 FUNC_3(VAR_6);

 return VAR_9;
}
