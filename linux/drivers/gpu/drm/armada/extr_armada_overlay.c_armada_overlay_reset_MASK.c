
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane {int * state; } ;
struct TYPE_4__ {int color_range; int color_encoding; } ;
struct TYPE_3__ {TYPE_2__ base; } ;
struct armada_overlay_state {int colorkey_yr; int colorkey_ug; int colorkey_vb; int colorkey_mode; TYPE_1__ base; int saturation; int contrast; int brightness; int colorkey_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_plane*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 struct armada_overlay_state* FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_plane *VAR_9)
{
 struct armada_overlay_state *VAR_10;

 if (VAR_9->state)
  FUNC_2(VAR_9->state);
 FUNC_4(VAR_9->state);
 VAR_9->state = ((void*)0);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_8);
 if (VAR_10) {
  VAR_10->colorkey_yr = 0xfefefe00;
  VAR_10->colorkey_ug = 0x01010100;
  VAR_10->colorkey_vb = 0x01010100;
  VAR_10->colorkey_mode = FUNC_1(VAR_2) |
           VAR_1 | FUNC_0(0);
  VAR_10->colorkey_enable = VAR_0;
  VAR_10->brightness = VAR_3;
  VAR_10->contrast = VAR_4;
  VAR_10->saturation = VAR_6;
  FUNC_3(VAR_9, &VAR_10->base.base);
  VAR_10->base.base.color_encoding = VAR_5;
  VAR_10->base.base.color_range = VAR_7;
 }
}
