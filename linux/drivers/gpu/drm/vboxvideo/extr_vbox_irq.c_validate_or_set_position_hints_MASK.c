
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vbva_modehint {int dx; int dy; int cx; int cy; scalar_t__ enabled; } ;
struct vbox_private {int num_crtcs; struct vbva_modehint* last_mode_hints; } ;



__attribute__((used)) static void FUNC_0(struct vbox_private *VAR_0)
{
 struct vbva_modehint *VAR_1, *VAR_2;
 bool VAR_3 = 1;
 u16 VAR_4 = 0;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_crtcs; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   VAR_1 = &VAR_0->last_mode_hints[VAR_5];
   VAR_2 = &VAR_0->last_mode_hints[VAR_6];

   if (VAR_1->enabled && VAR_2->enabled) {
    if (VAR_1->dx >= 0xffff ||
        VAR_1->dy >= 0xffff ||
        VAR_2->dx >= 0xffff ||
        VAR_2->dy >= 0xffff ||
        (VAR_1->dx <
     VAR_2->dx + (VAR_2->cx & 0x8fff) &&
         VAR_1->dx + (VAR_1->cx & 0x8fff) >
     VAR_2->dx) ||
        (VAR_1->dy <
     VAR_2->dy + (VAR_2->cy & 0x8fff) &&
         VAR_1->dy + (VAR_1->cy & 0x8fff) >
     VAR_2->dy))
     VAR_3 = 0;
   }
  }
 }
 if (!VAR_3)
  for (VAR_5 = 0; VAR_5 < VAR_0->num_crtcs; ++VAR_5) {
   if (VAR_0->last_mode_hints[VAR_5].enabled) {
    VAR_0->last_mode_hints[VAR_5].dx = VAR_4;
    VAR_0->last_mode_hints[VAR_5].dy = 0;
    VAR_4 +=
        VAR_0->last_mode_hints[VAR_5].cx & 0x8fff;
   }
  }
}
