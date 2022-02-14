
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ishtp_msg_hdr {int dummy; } ;
struct ishtp_device {int fw_client_presentation_num; unsigned long fw_client_index; int devc; int dev_state; TYPE_1__* fw_clients; int hbm_state; int fw_clients_map; } ;
struct hbm_props_request {unsigned long address; int hbm_cmd; int member_0; } ;
typedef int prop_req ;
struct TYPE_2__ {unsigned long client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (struct ishtp_device*) ;
 int FUNC_3 (struct ishtp_device*) ;
 int FUNC_4 (struct ishtp_msg_hdr*,int) ;
 scalar_t__ FUNC_5 (struct ishtp_device*,struct ishtp_msg_hdr*,struct hbm_props_request*) ;

__attribute__((used)) static int FUNC_6(struct ishtp_device *VAR_6)
{
 struct ishtp_msg_hdr VAR_7;
 struct hbm_props_request VAR_8 = { 0 };
 unsigned long VAR_9;
 uint8_t VAR_10;

 VAR_10 = VAR_6->fw_client_presentation_num;

 VAR_9 = FUNC_1(VAR_6->fw_clients_map,
  VAR_2, VAR_6->fw_client_index);


 if (VAR_9 == VAR_2) {
  VAR_6->hbm_state = VAR_5;
  VAR_6->dev_state = VAR_3;

  for (VAR_6->fw_client_presentation_num = 1;
   VAR_6->fw_client_presentation_num < VAR_10 + 1;
    ++VAR_6->fw_client_presentation_num)

   FUNC_3(VAR_6);
  return 0;
 }

 VAR_6->fw_clients[VAR_10].client_id = VAR_9;

 FUNC_4(&VAR_7, sizeof(VAR_8));

 VAR_8.hbm_cmd = VAR_1;
 VAR_8.address = VAR_9;

 if (FUNC_5(VAR_6, &VAR_7, &VAR_8)) {
  VAR_6->dev_state = VAR_4;
  FUNC_0(VAR_6->devc, "properties request send failed\n");
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 VAR_6->fw_client_index = VAR_9;

 return 0;
}
