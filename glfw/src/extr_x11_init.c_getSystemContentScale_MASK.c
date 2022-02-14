
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int addr; } ;
typedef TYPE_2__ XrmValue ;
typedef scalar_t__ XrmDatabase ;
struct TYPE_5__ {int display; } ;
struct TYPE_7__ {TYPE_1__ x11; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,char*,char**,TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_3__ VAR_0 ;
 float FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(float* VAR_1, float* VAR_2)
{



    float VAR_3 = 96.f, VAR_4 = 96.f;




    char* VAR_5 = FUNC_0(VAR_0.x11.display);
    if (VAR_5)
    {
        XrmDatabase VAR_6 = FUNC_3(VAR_5);
        if (VAR_6)
        {
            XrmValue VAR_7;
            char* VAR_8 = ((void*)0);

            if (FUNC_2(VAR_6, "Xft.dpi", "Xft.Dpi", &VAR_8, &VAR_7))
            {
                if (VAR_8 && FUNC_5(VAR_8, "String") == 0)
                    VAR_3 = VAR_4 = FUNC_4(VAR_7.addr);
            }

            FUNC_1(VAR_6);
        }
    }

    *VAR_1 = VAR_3 / 96.f;
    *VAR_2 = VAR_4 / 96.f;
}
