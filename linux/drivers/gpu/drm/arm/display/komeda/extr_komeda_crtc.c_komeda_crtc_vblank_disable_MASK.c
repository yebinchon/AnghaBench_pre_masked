
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct komeda_dev {TYPE_2__* funcs; } ;
struct komeda_crtc {TYPE_3__* master; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int (* on_off_vblank ) (struct komeda_dev*,int ,int) ;} ;
struct TYPE_4__ {struct komeda_dev* dev_private; } ;


 int FUNC_0 (struct komeda_dev*,int ,int) ;
 struct komeda_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0)
{
 struct komeda_dev *VAR_1 = VAR_0->dev->dev_private;
 struct komeda_crtc *VAR_2 = FUNC_1(VAR_0);

 VAR_1->funcs->on_off_vblank(VAR_1, VAR_2->master->id, 0);
}
