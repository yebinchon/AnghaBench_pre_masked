
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {TYPE_1__* funcs; } ;
struct TYPE_2__ {scalar_t__ (* is_blanked ) (struct timing_generator*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct timing_generator*) ;

bool FUNC_3(
  struct timing_generator *VAR_0)
{
 int VAR_1;


 if (!VAR_0->funcs->is_blanked)
  return 1;
 for (VAR_1 = 0; VAR_1 < 100; VAR_1++) {
  if (VAR_0->funcs->is_blanked(VAR_0))
   break;

  FUNC_1(1);
 }

 if (VAR_1 == 100) {
  FUNC_0("DC: failed to blank crtc!\n");
  return 0;
 }

 return 1;
}
