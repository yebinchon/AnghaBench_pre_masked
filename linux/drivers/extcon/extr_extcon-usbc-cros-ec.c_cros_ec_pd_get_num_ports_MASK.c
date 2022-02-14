
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_usb_pd_ports {int num_ports; } ;
struct cros_ec_extcon_info {int dummy; } ;
typedef int resp ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_extcon_info*,int ,int ,int *,int ,struct ec_response_usb_pd_ports*,int) ;

__attribute__((used)) static int FUNC_1(struct cros_ec_extcon_info *VAR_1)
{
 struct ec_response_usb_pd_ports VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0,
     0, ((void*)0), 0, &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_2.num_ports;
}
