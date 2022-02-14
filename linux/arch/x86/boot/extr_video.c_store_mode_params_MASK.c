
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {int orig_video_mode; int orig_video_cols; int orig_video_lines; void* orig_video_points; } ;
struct TYPE_4__ {TYPE_1__ screen_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(void)
{
 u16 VAR_7;
 int VAR_8, VAR_9;



 if (VAR_5)
  return;

 FUNC_3();
 FUNC_4();

 if (VAR_2.screen_info.orig_video_mode == 0x07) {

  VAR_6 = 0xb000;
 } else {

  VAR_6 = 0xb800;
 }

 FUNC_2(0);
 VAR_7 = FUNC_0(0x485);
 VAR_2.screen_info.orig_video_points = VAR_7;

 VAR_8 = FUNC_0(0x44a);
 VAR_9 = (VAR_1 == VAR_0) ? 25 : FUNC_1(0x484)+1;

 if (VAR_3)
  VAR_8 = VAR_3;
 if (VAR_4)
  VAR_9 = VAR_4;

 VAR_2.screen_info.orig_video_cols = VAR_8;
 VAR_2.screen_info.orig_video_lines = VAR_9;
}
