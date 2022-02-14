
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct sunxi_engine {int dummy; } ;
struct sun4i_tcon {TYPE_1__* dev; } ;
struct TYPE_6__ {int port; } ;
struct sun4i_crtc {TYPE_2__ crtc; struct sun4i_tcon* tcon; struct sunxi_engine* engine; } ;
struct drm_plane {int type; int possible_crtcs; } ;
struct drm_device {int dev; } ;
struct TYPE_5__ {int of_node; } ;



 scalar_t__ VAR_0 ;

 int VAR_1 ;
 struct sun4i_crtc* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_plane**) ;
 int FUNC_2 (int ,char*) ;
 struct sun4i_crtc* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (struct drm_device*,TYPE_2__*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_plane** FUNC_8 (struct drm_device*,struct sunxi_engine*) ;

struct sun4i_crtc *FUNC_9(struct drm_device *VAR_5,
       struct sunxi_engine *VAR_6,
       struct sun4i_tcon *VAR_7)
{
 struct sun4i_crtc *VAR_8;
 struct drm_plane **VAR_9;
 struct drm_plane *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 VAR_8 = FUNC_3(VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);
 VAR_8->engine = VAR_6;
 VAR_8->tcon = VAR_7;


 VAR_9 = FUNC_8(VAR_5, VAR_6);
 if (FUNC_1(VAR_9)) {
  FUNC_2(VAR_5->dev, "Couldn't create the planes\n");
  return ((void*)0);
 }


 for (VAR_13 = 0; VAR_9[VAR_13]; VAR_13++) {
  struct drm_plane *VAR_14 = VAR_9[VAR_13];

  switch (VAR_14->type) {
  case 128:
   VAR_10 = VAR_14;
   break;
  case 129:
   VAR_11 = VAR_14;
   break;
  default:
   break;
  }
 }

 VAR_12 = FUNC_5(VAR_5, &VAR_8->crtc,
     VAR_10,
     VAR_11,
     &VAR_3,
     ((void*)0));
 if (VAR_12) {
  FUNC_2(VAR_5->dev, "Couldn't init DRM CRTC\n");
  return FUNC_0(VAR_12);
 }

 FUNC_4(&VAR_8->crtc, &VAR_4);


 VAR_8->crtc.port = FUNC_7(VAR_8->tcon->dev->of_node,
         1);


 for (VAR_13 = 0; VAR_9[VAR_13]; VAR_13++) {
  uint32_t VAR_15 = FUNC_6(&VAR_8->crtc);
  struct drm_plane *VAR_16 = VAR_9[VAR_13];

  if (VAR_16->type == VAR_0)
   VAR_16->possible_crtcs = VAR_15;
 }

 return VAR_8;
}
