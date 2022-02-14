
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct i2c_request_transaction_data {int action; int status; int data; int length; int address; } ;
struct ddc {int dummy; } ;
struct dce_i2c_sw {int clock_delay; int ctx; struct ddc* ddc; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ddc*,int,int ,int ,int ) ;
 int FUNC_1 (int ,struct ddc*,int,int ,int ,int ) ;
 int FUNC_2 (int ,struct ddc*,int) ;
 int FUNC_3 (int ,struct ddc*,int) ;

void FUNC_4(
 struct dce_i2c_sw *VAR_2,
 struct i2c_request_transaction_data *VAR_3)
{
 struct ddc *VAR_4 = VAR_2->ddc;
 uint16_t VAR_5 = VAR_2->clock_delay >> 2;



 bool VAR_6 = FUNC_2(VAR_2->ctx, VAR_4, VAR_5);



 if (VAR_6) {
  switch (VAR_3->action) {
  case 129:
  case 128:
   VAR_6 = FUNC_1(VAR_2->ctx, VAR_4, VAR_5,
    VAR_3->address, VAR_3->length, VAR_3->data);
  break;
  case 131:
  case 130:
   VAR_6 = FUNC_0(VAR_2->ctx, VAR_4, VAR_5,
    VAR_3->address, VAR_3->length, VAR_3->data);
  break;
  default:
   VAR_6 = 0;
  break;
  }
 }



 if (!VAR_6 ||
  (VAR_3->action == 129) ||
  (VAR_3->action == 131))
  if (!FUNC_3(VAR_2->ctx, VAR_4, VAR_5))
   VAR_6 = 0;

 VAR_3->status = VAR_6 ?
  VAR_1 :
  VAR_0;
}
