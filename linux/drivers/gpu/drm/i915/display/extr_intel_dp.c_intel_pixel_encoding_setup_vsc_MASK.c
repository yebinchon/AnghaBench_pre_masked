
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vsc_sdp ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {int base; int (* write_infoframe ) (int *,struct intel_crtc_state const*,int ,struct dp_sdp*,int) ;} ;
struct intel_crtc_state {int pipe_bpp; } ;
struct TYPE_2__ {int HB1; int HB2; int HB3; scalar_t__ HB0; } ;
struct dp_sdp {int* db; TYPE_1__ sdp_header; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int *,struct intel_crtc_state const*,int ,struct dp_sdp*,int) ;

__attribute__((used)) static void
FUNC_3(struct intel_dp *VAR_1,
          const struct intel_crtc_state *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_1(VAR_1);
 struct dp_sdp VAR_4 = {};


 VAR_4.sdp_header.HB0 = 0;
 VAR_4.sdp_header.HB1 = 0x7;





 VAR_4.sdp_header.HB2 = 0x5;





 VAR_4.sdp_header.HB3 = 0x13;





 VAR_4.db[16] = 0x3 << 4;

 VAR_4.db[16] |= 0x1;
 switch (VAR_2->pipe_bpp) {
 case 24:
  VAR_4.db[17] = 0x1;
  break;
 case 30:
  VAR_4.db[17] = 0x2;
  break;
 case 36:
  VAR_4.db[17] = 0x3;
  break;
 case 48:
  VAR_4.db[17] = 0x4;
  break;
 default:
  FUNC_0(VAR_2->pipe_bpp);
  break;
 }






 VAR_4.db[17] |= 0x80;
 VAR_4.db[18] = 0;

 VAR_3->write_infoframe(&VAR_3->base,
   VAR_2, VAR_0, &VAR_4, sizeof(VAR_4));
}
