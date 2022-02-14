
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fore; int back; } ;
struct TYPE_6__ {int fore; int back; } ;
struct TYPE_9__ {int* mv_ovscan; int mv_csz; int mv_rsz; int font_size; TYPE_3__ mv_norm; TYPE_1__ mv_rev; } ;
struct TYPE_7__ {int vi_flags; } ;
struct TYPE_10__ {int* active_vty; int screen_map; scalar_t__ video_mode_number; TYPE_4__ console_info; TYPE_2__ video_mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char,scalar_t__) ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_11, VAR_12[3];

 VAR_11 = VAR_7;

 FUNC_2(0, VAR_4, VAR_6.active_vty);

 FUNC_2(0, VAR_1, VAR_6.console_info.mv_ovscan);
 FUNC_1(VAR_8, "\033[=%dH", VAR_6.console_info.mv_rev.fore);
 FUNC_1(VAR_8, "\033[=%dI", VAR_6.console_info.mv_rev.back);

 if (VAR_10 == 0)
  FUNC_2(0, VAR_3, &VAR_6.screen_map);

 if (VAR_9) {
  if (VAR_6.video_mode_number >= VAR_2)
   FUNC_2(0,
       FUNC_0('V', VAR_6.video_mode_number - VAR_2),
       ((void*)0));
  else
   FUNC_2(0, FUNC_0('S', VAR_6.video_mode_number), ((void*)0));
  if (VAR_6.video_mode_info.vi_flags & VAR_5) {
   VAR_12[0] = VAR_6.console_info.mv_csz;
   VAR_12[1] = VAR_6.console_info.mv_rsz;
   VAR_12[2] = VAR_6.console_info.font_size;
   FUNC_2(0, VAR_0, VAR_12);
  }
 }


 FUNC_1(VAR_8, "\033[=%dF", VAR_6.console_info.mv_norm.fore);
 FUNC_1(VAR_8, "\033[=%dG", VAR_6.console_info.mv_norm.back);

 VAR_7 = VAR_11;
}
