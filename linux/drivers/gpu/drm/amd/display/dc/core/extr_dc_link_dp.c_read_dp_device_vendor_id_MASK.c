
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct dp_device_vendor_id {int* ieee_oui; int ieee_device_id; } ;
struct TYPE_2__ {int branch_dev_id; int branch_dev_name; } ;
struct dc_link {TYPE_1__ dpcd_caps; } ;
typedef int dp_id ;


 int VAR_0 ;
 int FUNC_0 (struct dc_link*,int ,int *,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dc_link *VAR_1)
{
 struct dp_device_vendor_id VAR_2;


 FUNC_0(
  VAR_1,
  VAR_0,
  (uint8_t *)&VAR_2,
  sizeof(VAR_2));

 VAR_1->dpcd_caps.branch_dev_id =
  (VAR_2.ieee_oui[0] << 16) +
  (VAR_2.ieee_oui[1] << 8) +
  VAR_2.ieee_oui[2];

 FUNC_1(
  VAR_1->dpcd_caps.branch_dev_name,
  VAR_2.ieee_device_id,
  sizeof(VAR_2.ieee_device_id));
}
