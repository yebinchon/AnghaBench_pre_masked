
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int* msg; int curlen; } ;
struct TYPE_5__ {int nports; TYPE_1__* ports; int guid; } ;
struct TYPE_6__ {TYPE_2__ link_addr; } ;
struct drm_dp_sideband_msg_reply_body {TYPE_3__ u; } ;
struct TYPE_4__ {int input_port; int peer_device_type; int port_number; int mcs; int ddps; int legacy_device_plug_status; int dpcd_revision; int num_sdp_streams; int num_sdp_stream_sinks; int peer_guid; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_dp_sideband_msg_rx *VAR_0,
            struct drm_dp_sideband_msg_reply_body *VAR_1)
{
 int VAR_2 = 1;
 int VAR_3;
 FUNC_1(VAR_1->u.link_addr.guid, &VAR_0->msg[VAR_2], 16);
 VAR_2 += 16;
 VAR_1->u.link_addr.nports = VAR_0->msg[VAR_2] & 0xf;
 VAR_2++;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;
 for (VAR_3 = 0; VAR_3 < VAR_1->u.link_addr.nports; VAR_3++) {
  if (VAR_0->msg[VAR_2] & 0x80)
   VAR_1->u.link_addr.ports[VAR_3].input_port = 1;

  VAR_1->u.link_addr.ports[VAR_3].peer_device_type = (VAR_0->msg[VAR_2] >> 4) & 0x7;
  VAR_1->u.link_addr.ports[VAR_3].port_number = (VAR_0->msg[VAR_2] & 0xf);

  VAR_2++;
  if (VAR_2 > VAR_0->curlen)
   goto fail_len;
  VAR_1->u.link_addr.ports[VAR_3].mcs = (VAR_0->msg[VAR_2] >> 7) & 0x1;
  VAR_1->u.link_addr.ports[VAR_3].ddps = (VAR_0->msg[VAR_2] >> 6) & 0x1;
  if (VAR_1->u.link_addr.ports[VAR_3].input_port == 0)
   VAR_1->u.link_addr.ports[VAR_3].legacy_device_plug_status = (VAR_0->msg[VAR_2] >> 5) & 0x1;
  VAR_2++;
  if (VAR_2 > VAR_0->curlen)
   goto fail_len;
  if (VAR_1->u.link_addr.ports[VAR_3].input_port == 0) {
   VAR_1->u.link_addr.ports[VAR_3].dpcd_revision = (VAR_0->msg[VAR_2]);
   VAR_2++;
   if (VAR_2 > VAR_0->curlen)
    goto fail_len;
   FUNC_1(VAR_1->u.link_addr.ports[VAR_3].peer_guid, &VAR_0->msg[VAR_2], 16);
   VAR_2 += 16;
   if (VAR_2 > VAR_0->curlen)
    goto fail_len;
   VAR_1->u.link_addr.ports[VAR_3].num_sdp_streams = (VAR_0->msg[VAR_2] >> 4) & 0xf;
   VAR_1->u.link_addr.ports[VAR_3].num_sdp_stream_sinks = (VAR_0->msg[VAR_2] & 0xf);
   VAR_2++;

  }
  if (VAR_2 > VAR_0->curlen)
   goto fail_len;
 }

 return 1;
fail_len:
 FUNC_0("link address reply parse length fail %d %d\n", VAR_2, VAR_0->curlen);
 return 0;
}
