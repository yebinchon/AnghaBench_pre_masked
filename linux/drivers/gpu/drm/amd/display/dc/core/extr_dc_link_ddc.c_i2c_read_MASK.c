
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct i2c_payload {int write; int address; int length; int * data; } ;
struct i2c_command {int number_of_payloads; int speed; int engine; struct i2c_payload* payloads; } ;
struct ddc_service {int link; TYPE_3__* ctx; } ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct TYPE_4__ {int i2c_speed_in_khz; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,struct i2c_command*) ;

__attribute__((used)) static bool FUNC_1(
 struct ddc_service *VAR_1,
 uint32_t VAR_2,
 uint8_t *VAR_3,
 uint32_t VAR_4)
{
 uint8_t VAR_5 = 0;
 struct i2c_payload VAR_6[2] = {
  {
  .write = 1,
  .address = VAR_2,
  .length = 1,
  .data = &VAR_5 },
  {
  .write = 0,
  .address = VAR_2,
  .length = VAR_4,
  .data = VAR_3 } };

 struct i2c_command VAR_7 = {
  .payloads = VAR_6,
  .number_of_payloads = 2,
  .engine = VAR_0,
  .speed = VAR_1->ctx->dc->caps.i2c_speed_in_khz };

 return FUNC_0(
   VAR_1->ctx,
   VAR_1->link,
   &VAR_7);
}
