
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int hbm_state; int dev_state; int devc; } ;
struct TYPE_2__ {int minor_version; int major_version; } ;
struct hbm_host_version_request {TYPE_1__ host_version; int hbm_cmd; int member_0; } ;
typedef int start_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ishtp_device*) ;
 int FUNC_2 (struct ishtp_msg_hdr*,int) ;
 scalar_t__ FUNC_3 (struct ishtp_device*,struct ishtp_msg_hdr*,struct hbm_host_version_request*) ;

int FUNC_4(struct ishtp_device *VAR_7)
{
 struct ishtp_msg_hdr VAR_8;
 struct hbm_host_version_request VAR_9 = { 0 };

 FUNC_2(&VAR_8, sizeof(VAR_9));


 VAR_9.hbm_cmd = VAR_3;
 VAR_9.host_version.major_version = VAR_1;
 VAR_9.host_version.minor_version = VAR_2;






 VAR_7->hbm_state = VAR_6;
 if (FUNC_3(VAR_7, &VAR_8, &VAR_9)) {
  FUNC_0(VAR_7->devc, "version message send failed\n");
  VAR_7->dev_state = VAR_4;
  VAR_7->hbm_state = VAR_5;
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 return 0;
}
