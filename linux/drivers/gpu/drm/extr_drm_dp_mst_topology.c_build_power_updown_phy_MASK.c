
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
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_sideband_msg_req_body*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_sideband_msg_tx *VAR_2,
      int VAR_3, bool VAR_4)
{
 struct drm_dp_sideband_msg_req_body VAR_5;

 if (VAR_4)
  VAR_5.req_type = VAR_1;
 else
  VAR_5.req_type = VAR_0;

 VAR_5.u.port_num.port_number = VAR_3;
 FUNC_0(&VAR_5, VAR_2);
 VAR_2->path_msg = 1;
 return 0;
}
