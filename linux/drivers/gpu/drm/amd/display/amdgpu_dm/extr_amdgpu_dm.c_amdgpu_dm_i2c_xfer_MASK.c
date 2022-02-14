
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_payload {int dummy; } ;
struct i2c_msg {int flags; int buf; int len; int addr; } ;
struct i2c_command {int number_of_payloads; int speed; TYPE_4__* payloads; int engine; } ;
struct i2c_adapter {int dummy; } ;
struct ddc_service {TYPE_3__* ddc_pin; TYPE_1__* ctx; } ;
struct amdgpu_i2c_adapter {struct ddc_service* ddc_service; } ;
struct TYPE_9__ {int write; int data; int length; int address; } ;
struct TYPE_7__ {int ddc_channel; } ;
struct TYPE_8__ {TYPE_2__ hw_info; } ;
struct TYPE_6__ {int dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,struct i2c_command*) ;
 struct amdgpu_i2c_adapter* FUNC_1 (struct i2c_adapter*) ;
 TYPE_4__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_4,
         struct i2c_msg *VAR_5, int VAR_6)
{
 struct amdgpu_i2c_adapter *VAR_7 = FUNC_1(VAR_4);
 struct ddc_service *VAR_8 = VAR_7->ddc_service;
 struct i2c_command VAR_9;
 int VAR_10;
 int VAR_11 = -VAR_0;

 VAR_9.payloads = FUNC_2(VAR_6, sizeof(struct i2c_payload), VAR_1);

 if (!VAR_9.payloads)
  return VAR_11;

 VAR_9.number_of_payloads = VAR_6;
 VAR_9.engine = VAR_2;
 VAR_9.speed = 100;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9.payloads[VAR_10].write = !(VAR_5[VAR_10].flags & VAR_3);
  VAR_9.payloads[VAR_10].address = VAR_5[VAR_10].addr;
  VAR_9.payloads[VAR_10].length = VAR_5[VAR_10].len;
  VAR_9.payloads[VAR_10].data = VAR_5[VAR_10].buf;
 }

 if (FUNC_0(
   VAR_8->ctx->dc,
   VAR_8->ddc_pin->hw_info.ddc_channel,
   &VAR_9))
  VAR_11 = VAR_6;

 FUNC_3(VAR_9.payloads);
 return VAR_11;
}
