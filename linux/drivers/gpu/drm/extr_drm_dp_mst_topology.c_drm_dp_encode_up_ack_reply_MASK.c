
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_sideband_msg_tx {int dummy; } ;
struct drm_dp_sideband_msg_reply_body {int req_type; int reply_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_sideband_msg_reply_body*,struct drm_dp_sideband_msg_tx*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_sideband_msg_tx *VAR_1, u8 VAR_2)
{
 struct drm_dp_sideband_msg_reply_body VAR_3;

 VAR_3.reply_type = VAR_0;
 VAR_3.req_type = VAR_2;
 FUNC_0(&VAR_3, VAR_1);
 return 0;
}
