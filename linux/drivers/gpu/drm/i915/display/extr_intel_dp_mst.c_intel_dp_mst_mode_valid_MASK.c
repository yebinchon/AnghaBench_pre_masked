
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct intel_connector {struct intel_dp* mst_port; } ;
struct drm_display_mode {int flags; int clock; } ;
struct drm_connector {int dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int max_dotclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 TYPE_1__* FUNC_5 (int ) ;
 struct intel_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_7(struct drm_connector *VAR_8,
   struct drm_display_mode *VAR_9)
{
 struct intel_connector *VAR_10 = FUNC_6(VAR_8);
 struct intel_dp *VAR_11 = VAR_10->mst_port;
 int VAR_12 = FUNC_5(VAR_8->dev)->max_dotclk_freq;
 int VAR_13, VAR_14, VAR_15, VAR_16;

 if (FUNC_0(VAR_8))
  return VAR_4;

 if (VAR_9->flags & VAR_1)
  return VAR_6;

 VAR_16 = FUNC_4(VAR_11);
 VAR_15 = FUNC_3(VAR_11);

 VAR_13 = FUNC_2(VAR_16, VAR_15);
 VAR_14 = FUNC_1(VAR_9->clock, 18);


 if (VAR_9->clock < 10000)
  return VAR_3;

 if (VAR_9->flags & VAR_0)
  return VAR_5;

 if (VAR_14 > VAR_13 || VAR_9->clock > VAR_12)
  return VAR_2;

 return VAR_7;
}
