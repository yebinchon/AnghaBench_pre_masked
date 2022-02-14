
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_color_lut {int blue; int green; int red; } ;
struct TYPE_2__ {void** blue; void** green; void** red; } ;
struct dc_gamma {TYPE_1__ entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(const struct drm_color_lut *VAR_3,
      struct dc_gamma *VAR_4, bool VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;
 int VAR_9;

 if (VAR_5) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_6 = FUNC_2(VAR_3[VAR_9].red, 16);
   VAR_7 = FUNC_2(VAR_3[VAR_9].green, 16);
   VAR_8 = FUNC_2(VAR_3[VAR_9].blue, 16);

   VAR_4->entries.red[VAR_9] = FUNC_1(VAR_6);
   VAR_4->entries.green[VAR_9] = FUNC_1(VAR_7);
   VAR_4->entries.blue[VAR_9] = FUNC_1(VAR_8);
  }
  return;
 }


 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_6 = FUNC_2(VAR_3[VAR_9].red, 16);
  VAR_7 = FUNC_2(VAR_3[VAR_9].green, 16);
  VAR_8 = FUNC_2(VAR_3[VAR_9].blue, 16);

  VAR_4->entries.red[VAR_9] = FUNC_0(VAR_6, VAR_2);
  VAR_4->entries.green[VAR_9] = FUNC_0(VAR_7, VAR_2);
  VAR_4->entries.blue[VAR_9] = FUNC_0(VAR_8, VAR_2);
 }
}
