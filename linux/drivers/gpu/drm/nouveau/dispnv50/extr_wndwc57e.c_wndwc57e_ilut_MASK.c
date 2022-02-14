
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int mode; int size; int load; scalar_t__ output_mode; } ;
struct TYPE_4__ {TYPE_3__ i; } ;
struct nv50_wndw_atom {TYPE_1__ xlut; TYPE_2__* ilut; } ;
struct nv50_wndw {int dummy; } ;
struct drm_color_lut {int dummy; } ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct nv50_wndw *VAR_1, struct nv50_wndw_atom *VAR_2)
{
 u16 VAR_3 = VAR_2->ilut->length / sizeof(struct drm_color_lut);
 if (VAR_3 == 256) {
  VAR_2->xlut.i.mode = 1;
 } else {
  VAR_2->xlut.i.mode = 2;
  VAR_3 = 1024;
 }
 VAR_2->xlut.i.size = 4 + VAR_3 + 1 ;
 VAR_2->xlut.i.output_mode = 0;
 VAR_2->xlut.i.load = VAR_0;
}
