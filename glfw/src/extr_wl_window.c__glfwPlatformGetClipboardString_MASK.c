
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t clipboardSize; char* clipboardString; int dataOffer; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (int ,char*,int) ;

const char* FUNC_7(void)
{
    int VAR_6[2];
    int VAR_7;
    size_t VAR_8 = 0;

    if (!VAR_4.wl.dataOffer)
    {
        FUNC_0(VAR_1,
                        "No clipboard data has been sent yet");
        return ((void*)0);
    }

    VAR_7 = FUNC_4(VAR_6, VAR_3);
    if (VAR_7 < 0)
    {

        FUNC_0(VAR_2,
                        "Wayland: Impossible to create clipboard pipe fds");
        return ((void*)0);
    }

    FUNC_6(VAR_4.wl.dataOffer, "text/plain;charset=utf-8", VAR_6[1]);
    FUNC_1(VAR_6[1]);


    FUNC_3(-1);

    while (1)
    {


        if (VAR_8 + 4096 > VAR_4.wl.clipboardSize)
        {
            if (!FUNC_2())
            {
                FUNC_1(VAR_6[0]);
                return ((void*)0);
            }
        }


        VAR_7 = FUNC_5(VAR_6[0], VAR_4.wl.clipboardString + VAR_8, 4096);
        if (VAR_7 == 0)
            break;
        if (VAR_7 == -1 && VAR_5 == VAR_0)
            continue;
        if (VAR_7 == -1)
        {

            FUNC_0(VAR_2,
                            "Wayland: Impossible to read from clipboard fd");
            FUNC_1(VAR_6[0]);
            return ((void*)0);
        }
        VAR_8 += VAR_7;
    }
    FUNC_1(VAR_6[0]);
    if (VAR_8 + 1 > VAR_4.wl.clipboardSize)
    {
        if (!FUNC_2())
            return ((void*)0);
    }
    VAR_4.wl.clipboardString[VAR_8] = '\0';
    return VAR_4.wl.clipboardString;
}
