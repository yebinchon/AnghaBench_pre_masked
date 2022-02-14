
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_device {int ddev; } ;
struct TYPE_2__ {int possible_crtcs; } ;
struct drm_writeback_connector {int base; TYPE_1__ encoder; } ;
struct rcar_du_crtc {int crtc; struct drm_writeback_connector writeback; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct drm_writeback_connector*,int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(struct rcar_du_device *VAR_4,
      struct rcar_du_crtc *VAR_5)
{
 struct drm_writeback_connector *VAR_6 = &VAR_5->writeback;

 VAR_6->encoder.possible_crtcs = 1 << FUNC_2(&VAR_5->crtc);
 FUNC_1(&VAR_6->base,
     &VAR_1);

 return FUNC_3(VAR_4->ddev, VAR_6,
         &VAR_0,
         &VAR_2,
         VAR_3,
         FUNC_0(VAR_3));
}
