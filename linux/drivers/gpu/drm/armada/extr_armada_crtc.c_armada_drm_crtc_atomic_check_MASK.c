
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc_state {int planes_changed; scalar_t__ color_mgmt_changed; scalar_t__ gamma_lut; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {int name; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_1,
     struct drm_crtc_state *VAR_2)
{
 FUNC_0("[CRTC:%d:%s]\n", VAR_1->base.id, VAR_1->name);

 if (VAR_2->gamma_lut && FUNC_1(VAR_2->gamma_lut) != 256)
  return -VAR_0;

 if (VAR_2->color_mgmt_changed)
  VAR_2->planes_changed = 1;

 return 0;
}
