
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_usb_pd_power_info {int type; } ;
struct ec_params_usb_pd_power_info {int port; } ;
struct cros_ec_extcon_info {int port_id; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_extcon_info*,int ,int ,struct ec_params_usb_pd_power_info*,int,struct ec_response_usb_pd_power_info*,int) ;

__attribute__((used)) static int FUNC_1(struct cros_ec_extcon_info *VAR_1)
{
 struct ec_params_usb_pd_power_info VAR_2;
 struct ec_response_usb_pd_power_info VAR_3;
 int VAR_4;

 VAR_2.port = VAR_1->port_id;
 VAR_4 = FUNC_0(VAR_1, VAR_0, 0,
     &VAR_2, sizeof(VAR_2), &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0)
  return VAR_4;

 return VAR_3.type;
}
