
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int device_flags; int mode; int modes_supported; int fw_version; int (* setmode_handler ) (int ,int) ;int gfp_buf_flags; int init_device_done; int context; int (* detectmode_handler ) (int ,int*) ;int devpath; } ;
struct TYPE_2__ {int msg_length; } ;
struct sms_msg_data {int* msg_data; TYPE_1__ x_msg_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct smscore_device_t*) ;
 int FUNC_7 (struct smscore_device_t*,int) ;
 int FUNC_8 (struct smscore_device_t*,int,int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct smscore_device_t*,struct sms_msg_data*,int ,int *) ;
 int FUNC_11 (int ,int*) ;
 int FUNC_12 (int ,int) ;

int FUNC_13(struct smscore_device_t *VAR_8, int VAR_9)
{
 int VAR_10 = 0;

 FUNC_4("set device mode to %d\n", VAR_9);
 if (VAR_8->device_flags & VAR_5) {
  if (VAR_9 <= VAR_1 || VAR_9 >= VAR_0) {
   FUNC_5("invalid mode specified %d\n", VAR_9);
   return -VAR_2;
  }

  FUNC_9(VAR_8->devpath, VAR_9);

  if (!(VAR_8->device_flags & VAR_6)) {
   VAR_10 = FUNC_6(VAR_8);
   if (VAR_10 < 0) {
    FUNC_5("mode detect failed %d\n", VAR_10);
    return VAR_10;
   }
  }

  if (VAR_8->mode == VAR_9) {
   FUNC_4("device mode %d already set\n", VAR_9);
   return 0;
  }

  if (!(VAR_8->modes_supported & (1 << VAR_9))) {
   VAR_10 = FUNC_8(VAR_8,
            VAR_9, ((void*)0));
   if (VAR_10 >= 0)
    FUNC_4("firmware download success\n");
  } else {
   FUNC_4("mode %d is already supported by running firmware\n",
     VAR_9);
  }
  if (VAR_8->fw_version >= 0x800) {
   VAR_10 = FUNC_7(VAR_8, VAR_9);
   if (VAR_10 < 0)
    FUNC_5("device init failed, rc %d.\n", VAR_10);
  }
 } else {
  if (VAR_9 <= VAR_1 || VAR_9 >= VAR_0) {
   FUNC_5("invalid mode specified %d\n", VAR_9);
   return -VAR_2;
  }

  FUNC_9(VAR_8->devpath, VAR_9);

  if (VAR_8->detectmode_handler)
   VAR_8->detectmode_handler(VAR_8->context,
          &VAR_8->mode);

  if (VAR_8->mode != VAR_9 && VAR_8->setmode_handler)
   VAR_10 = VAR_8->setmode_handler(VAR_8->context, VAR_9);
 }

 if (VAR_10 >= 0) {
  char *VAR_11;
  VAR_8->mode = VAR_9;
  VAR_8->device_flags &= ~VAR_6;

  VAR_11 = FUNC_3(sizeof(struct sms_msg_data) +
     VAR_7, VAR_3 | VAR_8->gfp_buf_flags);
  if (VAR_11) {
   struct sms_msg_data *VAR_12 = (struct sms_msg_data *) FUNC_0(VAR_11);

   FUNC_1(&VAR_12->x_msg_header, VAR_4,
         sizeof(struct sms_msg_data));
   VAR_12->msg_data[0] = VAR_9;

   VAR_10 = FUNC_10(
    VAR_8, VAR_12, VAR_12->x_msg_header.msg_length,
    &VAR_8->init_device_done);

   FUNC_2(VAR_11);
  }
 }

 if (VAR_10 < 0)
  FUNC_5("return error code %d.\n", VAR_10);
 else
  FUNC_4("Success setting device mode.\n");

 return VAR_10;
}
