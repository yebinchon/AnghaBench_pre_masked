
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int integer; } ;
typedef TYPE_1__ cvar_t ;
struct TYPE_7__ {int buffHeight; int buffWidth; } ;
struct TYPE_6__ {TYPE_1__* (* Cvar_Get ) (char*,char*,int) ;} ;
typedef int EGLint ;
typedef int EGLConfig ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ,int *,int,int *) ;
 int FUNC_7 (scalar_t__,int ,int ,int *) ;
 int FUNC_8 (scalar_t__,int ,int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 TYPE_3__ VAR_13 ;
 TYPE_1__* FUNC_9 (char*,char*,int) ;

void FUNC_10(qboolean VAR_14) {
  FUNC_3();

  cvar_t* VAR_15 =
      VAR_13.Cvar_Get("r_gpuDeviceIndex", "0", VAR_0 | VAR_1);

  VAR_9 = FUNC_1(VAR_15->integer);
  if (VAR_9 == VAR_5) {
    FUNC_4("Failed to create EGL display for device index %d!\n",
              VAR_15->integer);
    return;
  }

  EGLint VAR_16;
  EGLConfig VAR_17;
  FUNC_0(FUNC_6(VAR_9, VAR_12, &VAR_17, 1,
                                    &VAR_16));

  EGLint VAR_18[] = {
      VAR_7, VAR_11.buffWidth,
      VAR_2, VAR_11.buffHeight,
      VAR_3,
  };

  FUNC_0(VAR_10 = FUNC_8(
                        VAR_9, VAR_17, VAR_18));

  FUNC_0(FUNC_5(VAR_6));

  FUNC_0(VAR_8 = FUNC_7(VAR_9, VAR_17,
                                                   VAR_4, ((void*)0)));

  FUNC_2();
}
