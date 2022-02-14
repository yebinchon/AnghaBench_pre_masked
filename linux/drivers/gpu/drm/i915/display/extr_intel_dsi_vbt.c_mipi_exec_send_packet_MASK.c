
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mipi_dsi_device {int channel; int mode_flags; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_dsi {int ports; TYPE_3__** dsi_hosts; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_6__ {struct mipi_dsi_device* device; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mipi_dsi_device*,int const*,int) ;
 int FUNC_5 (struct mipi_dsi_device*,int const*,int) ;
 int FUNC_6 (int) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 int FUNC_8 (struct intel_dsi*,int) ;

__attribute__((used)) static const u8 *FUNC_9(struct intel_dsi *VAR_5,
           const u8 *VAR_6)
{
 struct drm_i915_private *VAR_7 = FUNC_7(VAR_5->base.base.dev);
 struct mipi_dsi_device *VAR_8;
 u8 VAR_9, VAR_10, VAR_11;
 u16 VAR_12;
 enum port VAR_13;

 FUNC_1("\n");

 VAR_10 = *VAR_6++;
 VAR_9 = *VAR_6++;

 VAR_12 = *((u16 *) VAR_6);
 VAR_6 += 2;

 VAR_11 = (VAR_10 >> VAR_1) & 3;






 if (VAR_5->ports == (1 << VAR_4))
  VAR_13 = VAR_4;
 else
  VAR_13 = FUNC_3(VAR_11);

 VAR_8 = VAR_5->dsi_hosts[VAR_13]->device;
 if (!VAR_8) {
  FUNC_1("no dsi device for port %c\n", FUNC_6(VAR_13));
  goto out;
 }

 if ((VAR_10 >> VAR_2) & 1)
  VAR_8->mode_flags &= ~VAR_0;
 else
  VAR_8->mode_flags |= VAR_0;

 VAR_8->channel = (VAR_10 >> VAR_3) & 3;

 switch (VAR_9) {
 case 130:
  FUNC_5(VAR_8, ((void*)0), 0);
  break;
 case 129:
  FUNC_5(VAR_8, VAR_6, 1);
  break;
 case 128:
  FUNC_5(VAR_8, VAR_6, 2);
  break;
 case 133:
 case 132:
 case 131:
  FUNC_0("Generic Read not yet implemented or used\n");
  break;
 case 134:
  FUNC_5(VAR_8, VAR_6, VAR_12);
  break;
 case 136:
  FUNC_4(VAR_8, VAR_6, 1);
  break;
 case 135:
  FUNC_4(VAR_8, VAR_6, 2);
  break;
 case 137:
  FUNC_0("DCS Read not yet implemented or used\n");
  break;
 case 138:
  FUNC_4(VAR_8, VAR_6, VAR_12);
  break;
 }

 if (FUNC_2(VAR_7) < 11)
  FUNC_8(VAR_5, VAR_13);

out:
 VAR_6 += VAR_12;

 return VAR_6;
}
