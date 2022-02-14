
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int* msg; } ;
struct TYPE_3__ {int reason; int nak_data; int guid; } ;
struct TYPE_4__ {TYPE_1__ nak; } ;
struct drm_dp_sideband_msg_reply_body {int reply_type; int req_type; TYPE_2__ u; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_3 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_4 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_5 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_6 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_7 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_8 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_9 (struct drm_dp_sideband_msg_rx*,struct drm_dp_sideband_msg_reply_body*) ;
 int FUNC_10 (int ,int*,int) ;
 int FUNC_11 (struct drm_dp_sideband_msg_reply_body*,int ,int) ;

__attribute__((used)) static bool FUNC_12(struct drm_dp_sideband_msg_rx *VAR_1,
     struct drm_dp_sideband_msg_reply_body *VAR_2)
{
 FUNC_11(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->reply_type = (VAR_1->msg[0] & 0x80) >> 7;
 VAR_2->req_type = (VAR_1->msg[0] & 0x7f);

 if (VAR_2->reply_type == VAR_0) {
  FUNC_10(VAR_2->u.nak.guid, &VAR_1->msg[1], 16);
  VAR_2->u.nak.reason = VAR_1->msg[17];
  VAR_2->u.nak.nak_data = VAR_1->msg[18];
  return 0;
 }

 switch (VAR_2->req_type) {
 case 134:
  return FUNC_4(VAR_1, VAR_2);
 case 131:
  return FUNC_6(VAR_1, VAR_2);
 case 130:
  return FUNC_7(VAR_1, VAR_2);
 case 129:
  return FUNC_8(VAR_1, VAR_2);
 case 128:
  return FUNC_9(VAR_1, VAR_2);
 case 135:
  return FUNC_3(VAR_1, VAR_2);
 case 136:
  return FUNC_2(VAR_1, VAR_2);
 case 133:
 case 132:
  return FUNC_5(VAR_1, VAR_2);
 default:
  FUNC_0("Got unknown reply 0x%02x (%s)\n", VAR_2->req_type,
     FUNC_1(VAR_2->req_type));
  return 0;
 }
}
