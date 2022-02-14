
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_aux_msg {int size; int request; int reply; int buffer; int address; } ;
struct drm_dp_aux {int dummy; } ;
struct aux_payload {int length; int i2c_over_aux; int write; int mot; scalar_t__ defer_delay; int * reply; int data; int address; } ;
typedef int ssize_t ;
typedef enum aux_channel_operation_result { ____Placeholder_aux_channel_operation_result } aux_channel_operation_result ;
struct TYPE_2__ {int ddc_service; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (struct drm_dp_aux*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct aux_payload*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct drm_dp_aux *VAR_7,
      struct drm_dp_aux_msg *VAR_8)
{
 ssize_t VAR_9 = 0;
 struct aux_payload VAR_10;
 enum aux_channel_operation_result VAR_11;

 if (FUNC_1(VAR_8->size > 16))
  return -VAR_3;

 VAR_10.address = VAR_8->address;
 VAR_10.data = VAR_8->buffer;
 VAR_10.length = VAR_8->size;
 VAR_10.reply = &VAR_8->reply;
 VAR_10.i2c_over_aux = (VAR_8->request & VAR_2) == 0;
 VAR_10.write = (VAR_8->request & VAR_1) == 0;
 VAR_10.mot = (VAR_8->request & VAR_0) != 0;
 VAR_10.defer_delay = 0;

 VAR_9 = FUNC_2(FUNC_0(VAR_7)->ddc_service, &VAR_10,
          &VAR_11);

 if (VAR_10.write)
  VAR_9 = VAR_8->size;

 if (VAR_9 < 0)
  switch (VAR_11) {
  case 128:
   break;
  case 132:
  case 130:
   VAR_9 = -VAR_5;
   break;
  case 131:
   VAR_9 = -VAR_4;
   break;
  case 129:
   VAR_9 = -VAR_6;
   break;
  }

 return VAR_9;
}
