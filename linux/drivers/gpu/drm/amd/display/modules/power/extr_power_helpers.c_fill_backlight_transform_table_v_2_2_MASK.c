
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iram_table_v_2_2 {int* backlight_thresholds; void** backlight_offsets; } ;
struct dmcu_iram_parameters {int backlight_lut_array_size; void** backlight_lut_array; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 void* FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct dmcu_iram_parameters VAR_1,
  struct iram_table_v_2_2 *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4 = VAR_0;
 unsigned int VAR_5;

 VAR_2->backlight_thresholds[0] = 0;
 VAR_2->backlight_offsets[0] = VAR_1.backlight_lut_array[0];
 VAR_2->backlight_thresholds[VAR_4-1] = 0xFFFF;
 VAR_2->backlight_offsets[VAR_4-1] =
  VAR_1.backlight_lut_array[VAR_1.backlight_lut_array_size - 1];
 for (VAR_3 = 1; VAR_3+1 < VAR_4; VAR_3++) {
  VAR_5 = (VAR_1.backlight_lut_array_size - 1) * VAR_3 / (VAR_4 - 1);
  FUNC_0(VAR_5 < VAR_1.backlight_lut_array_size);

  VAR_2->backlight_thresholds[VAR_3] =
   FUNC_2(FUNC_1((VAR_3 * 65536), VAR_4));
  VAR_2->backlight_offsets[VAR_3] =
   FUNC_2(VAR_1.backlight_lut_array[VAR_5]);
 }
}
