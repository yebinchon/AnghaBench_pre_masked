
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct i2c_payloads {int dummy; } ;
struct i2c_command {int number_of_payloads; int speed; int engine; int payloads; } ;
struct ddc_service {int link; TYPE_3__* ctx; } ;
struct aux_payload {int i2c_over_aux; int write; int mot; int address; int length; int defer_delay; int * reply; int * data; } ;
struct TYPE_7__ {TYPE_2__* dc; } ;
struct TYPE_5__ {int i2c_speed_in_khz; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_payloads*,int,int,int *,int) ;
 struct i2c_payloads* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (struct i2c_payloads**) ;
 int FUNC_3 (struct i2c_payloads*) ;
 int FUNC_4 (struct i2c_payloads*) ;
 scalar_t__ FUNC_5 (struct ddc_service*) ;
 int FUNC_6 (struct ddc_service*,struct aux_payload*) ;
 int FUNC_7 (TYPE_3__*,int ,struct i2c_command*) ;
 int FUNC_8 (struct ddc_service*) ;

bool FUNC_9(
 struct ddc_service *VAR_3,
 uint32_t VAR_4,
 uint8_t *VAR_5,
 uint32_t VAR_6,
 uint8_t *VAR_7,
 uint32_t VAR_8)
{
 bool VAR_9;
 uint32_t VAR_10 =
  FUNC_5(VAR_3) ?
   VAR_1 : VAR_2;

 uint32_t VAR_11 =
  (VAR_6 + VAR_10 - 1) / VAR_10;

 uint32_t VAR_12 =
  (VAR_8 + VAR_10 - 1) / VAR_10;

 uint32_t VAR_13 = VAR_11 + VAR_12;

 if (VAR_6 > VAR_2 || VAR_8 > VAR_2)
  return 0;



 if (FUNC_5(VAR_3)) {
  struct aux_payload VAR_14 = {
   .i2c_over_aux = 1,
   .write = 1,
   .mot = 1,
   .address = VAR_4,
   .length = VAR_6,
   .data = VAR_5,
   .reply = ((void*)0),
   .defer_delay = FUNC_8(VAR_3),
  };

  struct aux_payload VAR_15 = {
   .i2c_over_aux = 1,
   .write = 0,
   .mot = 0,
   .address = VAR_4,
   .length = VAR_8,
   .data = VAR_7,
   .reply = ((void*)0),
   .defer_delay = FUNC_8(VAR_3),
  };

  VAR_9 = FUNC_6(VAR_3, &VAR_14);

  if (!VAR_9)
   return 0;

  VAR_9 = FUNC_6(VAR_3, &VAR_15);
 } else {
  struct i2c_payloads *VAR_16 =
   FUNC_1(VAR_3->ctx, VAR_13);

  struct i2c_command VAR_17 = {
   .payloads = FUNC_3(VAR_16),
   .number_of_payloads = 0,
   .engine = VAR_0,
   .speed = VAR_3->ctx->dc->caps.i2c_speed_in_khz };

  FUNC_0(
   VAR_16, VAR_4, VAR_6, VAR_5, 1);

  FUNC_0(
   VAR_16, VAR_4, VAR_8, VAR_7, 0);

  VAR_17.number_of_payloads =
   FUNC_4(VAR_16);

  VAR_9 = FUNC_7(
    VAR_3->ctx,
    VAR_3->link,
    &VAR_17);

  FUNC_2(&VAR_16);
 }

 return VAR_9;
}
