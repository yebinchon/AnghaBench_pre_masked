
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mipi_dsi_packet {int* header; int* payload; scalar_t__ payload_length; } ;
struct mipi_dsi_msg {int flags; int rx_len; int rx_buf; } ;
struct mipi_dsi_host {int dummy; } ;
struct intel_dsi_host {int port; TYPE_3__* intel_dsi; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (char*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*,int ,int,int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int ,int,int) ;
 scalar_t__ FUNC_10 (struct mipi_dsi_packet*,struct mipi_dsi_msg const*) ;
 int FUNC_11 (struct drm_i915_private*,int ,int ,int ) ;
 struct drm_i915_private* FUNC_12 (struct drm_device*) ;
 struct intel_dsi_host* FUNC_13 (struct mipi_dsi_host*) ;
 int FUNC_14 (struct drm_i915_private*,int ,int*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_15(struct mipi_dsi_host *VAR_6,
           const struct mipi_dsi_msg *VAR_7)
{
 struct intel_dsi_host *VAR_8 = FUNC_13(VAR_6);
 struct drm_device *VAR_9 = VAR_8->intel_dsi->base.base.dev;
 struct drm_i915_private *VAR_10 = FUNC_12(VAR_9);
 enum port VAR_11 = VAR_8->port;
 struct mipi_dsi_packet VAR_12;
 ssize_t VAR_13;
 const u8 *VAR_14, *VAR_15;
 i915_reg_t VAR_16, VAR_17;
 u32 VAR_18, VAR_19;

 VAR_13 = FUNC_10(&VAR_12, VAR_7);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 = VAR_12.header;
 VAR_15 = VAR_12.payload;

 if (VAR_7->flags & VAR_5) {
  VAR_16 = FUNC_7(VAR_11);
  VAR_18 = VAR_4;
  VAR_17 = FUNC_6(VAR_11);
  VAR_19 = VAR_3;
 } else {
  VAR_16 = FUNC_4(VAR_11);
  VAR_18 = VAR_2;
  VAR_17 = FUNC_3(VAR_11);
  VAR_19 = VAR_1;
 }


 if (VAR_12.payload_length) {
  if (FUNC_8(VAR_10, FUNC_2(VAR_11),
         VAR_18, 50))
   FUNC_0("Timeout waiting for HS/LP DATA FIFO !full\n");

  FUNC_14(VAR_10, VAR_16, VAR_12.payload,
      VAR_12.payload_length);
 }

 if (VAR_7->rx_len) {
  FUNC_1(FUNC_5(VAR_11), VAR_0);
 }

 if (FUNC_8(VAR_10, FUNC_2(VAR_11),
        VAR_19, 50)) {
  FUNC_0("Timeout waiting for HS/LP CTRL FIFO !full\n");
 }

 FUNC_1(VAR_17, VAR_14[2] << 16 | VAR_14[1] << 8 | VAR_14[0]);


 if (VAR_7->rx_len) {
  VAR_18 = VAR_0;
  if (FUNC_9(VAR_10, FUNC_5(VAR_11),
       VAR_18, 50))
   FUNC_0("Timeout waiting for read data.\n");

  FUNC_11(VAR_10, VAR_16, VAR_7->rx_buf, VAR_7->rx_len);
 }


 return 4 + VAR_12.payload_length;
}
