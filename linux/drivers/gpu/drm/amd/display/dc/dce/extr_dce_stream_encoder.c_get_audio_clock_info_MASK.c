
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct audio_clock_info {int pixel_clock_in_10khz; int cts_32khz; int cts_44khz; int cts_48khz; int n_32khz; int n_44khz; int n_48khz; } ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;


 int FUNC_0 (struct audio_clock_info*) ;


 struct audio_clock_info* VAR_0 ;
 struct audio_clock_info* VAR_1 ;
 struct audio_clock_info* VAR_2 ;

__attribute__((used)) static void FUNC_1(
 enum dc_color_depth VAR_3,
 uint32_t VAR_4,
 uint32_t VAR_5,
 struct audio_clock_info *VAR_6)
{
 const struct audio_clock_info *VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9 = VAR_4 / 100;
 uint32_t VAR_10;

 switch (VAR_3) {
 case 128:
  VAR_7 = VAR_2;
  VAR_10 = FUNC_0(
    VAR_2);
  break;
 case 129:
  VAR_7 = VAR_1;
  VAR_10 = FUNC_0(
    VAR_1);
  break;
 default:
  VAR_7 = VAR_0;
  VAR_10 = FUNC_0(
    VAR_0);
  break;
 }

 if (VAR_7 != ((void*)0)) {

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   if (VAR_7[VAR_8].pixel_clock_in_10khz >
    VAR_9)
    break;
   else if (VAR_7[VAR_8].pixel_clock_in_10khz ==
     VAR_9) {

    *VAR_6 = VAR_7[VAR_8];
    return;
   }
  }
 }


 if (VAR_5 == 0)
  VAR_5 = VAR_4;



 VAR_6->pixel_clock_in_10khz =
   VAR_5 / 100;
 VAR_6->cts_32khz = VAR_5 / 10;
 VAR_6->cts_44khz = VAR_5 / 10;
 VAR_6->cts_48khz = VAR_5 / 10;

 VAR_6->n_32khz = 4096;
 VAR_6->n_44khz = 6272;
 VAR_6->n_48khz = 6144;
}
