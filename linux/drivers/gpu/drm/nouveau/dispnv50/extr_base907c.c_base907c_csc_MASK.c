
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__* matrix; } ;
struct nv50_wndw_atom {TYPE_1__ csc; } ;
struct nv50_wndw {int dummy; } ;
struct drm_color_ctm {int * matrix; } ;


 scalar_t__ FUNC_0 (int ) ;

void
FUNC_1(struct nv50_wndw *VAR_0, struct nv50_wndw_atom *VAR_1,
      const struct drm_color_ctm *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
   u32 *VAR_5 = &VAR_1->csc.matrix[VAR_4 * 4 + VAR_3];


   if (VAR_3 == 3) {
    *VAR_5 = 0;
   } else {
    *VAR_5 = FUNC_0(VAR_2->matrix[VAR_4 * 3 + VAR_3]);
   }
  }
 }
}
