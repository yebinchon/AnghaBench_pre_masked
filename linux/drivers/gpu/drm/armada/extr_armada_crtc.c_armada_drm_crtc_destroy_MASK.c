
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_crtc {TYPE_3__* dev; } ;
struct armada_private {int ** dcrtc; } ;
struct TYPE_8__ {int port; } ;
struct armada_crtc {size_t num; TYPE_4__ crtc; scalar_t__ base; TYPE_2__* variant; TYPE_1__* cursor_obj; } ;
struct TYPE_7__ {struct armada_private* dev_private; } ;
struct TYPE_6__ {int (* disable ) (struct armada_crtc*) ;} ;
struct TYPE_5__ {int obj; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 struct armada_crtc* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct armada_crtc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct armada_crtc*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_1)
{
 struct armada_crtc *VAR_2 = FUNC_2(VAR_1);
 struct armada_private *VAR_3 = VAR_1->dev->dev_private;

 if (VAR_2->cursor_obj)
  FUNC_1(&VAR_2->cursor_obj->obj);

 VAR_3->dcrtc[VAR_2->num] = ((void*)0);
 FUNC_0(&VAR_2->crtc);

 if (VAR_2->variant->disable)
  VAR_2->variant->disable(VAR_2);

 FUNC_6(0, VAR_2->base + VAR_0);

 FUNC_4(VAR_2->crtc.port);

 FUNC_3(VAR_2);
}
