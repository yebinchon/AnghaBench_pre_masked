
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int* msg; int curlen; } ;
struct TYPE_3__ {int port_number; int available_pbn; int guid; } ;
struct TYPE_4__ {TYPE_1__ resource_stat; } ;
struct drm_dp_sideband_msg_req_body {TYPE_2__ u; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_dp_sideband_msg_rx *VAR_0,
          struct drm_dp_sideband_msg_req_body *VAR_1)
{
 int VAR_2 = 1;

 VAR_1->u.resource_stat.port_number = (VAR_0->msg[VAR_2] & 0xf0) >> 4;
 VAR_2++;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;

 FUNC_1(VAR_1->u.resource_stat.guid, &VAR_0->msg[VAR_2], 16);
 VAR_2 += 16;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;

 VAR_1->u.resource_stat.available_pbn = (VAR_0->msg[VAR_2] << 8) | (VAR_0->msg[VAR_2 + 1]);
 VAR_2++;
 return 1;
fail_len:
 FUNC_0("resource status reply parse length fail %d %d\n", VAR_2, VAR_0->curlen);
 return 0;
}
