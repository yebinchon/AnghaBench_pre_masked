
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct drm_dp_sideband_msg_tx {int dummy; } ;
struct TYPE_3__ {void* num_bytes; int dpcd_address; void* port_number; } ;
struct TYPE_4__ {TYPE_1__ dpcd_read; } ;
struct drm_dp_sideband_msg_req_body {TYPE_2__ u; int req_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_sideband_msg_req_body*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_sideband_msg_tx *VAR_1, u8 VAR_2, u32 VAR_3, u8 VAR_4)
{
 struct drm_dp_sideband_msg_req_body VAR_5;

 VAR_5.req_type = VAR_0;
 VAR_5.u.dpcd_read.port_number = VAR_2;
 VAR_5.u.dpcd_read.dpcd_address = VAR_3;
 VAR_5.u.dpcd_read.num_bytes = VAR_4;
 FUNC_0(&VAR_5, VAR_1);

 return 0;
}
