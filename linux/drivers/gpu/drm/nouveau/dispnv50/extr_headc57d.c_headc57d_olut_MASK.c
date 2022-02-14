
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mode; int size; int output_mode; int load; } ;
struct TYPE_5__ {TYPE_1__* gamma_lut; } ;
struct nv50_head_atom {TYPE_3__ olut; TYPE_2__ state; } ;
struct nv50_head {int dummy; } ;
struct drm_color_lut {int dummy; } ;
struct TYPE_4__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(struct nv50_head *VAR_2, struct nv50_head_atom *VAR_3)
{
 VAR_3->olut.mode = 2;
 VAR_3->olut.size = 4 + 1024 + 1 ;
 VAR_3->olut.output_mode = 1;
 if (VAR_3->state.gamma_lut &&
     VAR_3->state.gamma_lut->length / sizeof(struct drm_color_lut) == 256)
  VAR_3->olut.load = VAR_1;
 else
  VAR_3->olut.load = VAR_0;
}
