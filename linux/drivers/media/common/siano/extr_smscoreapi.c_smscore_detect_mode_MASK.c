
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int gfp_buf_flags; int version_ex_done; int resume_done; } ;
struct sms_msg_hdr {int msg_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sms_msg_hdr*,int ,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct smscore_device_t*,struct sms_msg_hdr*,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct smscore_device_t *VAR_5)
{
 void *VAR_6 = FUNC_3(sizeof(struct sms_msg_hdr) + VAR_4,
          VAR_2 | VAR_5->gfp_buf_flags);
 struct sms_msg_hdr *VAR_7 =
  (struct sms_msg_hdr *) FUNC_0(VAR_6);
 int VAR_8;

 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_3,
       sizeof(struct sms_msg_hdr));

 VAR_8 = FUNC_6(VAR_5, VAR_7, VAR_7->msg_length,
       &VAR_5->version_ex_done);
 if (VAR_8 == -VAR_1) {
  FUNC_5("MSG_SMS_GET_VERSION_EX_REQ failed first try\n");

  if (FUNC_7(&VAR_5->resume_done,
      FUNC_4(5000))) {
   VAR_8 = FUNC_6(
    VAR_5, VAR_7, VAR_7->msg_length,
    &VAR_5->version_ex_done);
   if (VAR_8 < 0)
    FUNC_5("MSG_SMS_GET_VERSION_EX_REQ failed second try, rc %d\n",
     VAR_8);
  } else
   VAR_8 = -VAR_1;
 }

 FUNC_2(VAR_6);

 return VAR_8;
}
