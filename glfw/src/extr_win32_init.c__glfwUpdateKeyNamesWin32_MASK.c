
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int chars ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {int* scancodes; int * keynames; } ;
struct TYPE_4__ {TYPE_1__ win32; } ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int *,int *,int,int ) ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int FUNC_2 (int ,int ,int *,int,int ,int,int *,int *) ;
 TYPE_2__ VAR_21 ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(void)
{
    int VAR_22;
    BYTE VAR_23[256] = {0};

    FUNC_3(VAR_21.win32.keynames, 0, sizeof(VAR_21.win32.keynames));

    for (VAR_22 = VAR_4; VAR_22 <= VAR_3; VAR_22++)
    {
        UINT VAR_24;
        int VAR_25, VAR_26;
        WCHAR VAR_27[16];

        VAR_25 = VAR_21.win32.scancodes[VAR_22];
        if (VAR_25 == -1)
            continue;

        if (VAR_22 >= VAR_1 && VAR_22 <= VAR_2)
        {
            const UINT VAR_28[] = {
                VAR_10, VAR_11, VAR_12, VAR_13,
                VAR_14, VAR_15, VAR_16, VAR_17,
                VAR_18, VAR_19, VAR_7, VAR_8,
                VAR_9, VAR_20, VAR_6
            };

            VAR_24 = VAR_28[VAR_22 - VAR_1];
        }
        else
            VAR_24 = FUNC_0(VAR_25, VAR_5);

        VAR_26 = FUNC_1(VAR_24, VAR_25, VAR_23,
                           VAR_27, sizeof(VAR_27) / sizeof(WCHAR),
                           0);

        if (VAR_26 == -1)
        {
            VAR_26 = FUNC_1(VAR_24, VAR_25, VAR_23,
                               VAR_27, sizeof(VAR_27) / sizeof(WCHAR),
                               0);
        }

        if (VAR_26 < 1)
            continue;

        FUNC_2(VAR_0, 0, VAR_27, 1,
                            VAR_21.win32.keynames[VAR_22],
                            sizeof(VAR_21.win32.keynames[VAR_22]),
                            ((void*)0), ((void*)0));
    }
}
