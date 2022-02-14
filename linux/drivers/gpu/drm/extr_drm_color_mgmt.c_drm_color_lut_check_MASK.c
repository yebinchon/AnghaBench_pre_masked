
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_property_blob {struct drm_color_lut* data; } ;
struct drm_color_lut {scalar_t__ red; scalar_t__ blue; scalar_t__ green; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_property_blob const*) ;

int FUNC_2(const struct drm_property_blob *VAR_3, u32 VAR_4)
{
 const struct drm_color_lut *VAR_5;
 int VAR_6;

 if (!VAR_3 || !VAR_4)
  return 0;

 VAR_5 = VAR_3->data;
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3); VAR_6++) {
  if (VAR_4 & VAR_0) {
   if (VAR_5[VAR_6].red != VAR_5[VAR_6].blue ||
       VAR_5[VAR_6].red != VAR_5[VAR_6].green) {
    FUNC_0("All LUT entries must have equal r/g/b\n");
    return -VAR_2;
   }
  }

  if (VAR_6 > 0 && VAR_4 & VAR_1) {
   if (VAR_5[VAR_6].red < VAR_5[VAR_6 - 1].red ||
       VAR_5[VAR_6].green < VAR_5[VAR_6 - 1].green ||
       VAR_5[VAR_6].blue < VAR_5[VAR_6 - 1].blue) {
    FUNC_0("LUT entries must never decrease.\n");
    return -VAR_2;
   }
  }
 }

 return 0;
}
