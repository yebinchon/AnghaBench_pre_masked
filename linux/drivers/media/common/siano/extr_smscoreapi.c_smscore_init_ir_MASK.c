
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int timeout; int controller; int * dev; } ;
struct smscore_device_t {int gfp_buf_flags; int ir_init_done; TYPE_2__ ir; } ;
struct TYPE_8__ {int msg_length; } ;
struct sms_msg_data2 {TYPE_4__ x_msg_header; int * msg_data; } ;
struct TYPE_5__ {int ir; } ;
struct TYPE_7__ {TYPE_1__ board_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (struct smscore_device_t*) ;
 int FUNC_9 (struct smscore_device_t*) ;
 int FUNC_10 (struct smscore_device_t*,struct sms_msg_data2*,int ,int *) ;

__attribute__((used)) static int FUNC_11(struct smscore_device_t *VAR_3)
{
 int VAR_4;
 int VAR_5;
 void *VAR_6;

 VAR_3->ir.dev = ((void*)0);
 VAR_4 = FUNC_7(FUNC_9(VAR_3))->board_cfg.ir;
 if (VAR_4) {
  FUNC_4("IR loading\n");
  VAR_5 = FUNC_8(VAR_3);

  if (VAR_5 != 0)
   FUNC_5("Error initialization DTV IR sub-module\n");
  else {
   VAR_6 = FUNC_3(sizeof(struct sms_msg_data2) +
      VAR_2,
      VAR_0 | VAR_3->gfp_buf_flags);
   if (VAR_6) {
    struct sms_msg_data2 *VAR_7 =
    (struct sms_msg_data2 *)
    FUNC_0(VAR_6);

    FUNC_1(&VAR_7->x_msg_header,
      VAR_1,
      sizeof(struct sms_msg_data2));
    VAR_7->msg_data[0] = VAR_3->ir.controller;
    VAR_7->msg_data[1] = VAR_3->ir.timeout;

    VAR_5 = FUNC_10(VAR_3, VAR_7,
      VAR_7->x_msg_header. msg_length,
      &VAR_3->ir_init_done);

    FUNC_2(VAR_6);
   } else
    FUNC_5("Sending IR initialization message failed\n");
  }
 } else
  FUNC_6("IR port has not been detected\n");

 return 0;
}
