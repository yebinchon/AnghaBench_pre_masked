
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int gfp_buf_flags; int init_device_done; } ;
struct TYPE_2__ {int msg_length; } ;
struct sms_msg_data {int* msg_data; TYPE_1__ x_msg_header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct smscore_device_t*,struct sms_msg_data*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct smscore_device_t *VAR_4, int VAR_5)
{
 void *VAR_6;
 struct sms_msg_data *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_3(sizeof(struct sms_msg_data) +
   VAR_3, VAR_1 | VAR_4->gfp_buf_flags);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = (struct sms_msg_data *)FUNC_0(VAR_6);
 FUNC_1(&VAR_7->x_msg_header, VAR_2,
   sizeof(struct sms_msg_data));
 VAR_7->msg_data[0] = VAR_5;

 VAR_8 = FUNC_4(VAR_4, VAR_7,
   VAR_7->x_msg_header. msg_length,
   &VAR_4->init_device_done);

 FUNC_2(VAR_6);
 return VAR_8;
}
