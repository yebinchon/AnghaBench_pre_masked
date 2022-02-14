
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int dummy; } ;
struct hbm_host_stop_request {int reason; int hbm_cmd; int member_0; } ;
typedef int stop_req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ishtp_msg_hdr*,int) ;
 int FUNC_1 (struct ishtp_device*,struct ishtp_msg_hdr*,struct hbm_host_stop_request*) ;

__attribute__((used)) static void FUNC_2(struct ishtp_device *VAR_2)
{
 struct ishtp_msg_hdr VAR_3;
 struct hbm_host_stop_request VAR_4 = { 0 } ;

 FUNC_0(&VAR_3, sizeof(VAR_4));

 VAR_4.hbm_cmd = VAR_1;
 VAR_4.reason = VAR_0;

 FUNC_1(VAR_2, &VAR_3, &VAR_4);
}
