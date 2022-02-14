
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int windowAspect; int buffHeight; int buffWidth; int vidHeight; int vidWidth; } ;
struct TYPE_3__ {int (* Cvar_Get ) (char*,char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int) ;

void FUNC_8(void) {
  VAR_7 = VAR_11.Cvar_Get("r_sdlDriver", "", VAR_2);
  VAR_4 = VAR_11.Cvar_Get("r_allowResize", "0", VAR_0 | VAR_1);
  VAR_5 =
      VAR_11.Cvar_Get("r_centerWindow", "0", VAR_0 | VAR_1);
  VAR_9 = VAR_11.Cvar_Get("r_tvMode", "-1", VAR_1 | VAR_0);
  VAR_10 =
      VAR_11.Cvar_Get("r_tvModeAspect", "0", VAR_1 | VAR_0);
  VAR_8 =
      VAR_11.Cvar_Get("r_tvConsoleMode", "0", VAR_1 | VAR_0);
  VAR_6 = VAR_11.Cvar_Get("r_motionblur", "0", VAR_0 | VAR_1);

  FUNC_0(&VAR_3.vidWidth, &VAR_3.vidHeight, &VAR_3.buffWidth,
                &VAR_3.buffHeight, &VAR_3.windowAspect, -1);
}
