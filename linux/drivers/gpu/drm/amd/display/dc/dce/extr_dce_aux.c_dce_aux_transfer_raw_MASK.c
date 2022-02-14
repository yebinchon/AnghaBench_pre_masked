
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ddc_service {TYPE_3__* ctx; struct ddc* ddc_pin; } ;
struct ddc {TYPE_4__* pin_data; } ;
struct dce_aux {TYPE_6__* ddc; } ;
struct aux_request_transaction_data {int delay; int data; int length; int address; int action; int type; } ;
struct aux_reply_transaction_data {int delay; int data; int length; int address; int action; int type; } ;
struct aux_payload {int defer_delay; int data; int * reply; int length; int address; scalar_t__ i2c_over_aux; } ;
typedef enum aux_channel_operation_result { ____Placeholder_aux_channel_operation_result } aux_channel_operation_result ;
typedef int aux_req ;
typedef int aux_rep ;
struct TYPE_12__ {TYPE_5__* pin_data; } ;
struct TYPE_11__ {int en; } ;
struct TYPE_10__ {size_t en; } ;
struct TYPE_9__ {TYPE_2__* dc; } ;
struct TYPE_8__ {TYPE_1__* res_pool; } ;
struct TYPE_7__ {struct dce_aux** engines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (struct dce_aux*,struct ddc*) ;
 int FUNC_2 (struct dce_aux*,int*) ;
 int FUNC_3 (struct aux_payload*) ;
 int FUNC_4 (struct aux_request_transaction_data*,int ,int) ;
 int FUNC_5 (struct dce_aux*,int ,int ,int *,int *) ;
 int FUNC_6 (struct dce_aux*) ;
 int FUNC_7 (struct dce_aux*,struct aux_request_transaction_data*) ;

int FUNC_8(struct ddc_service *VAR_4,
  struct aux_payload *VAR_5,
  enum aux_channel_operation_result *VAR_6)
{
 struct ddc *VAR_7 = VAR_4->ddc_pin;
 struct dce_aux *VAR_8;
 struct aux_request_transaction_data VAR_9;
 struct aux_reply_transaction_data VAR_10;
 uint8_t VAR_11 = 0;
 int VAR_12 = -1;
 uint32_t VAR_13;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 VAR_8 = VAR_4->ctx->dc->res_pool->engines[VAR_7->pin_data->en];
 if (!FUNC_1(VAR_8, VAR_7))
  return -1;

 if (VAR_5->i2c_over_aux)
  VAR_9.type = VAR_2;
 else
  VAR_9.type = VAR_1;

 VAR_9.action = FUNC_3(VAR_5);

 VAR_9.address = VAR_5->address;
 VAR_9.delay = VAR_5->defer_delay * 10;
 VAR_9.length = VAR_5->length;
 VAR_9.data = VAR_5->data;

 FUNC_7(VAR_8, &VAR_9);
 *VAR_6 = FUNC_2(VAR_8, &VAR_11);

 if (*VAR_6 == VAR_0) {
  int VAR_14 = 0;
  VAR_14 = FUNC_5(VAR_8, VAR_5->length,
      VAR_5->data, VAR_5->reply,
      &VAR_13);
  FUNC_0(VAR_8->ddc->pin_data->en,
     VAR_3, *VAR_5->reply,
     VAR_14, VAR_5->data);
  VAR_12 = VAR_11;
 } else {
  VAR_12 = -1;
 }

 FUNC_6(VAR_8);
 return VAR_12;
}
