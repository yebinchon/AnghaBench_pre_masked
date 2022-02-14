
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct audio_info {size_t mode_count; TYPE_1__* modes; } ;
typedef enum audio_format_code { ____Placeholder_audio_format_code } audio_format_code ;
struct TYPE_2__ {int format_code; scalar_t__ channel_count; } ;



__attribute__((used)) static bool FUNC_0(
 const struct audio_info *VAR_0,
 enum audio_format_code VAR_1,
 uint32_t *VAR_2)
{
 uint32_t VAR_3;
 uint32_t VAR_4 = 0;
 bool VAR_5 = 0;

 if (VAR_0 == ((void*)0))
  return VAR_5;


 for (VAR_3 = 0; VAR_3 < VAR_0->mode_count; VAR_3++) {
  if (VAR_0->modes[VAR_3].format_code == VAR_1) {
   if (VAR_5) {


    if (VAR_0->modes[VAR_3].channel_count >
  VAR_0->modes[VAR_4].channel_count) {
     VAR_4 = VAR_3;
    }
   } else {

    VAR_5 = 1;
    VAR_4 = VAR_3;
   }
  }
 }


 if (VAR_5 && VAR_2 != ((void*)0))
  *VAR_2 = VAR_4;

 return VAR_5;
}
