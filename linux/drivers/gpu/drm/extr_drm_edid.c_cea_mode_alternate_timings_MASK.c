
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_display_mode {int vtotal; int vsync_end; int vsync_start; } ;
struct TYPE_2__ {int vtotal; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool
FUNC_1(u8 VAR_1, struct drm_display_mode *VAR_2)
{
 FUNC_0(VAR_0[8].vtotal != 262 ||
       VAR_0[9].vtotal != 262 ||
       VAR_0[12].vtotal != 262 ||
       VAR_0[13].vtotal != 262 ||
       VAR_0[23].vtotal != 312 ||
       VAR_0[24].vtotal != 312 ||
       VAR_0[27].vtotal != 312 ||
       VAR_0[28].vtotal != 312);

 if (((VAR_1 == 8 || VAR_1 == 9 ||
       VAR_1 == 12 || VAR_1 == 13) && VAR_2->vtotal < 263) ||
     ((VAR_1 == 23 || VAR_1 == 24 ||
       VAR_1 == 27 || VAR_1 == 28) && VAR_2->vtotal < 314)) {
  VAR_2->vsync_start++;
  VAR_2->vsync_end++;
  VAR_2->vtotal++;

  return 1;
 }

 return 0;
}
