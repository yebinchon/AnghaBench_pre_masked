
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc {int dummy; } ;
struct armada_crtc {int cursor_x; int cursor_y; TYPE_1__* variant; } ;
struct TYPE_2__ {int has_spu_adv_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct armada_crtc*,int) ;
 struct armada_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_1, int VAR_2, int VAR_3)
{
 struct armada_crtc *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;


 if (!VAR_4->variant->has_spu_adv_reg)
  return -VAR_0;

 VAR_4->cursor_x = VAR_2;
 VAR_4->cursor_y = VAR_3;
 VAR_5 = FUNC_0(VAR_4, 0);

 return VAR_5;
}
