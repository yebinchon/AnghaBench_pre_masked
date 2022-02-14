
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {int dwFlags; int fEnable; int hRgnBlur; int member_0; } ;
typedef int LONG ;
typedef int HRGN ;
typedef TYPE_3__ DWM_BLURBEHIND ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (scalar_t__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int ,int *,int *,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(const _GLFWwindow* VAR_9)
{
    BOOL VAR_10;

    if (!FUNC_5())
        return;

    if (FUNC_8(FUNC_3(&VAR_10)) && VAR_10)
    {
        HRGN VAR_11 = FUNC_0(0, 0, -1, -1);
        DWM_BLURBEHIND VAR_12 = {0};
        VAR_12.dwFlags = VAR_1 | VAR_0;
        VAR_12.hRgnBlur = VAR_11;
        VAR_12.fEnable = VAR_7;

        if (FUNC_8(FUNC_2(VAR_9->win32.handle, &VAR_12)))
        {
            LONG VAR_13 = FUNC_4(VAR_9->win32.handle, VAR_2);
            VAR_13 |= VAR_8;
            FUNC_10(VAR_9->win32.handle, VAR_2, VAR_13);




            FUNC_9(VAR_9->win32.handle,
                                       FUNC_6(255, 0, 255), 255, VAR_3);
        }

        FUNC_1(VAR_11);
    }
    else
    {
        LONG VAR_14 = FUNC_4(VAR_9->win32.handle, VAR_2);
        VAR_14 &= ~VAR_8;
        FUNC_10(VAR_9->win32.handle, VAR_2, VAR_14);
        FUNC_7(VAR_9->win32.handle, ((void*)0), ((void*)0),
                     VAR_4 | VAR_6 | VAR_5);
    }
}
