
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ishtp_device {int fw_client_presentation_num; TYPE_2__* fw_clients; } ;
struct ishtp_cl_device {int dummy; } ;
typedef int guid_t ;
struct TYPE_3__ {int protocol_name; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ishtp_cl_device* FUNC_0 (struct ishtp_device*,int ,char*) ;
 char* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct ishtp_device *VAR_3)
{
 int VAR_4;
 char *VAR_5;
 struct ishtp_cl_device *VAR_6;
 guid_t VAR_7;







 VAR_4 = VAR_3->fw_client_presentation_num - 1;
 VAR_7 = VAR_3->fw_clients[VAR_4].props.protocol_name;
 VAR_5 = FUNC_1(VAR_2, "{%pUL}", &VAR_7);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3, VAR_7, VAR_5);
 if (!VAR_6) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }

 FUNC_2(VAR_5);

 return 0;
}
