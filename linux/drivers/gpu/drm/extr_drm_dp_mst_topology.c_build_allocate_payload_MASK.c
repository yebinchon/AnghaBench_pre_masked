
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef void* u8 ;
struct drm_dp_sideband_msg_tx {int path_msg; } ;
struct TYPE_3__ {int port_number; int sdp_stream_sink; void* number_sdp_streams; int pbn; void* vcpi; } ;
struct TYPE_4__ {TYPE_1__ allocate_payload; } ;
struct drm_dp_sideband_msg_req_body {TYPE_2__ u; int req_type; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_sideband_msg_req_body*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_1 (int ,void**,void*) ;
 int FUNC_2 (struct drm_dp_sideband_msg_req_body*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct drm_dp_sideband_msg_tx *VAR_1, int VAR_2,
      u8 VAR_3, uint16_t VAR_4,
      u8 VAR_5,
      u8 *VAR_6)
{
 struct drm_dp_sideband_msg_req_body VAR_7;
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.req_type = VAR_0;
 VAR_7.u.allocate_payload.port_number = VAR_2;
 VAR_7.u.allocate_payload.vcpi = VAR_3;
 VAR_7.u.allocate_payload.pbn = VAR_4;
 VAR_7.u.allocate_payload.number_sdp_streams = VAR_5;
 FUNC_1(VAR_7.u.allocate_payload.sdp_stream_sink, VAR_6,
     VAR_5);
 FUNC_0(&VAR_7, VAR_1);
 VAR_1->path_msg = 1;
 return 0;
}
