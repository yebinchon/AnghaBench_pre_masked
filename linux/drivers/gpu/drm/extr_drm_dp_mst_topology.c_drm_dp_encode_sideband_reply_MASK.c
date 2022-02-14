
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_tx {int* msg; int cur_len; } ;
struct drm_dp_sideband_msg_reply_body {int reply_type; int req_type; } ;



__attribute__((used)) static void FUNC_0(struct drm_dp_sideband_msg_reply_body *VAR_0,
      struct drm_dp_sideband_msg_tx *VAR_1)
{
 int VAR_2 = 0;
 u8 *VAR_3 = VAR_1->msg;

 VAR_3[VAR_2++] = (VAR_0->reply_type & 0x1) << 7 | (VAR_0->req_type & 0x7f);

 VAR_1->cur_len = VAR_2;
}
