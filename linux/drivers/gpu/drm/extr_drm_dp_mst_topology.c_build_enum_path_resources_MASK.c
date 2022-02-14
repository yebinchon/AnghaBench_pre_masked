
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_sideband_msg_tx {int path_msg; } ;
struct TYPE_3__ {int port_number; } ;
struct TYPE_4__ {TYPE_1__ port_num; } ;
struct drm_dp_sideband_msg_req_body {TYPE_2__ u; int req_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_sideband_msg_req_body*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_sideband_msg_tx *VAR_1, int VAR_2)
{
 struct drm_dp_sideband_msg_req_body VAR_3;

 VAR_3.req_type = VAR_0;
 VAR_3.u.port_num.port_number = VAR_2;
 FUNC_0(&VAR_3, VAR_1);
 VAR_1->path_msg = 1;
 return 0;
}
