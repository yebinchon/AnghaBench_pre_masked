
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_sideband_msg_tx {int dummy; } ;
struct drm_dp_sideband_msg_req_body {int req_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_sideband_msg_req_body*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_sideband_msg_tx *VAR_1)
{
 struct drm_dp_sideband_msg_req_body VAR_2;

 VAR_2.req_type = VAR_0;
 FUNC_0(&VAR_2, VAR_1);
 return 0;
}
