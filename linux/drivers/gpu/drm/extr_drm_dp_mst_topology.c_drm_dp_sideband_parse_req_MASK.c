
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_sideband_msg_rx {int* msg; } ;
struct drm_dp_sideband_msg_req_body {int req_type; } ;




 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_req_body*) ;
 int FUNC_3 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_req_body*) ;
 int FUNC_4 (struct drm_dp_sideband_msg_req_body*,int ,int) ;

__attribute__((used)) static bool FUNC_5(struct drm_dp_sideband_msg_rx *VAR_0,
          struct drm_dp_sideband_msg_req_body *VAR_1)
{
 FUNC_4(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->req_type = (VAR_0->msg[0] & 0x7f);

 switch (VAR_1->req_type) {
 case 129:
  return FUNC_2(VAR_0, VAR_1);
 case 128:
  return FUNC_3(VAR_0, VAR_1);
 default:
  FUNC_0("Got unknown request 0x%02x (%s)\n", VAR_1->req_type,
     FUNC_1(VAR_1->req_type));
  return 0;
 }
}
