
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int* msg; int curlen; } ;
struct TYPE_3__ {int port_number; int allocated_pbn; } ;
struct TYPE_4__ {TYPE_1__ query_payload; } ;
struct drm_dp_sideband_msg_reply_body {TYPE_2__ u; } ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static bool FUNC_1(struct drm_dp_sideband_msg_rx *VAR_0,
          struct drm_dp_sideband_msg_reply_body *VAR_1)
{
 int VAR_2 = 1;
 VAR_1->u.query_payload.port_number = (VAR_0->msg[VAR_2] >> 4) & 0xf;
 VAR_2++;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;
 VAR_1->u.query_payload.allocated_pbn = (VAR_0->msg[VAR_2] << 8) | (VAR_0->msg[VAR_2 + 1]);
 VAR_2 += 2;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;
 return 1;
fail_len:
 FUNC_0("query payload parse length fail %d %d\n", VAR_2, VAR_0->curlen);
 return 0;
}
