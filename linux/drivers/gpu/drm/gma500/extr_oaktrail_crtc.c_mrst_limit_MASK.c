
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_limit_t {int dummy; } ;
struct drm_psb_private {int core_freq; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct drm_crtc*,int ) ;
 struct gma_limit_t* VAR_7 ;

__attribute__((used)) static const struct gma_limit_t *FUNC_2(struct drm_crtc *VAR_8,
         int VAR_9)
{
 const struct gma_limit_t *VAR_10 = ((void*)0);
 struct drm_device *VAR_11 = VAR_8->dev;
 struct drm_psb_private *VAR_12 = VAR_11->dev_private;

 if (FUNC_1(VAR_8, VAR_0)
     || FUNC_1(VAR_8, VAR_1)) {
  switch (VAR_12->core_freq) {
  case 100:
   VAR_10 = &VAR_7[VAR_4];
   break;
  case 166:
   VAR_10 = &VAR_7[VAR_5];
   break;
  case 200:
   VAR_10 = &VAR_7[VAR_3];
   break;
  }
 } else if (FUNC_1(VAR_8, VAR_2)) {
  VAR_10 = &VAR_7[VAR_6];
 } else {
  VAR_10 = ((void*)0);
  FUNC_0(VAR_11->dev, "mrst_limit Wrong display type.\n");
 }

 return VAR_10;
}
