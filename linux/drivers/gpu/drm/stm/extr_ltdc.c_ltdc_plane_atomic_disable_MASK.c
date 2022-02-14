
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ltdc_device {int regs; } ;
struct drm_plane_state {TYPE_2__* crtc; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {int index; TYPE_3__ base; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ltdc_device* FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_3,
          struct drm_plane_state *VAR_4)
{
 struct ltdc_device *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6 = VAR_3->index * VAR_0;


 FUNC_2(VAR_5->regs, VAR_1 + VAR_6, VAR_2);

 FUNC_0("CRTC:%d plane:%d\n",
    VAR_4->crtc->base.id, VAR_3->base.id);
}
