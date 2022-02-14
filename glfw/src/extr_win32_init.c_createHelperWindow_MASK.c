
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dbi ;
struct TYPE_5__ {int helperWindowHandle; int deviceNotificationHandle; } ;
struct TYPE_7__ {TYPE_1__ win32; } ;
struct TYPE_6__ {int dbcc_size; int dbcc_classguid; int dbcc_devicetype; } ;
typedef int MSG ;
typedef int GLFWbool ;
typedef int DEV_BROADCAST_HDR ;
typedef TYPE_2__ DEV_BROADCAST_DEVICEINTERFACE_W ;


 int FUNC_0 (int ,int ,char*,int,int ,int ,int,int,int *,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static GLFWbool FUNC_9(void)
{
    MSG VAR_13;

    VAR_12.win32.helperWindowHandle =
        FUNC_0(VAR_10,
                        VAR_11,
                        L"GLFW message window",
                        VAR_9 | VAR_8,
                        0, 0, 1, 1,
                        ((void*)0), ((void*)0),
                        FUNC_2(((void*)0)),
                        ((void*)0));

    if (!VAR_12.win32.helperWindowHandle)
    {
        FUNC_8(VAR_3,
                             "Win32: Failed to create helper window");
        return VAR_2;
    }



    FUNC_5(VAR_12.win32.helperWindowHandle, VAR_7);


    {
        DEV_BROADCAST_DEVICEINTERFACE_W VAR_14;
        FUNC_7(&VAR_14, sizeof(VAR_14));
        VAR_14.dbcc_size = sizeof(VAR_14);
        VAR_14.dbcc_devicetype = VAR_0;
        VAR_14.dbcc_classguid = VAR_5;

        VAR_12.win32.deviceNotificationHandle =
            FUNC_4(VAR_12.win32.helperWindowHandle,
                                        (DEV_BROADCAST_HDR*) &VAR_14,
                                        VAR_1);
    }

    while (FUNC_3(&VAR_13, VAR_12.win32.helperWindowHandle, 0, 0, VAR_6))
    {
        FUNC_6(&VAR_13);
        FUNC_1(&VAR_13);
    }

   return VAR_4;
}
