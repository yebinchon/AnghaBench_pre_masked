
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct output_pixel_processor {TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ (* dpg_is_blanked ) (struct output_pixel_processor*) ;} ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct output_pixel_processor*) ;
 int FUNC_2 (int) ;

bool FUNC_3(
  struct output_pixel_processor *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 1000; VAR_1++) {
  if (VAR_0->funcs->dpg_is_blanked(VAR_0))
   break;

  FUNC_2(100);
 }

 if (VAR_1 == 1000) {
  FUNC_0("DC: failed to blank crtc!\n");
  return 0;
 }

 return 1;
}
