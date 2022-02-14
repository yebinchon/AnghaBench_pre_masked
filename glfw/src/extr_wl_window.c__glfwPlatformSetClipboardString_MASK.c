
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int serial; int * dataSource; int dataDevice; int * clipboardSendString; int dataDeviceManager; int clipboardSendSize; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;

void FUNC_9(const char* VAR_3)
{
    if (VAR_1.wl.dataSource)
    {
        FUNC_7(VAR_1.wl.dataSource);
        VAR_1.wl.dataSource = ((void*)0);
    }

    if (VAR_1.wl.clipboardSendString)
    {
        FUNC_1(VAR_1.wl.clipboardSendString);
        VAR_1.wl.clipboardSendString = ((void*)0);
    }

    VAR_1.wl.clipboardSendString = FUNC_2(VAR_3);
    if (!VAR_1.wl.clipboardSendString)
    {
        FUNC_0(VAR_0,
                        "Wayland: Impossible to allocate clipboard string");
        return;
    }
    VAR_1.wl.clipboardSendSize = FUNC_3(VAR_3);
    VAR_1.wl.dataSource =
        FUNC_4(VAR_1.wl.dataDeviceManager);
    if (!VAR_1.wl.dataSource)
    {
        FUNC_0(VAR_0,
                        "Wayland: Impossible to create clipboard source");
        FUNC_1(VAR_1.wl.clipboardSendString);
        return;
    }
    FUNC_6(VAR_1.wl.dataSource,
                                &VAR_2,
                                ((void*)0));
    FUNC_8(VAR_1.wl.dataSource, "text/plain;charset=utf-8");
    FUNC_5(VAR_1.wl.dataDevice,
                                 VAR_1.wl.dataSource,
                                 VAR_1.wl.serial);
}
