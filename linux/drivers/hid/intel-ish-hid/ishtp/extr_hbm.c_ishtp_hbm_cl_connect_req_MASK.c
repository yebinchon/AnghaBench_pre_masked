
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int dummy; } ;
struct ishtp_cl {int dummy; } ;
struct hbm_client_connect_request {int dummy; } ;
typedef int conn_req ;


 int VAR_0 ;
 int FUNC_0 (struct ishtp_cl*,int ,struct hbm_client_connect_request*,size_t const) ;
 int FUNC_1 (struct ishtp_msg_hdr*,size_t const) ;
 int FUNC_2 (struct ishtp_device*,struct ishtp_msg_hdr*,struct hbm_client_connect_request*) ;

int FUNC_3(struct ishtp_device *VAR_1, struct ishtp_cl *VAR_2)
{
 struct ishtp_msg_hdr VAR_3;
 struct hbm_client_connect_request VAR_4;
 const size_t VAR_5 = sizeof(VAR_4);

 FUNC_1(&VAR_3, VAR_5);
 FUNC_0(VAR_2, VAR_0, &VAR_4, VAR_5);

 return FUNC_2(VAR_1, &VAR_3, &VAR_4);
}
