
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mipi_dsi_packet {int* header; scalar_t__ payload; } ;
struct intel_dsi_host {int port; struct intel_dsi* intel_dsi; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_dsi {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct intel_dsi_host *VAR_10,
       struct mipi_dsi_packet VAR_11, bool VAR_12)
{
 struct intel_dsi *VAR_13 = VAR_10->intel_dsi;
 struct drm_i915_private *VAR_14 = FUNC_6(VAR_13->base.base.dev);
 enum transcoder VAR_15 = FUNC_4(VAR_10->port);
 u32 VAR_16;
 int VAR_17;


 VAR_17 = FUNC_5(VAR_14, VAR_15);
 if (VAR_17 < 1) {
  FUNC_0("send pkt header failed, not enough hdr credits\n");
  return -1;
 }

 VAR_16 = FUNC_2(FUNC_1(VAR_15));

 if (VAR_11.payload)
  VAR_16 |= VAR_6;
 else
  VAR_16 &= ~VAR_6;

 VAR_16 &= ~VAR_7;

 if (VAR_12)
  VAR_16 |= VAR_2;

 VAR_16 &= ~(VAR_4 | VAR_8 | VAR_0);
 VAR_16 |= ((VAR_11.header[0] & VAR_8) << VAR_9);
 VAR_16 |= ((VAR_11.header[0] & VAR_0) << VAR_1);
 VAR_16 |= (VAR_11.header[1] << VAR_3);
 VAR_16 |= (VAR_11.header[2] << VAR_5);
 FUNC_3(FUNC_1(VAR_15), VAR_16);

 return 0;
}
