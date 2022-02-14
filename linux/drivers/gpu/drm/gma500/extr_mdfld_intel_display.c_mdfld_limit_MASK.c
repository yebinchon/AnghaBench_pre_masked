
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrst_limit_t {int dummy; } ;
struct drm_psb_private {int core_freq; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct drm_crtc*,int ) ;
 scalar_t__ VAR_15 ;
 struct mrst_limit_t* VAR_16 ;

__attribute__((used)) static const struct mrst_limit_t *FUNC_2(struct drm_crtc *VAR_17)
{
 const struct mrst_limit_t *VAR_18 = ((void*)0);
 struct drm_device *VAR_19 = VAR_17->dev;
 struct drm_psb_private *VAR_20 = VAR_19->dev_private;

 if (FUNC_1(VAR_17, VAR_1)
     || FUNC_1(VAR_17, VAR_2)) {
  if ((VAR_15 == VAR_6) || (VAR_15 == VAR_3))
   VAR_18 = &VAR_16[VAR_12];
  else if (VAR_15 == VAR_4)
   VAR_18 = &VAR_16[VAR_13];
  else if ((VAR_15 == VAR_5) &&
    (VAR_20->core_freq == 166))
   VAR_18 = &VAR_16[VAR_14];
  else if ((VAR_15 == VAR_5) &&
    (VAR_20->core_freq == 100 ||
    VAR_20->core_freq == 200))
   VAR_18 = &VAR_16[VAR_11];
 } else if (FUNC_1(VAR_17, VAR_0)) {
  if ((VAR_15 == VAR_6) || (VAR_15 == VAR_3))
   VAR_18 = &VAR_16[VAR_8];
  else if (VAR_15 == VAR_4)
   VAR_18 = &VAR_16[VAR_9];
  else if ((VAR_15 == VAR_5) &&
    (VAR_20->core_freq == 166))
   VAR_18 = &VAR_16[VAR_10];
  else if ((VAR_15 == VAR_5) &&
     (VAR_20->core_freq == 100 ||
     VAR_20->core_freq == 200))
   VAR_18 = &VAR_16[VAR_7];
 } else {
  VAR_18 = ((void*)0);
  FUNC_0(VAR_19->dev, "mdfld_limit Wrong display type.\n");
 }

 return VAR_18;
}
