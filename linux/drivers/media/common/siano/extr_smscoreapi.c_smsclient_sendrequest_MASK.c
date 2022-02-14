
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int (* sendrequest_handler ) (int ,void*,size_t) ;int context; } ;
struct smscore_client_t {struct smscore_device_t* coredev; } ;
struct sms_msg_hdr {int msg_src_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smscore_device_t*,struct smscore_client_t*,int ,int ) ;
 int FUNC_2 (int ,void*,size_t) ;

int FUNC_3(struct smscore_client_t *VAR_1,
     void *VAR_2, size_t VAR_3)
{
 struct smscore_device_t *VAR_4;
 struct sms_msg_hdr *VAR_5 = (struct sms_msg_hdr *) VAR_2;
 int VAR_6;

 if (!VAR_1) {
  FUNC_0("Got NULL client\n");
  return -VAR_0;
 }

 VAR_4 = VAR_1->coredev;


 if (!VAR_4) {
  FUNC_0("Got NULL coredev\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_1->coredev, VAR_1, 0,
         VAR_5->msg_src_id);
 if (VAR_6 < 0)
  return VAR_6;

 return VAR_4->sendrequest_handler(VAR_4->context, VAR_2, VAR_3);
}
