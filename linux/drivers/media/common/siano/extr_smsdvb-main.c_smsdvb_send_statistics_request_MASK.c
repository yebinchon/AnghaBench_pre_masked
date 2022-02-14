
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsdvb_client_t {int stats_done; TYPE_1__* coredev; scalar_t__ get_stats_jiffies; } ;
struct sms_msg_hdr {int msg_length; void* msg_type; scalar_t__ msg_flags; int msg_dst_id; int msg_src_id; } ;
typedef int msg ;
struct TYPE_2__ {int fw_version; } ;




 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct smsdvb_client_t*,struct sms_msg_hdr*,int,int *) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct smsdvb_client_t *VAR_5)
{
 int VAR_6;
 struct sms_msg_hdr VAR_7;


 if (VAR_5->get_stats_jiffies &&
    (!FUNC_3(VAR_4, VAR_5->get_stats_jiffies)))
  return 0;
 VAR_5->get_stats_jiffies = VAR_4 + FUNC_0(100);

 VAR_7.msg_src_id = VAR_0;
 VAR_7.msg_dst_id = VAR_1;
 VAR_7.msg_flags = 0;
 VAR_7.msg_length = sizeof(VAR_7);

 switch (FUNC_1(VAR_5->coredev)) {
 case 129:
 case 128:



  if (VAR_5->coredev->fw_version >= 0x800)
   VAR_7.msg_type = VAR_2;
  else
   VAR_7.msg_type = VAR_3;
  break;
 default:
  VAR_7.msg_type = VAR_3;
 }

 VAR_6 = FUNC_2(VAR_5, &VAR_7, sizeof(VAR_7),
      &VAR_5->stats_done);

 return VAR_6;
}
