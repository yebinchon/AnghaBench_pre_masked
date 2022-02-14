
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int hbm_state; int devc; int dev_state; } ;
struct hbm_host_enum_request {int hbm_cmd; int member_0; } ;
typedef int enum_req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ishtp_device*) ;
 int FUNC_2 (struct ishtp_msg_hdr*,int) ;
 scalar_t__ FUNC_3 (struct ishtp_device*,struct ishtp_msg_hdr*,struct hbm_host_enum_request*) ;

void FUNC_4(struct ishtp_device *VAR_3)
{
 struct ishtp_msg_hdr VAR_4;
 struct hbm_host_enum_request VAR_5 = { 0 };


 FUNC_2(&VAR_4, sizeof(VAR_5));
 VAR_5.hbm_cmd = VAR_0;

 if (FUNC_3(VAR_3, &VAR_4, &VAR_5)) {
  VAR_3->dev_state = VAR_1;
  FUNC_0(VAR_3->devc, "enumeration request send failed\n");
  FUNC_1(VAR_3);
 }
 VAR_3->hbm_state = VAR_2;
}
