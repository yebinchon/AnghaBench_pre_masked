
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_usb_pd_control_v1 {int enabled; int polarity; int role; } ;
struct ec_params_usb_pd_control {int swap; int mux; int role; int port; } ;
struct cros_ec_extcon_info {int port_id; } ;
typedef int resp ;
typedef int pd_control ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cros_ec_extcon_info*,int ,int,struct ec_params_usb_pd_control*,int,struct ec_response_usb_pd_control_v1*,int) ;

__attribute__((used)) static int FUNC_1(struct cros_ec_extcon_info *VAR_6,
    bool *VAR_7)
{
 struct ec_params_usb_pd_control VAR_8;
 struct ec_response_usb_pd_control_v1 VAR_9;
 int VAR_10;

 VAR_8.port = VAR_6->port_id;
 VAR_8.role = VAR_4;
 VAR_8.mux = VAR_3;
 VAR_8.swap = VAR_5;
 VAR_10 = FUNC_0(VAR_6, VAR_0, 1,
     &VAR_8, sizeof(VAR_8),
     &VAR_9, sizeof(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 if (!(VAR_9.enabled & VAR_2))
  return -VAR_1;

 *VAR_7 = VAR_9.polarity;

 return VAR_9.role;
}
