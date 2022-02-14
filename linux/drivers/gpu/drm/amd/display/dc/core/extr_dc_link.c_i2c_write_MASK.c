
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct pipe_ctx {TYPE_3__* stream; } ;
struct i2c_payload {int number_of_payloads; int write; struct i2c_payload* payloads; int length; int * data; int address; int speed; int engine; int member_0; } ;
struct i2c_command {int number_of_payloads; int write; struct i2c_command* payloads; int length; int * data; int address; int speed; int engine; int member_0; } ;
typedef int payload ;
typedef int cmd ;
struct TYPE_8__ {TYPE_2__* dc; } ;
struct TYPE_7__ {int link; TYPE_4__* ctx; } ;
struct TYPE_5__ {int i2c_speed_in_khz; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int ,struct i2c_payload*) ;
 int FUNC_1 (struct i2c_payload*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct pipe_ctx *VAR_1,
  uint8_t VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{
 struct i2c_command VAR_5 = {0};
 struct i2c_payload VAR_6 = {0};

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.number_of_payloads = 1;
 VAR_5.engine = VAR_0;
 VAR_5.speed = VAR_1->stream->ctx->dc->caps.i2c_speed_in_khz;

 VAR_6.address = VAR_2;
 VAR_6.data = VAR_3;
 VAR_6.length = VAR_4;
 VAR_6.write = 1;
 VAR_5.payloads = &VAR_6;

 if (FUNC_0(VAR_1->stream->ctx,
   VAR_1->stream->link, &VAR_5))
  return 1;

 return 0;
}
