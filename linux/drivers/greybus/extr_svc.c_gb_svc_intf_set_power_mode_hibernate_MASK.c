
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gb_svc_intf_set_pwrm_response {int result_code; } ;
struct gb_svc_intf_set_pwrm_request {void* rx_mode; void* tx_mode; int hs_series; int intf_id; } ;
struct gb_svc {int dev; int connection; } ;
typedef int response ;
typedef int request ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,int ,struct gb_svc_intf_set_pwrm_request*,int,struct gb_svc_intf_set_pwrm_response*,int) ;
 int FUNC_2 (struct gb_svc_intf_set_pwrm_request*,int ,int) ;

int FUNC_3(struct gb_svc *VAR_5, u8 VAR_6)
{
 struct gb_svc_intf_set_pwrm_request VAR_7;
 struct gb_svc_intf_set_pwrm_response VAR_8;
 int VAR_9;
 u16 VAR_10;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.intf_id = VAR_6;
 VAR_7.hs_series = VAR_4;
 VAR_7.tx_mode = VAR_3;
 VAR_7.rx_mode = VAR_3;

 VAR_9 = FUNC_1(VAR_5->connection, VAR_2,
    &VAR_7, sizeof(VAR_7),
    &VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0) {
  FUNC_0(&VAR_5->dev,
   "failed to send set power mode operation to interface %u: %d\n",
   VAR_6, VAR_9);
  return VAR_9;
 }

 VAR_10 = VAR_8.result_code;
 if (VAR_10 != VAR_1) {
  FUNC_0(&VAR_5->dev,
   "failed to hibernate the link for interface %u: %u\n",
   VAR_6, VAR_10);
  return -VAR_0;
 }

 return 0;
}
