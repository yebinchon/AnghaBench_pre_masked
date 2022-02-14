
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int* msg; int curlen; } ;
struct TYPE_3__ {int port_number; int legacy_device_plug_status; int displayport_device_plug_status; int message_capability_status; int input_port; int peer_device_type; int guid; } ;
struct TYPE_4__ {TYPE_1__ conn_stat; } ;
struct drm_dp_sideband_msg_req_body {TYPE_2__ u; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_dp_sideband_msg_rx *VAR_0,
          struct drm_dp_sideband_msg_req_body *VAR_1)
{
 int VAR_2 = 1;

 VAR_1->u.conn_stat.port_number = (VAR_0->msg[VAR_2] & 0xf0) >> 4;
 VAR_2++;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;

 FUNC_1(VAR_1->u.conn_stat.guid, &VAR_0->msg[VAR_2], 16);
 VAR_2 += 16;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;

 VAR_1->u.conn_stat.legacy_device_plug_status = (VAR_0->msg[VAR_2] >> 6) & 0x1;
 VAR_1->u.conn_stat.displayport_device_plug_status = (VAR_0->msg[VAR_2] >> 5) & 0x1;
 VAR_1->u.conn_stat.message_capability_status = (VAR_0->msg[VAR_2] >> 4) & 0x1;
 VAR_1->u.conn_stat.input_port = (VAR_0->msg[VAR_2] >> 3) & 0x1;
 VAR_1->u.conn_stat.peer_device_type = (VAR_0->msg[VAR_2] & 0x7);
 VAR_2++;
 return 1;
fail_len:
 FUNC_0("connection status reply parse length fail %d %d\n", VAR_2, VAR_0->curlen);
 return 0;
}
