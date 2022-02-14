
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct drm_dp_sideband_msg_tx {int dummy; } ;
struct TYPE_4__ {void** bytes; void* num_bytes; int dpcd_address; void* port_number; } ;
struct TYPE_3__ {TYPE_2__ dpcd_write; } ;
struct drm_dp_sideband_msg_req_body {TYPE_1__ u; int req_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_sideband_msg_req_body*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_sideband_msg_tx *VAR_1, u8 VAR_2, u32 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 struct drm_dp_sideband_msg_req_body VAR_6;

 VAR_6.req_type = VAR_0;
 VAR_6.u.dpcd_write.port_number = VAR_2;
 VAR_6.u.dpcd_write.dpcd_address = VAR_3;
 VAR_6.u.dpcd_write.num_bytes = VAR_4;
 VAR_6.u.dpcd_write.bytes = VAR_5;
 FUNC_0(&VAR_6, VAR_1);

 return 0;
}
