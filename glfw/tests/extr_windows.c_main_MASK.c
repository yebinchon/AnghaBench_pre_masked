
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b; int g; int r; } ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,float) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int,int ,int *,int *) ;
 int VAR_10 ;
 int FUNC_6 (int *,int*,int*,int*,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_18 () ;

int FUNC_19(int VAR_13, char** VAR_14)
{
    int VAR_15, VAR_16;
    int VAR_17 = VAR_3;
    int VAR_18 = VAR_5;
    int VAR_19 = VAR_5;
    GLFWwindow* VAR_20[4];

    while ((VAR_16 = FUNC_1(VAR_13, VAR_14, "bfh")) != -1)
    {
        switch (VAR_16)
        {
            case 'b':
                VAR_17 = VAR_5;
                break;
            case 'f':
                VAR_18 = VAR_3;
                break;
            case 'h':
                FUNC_18();
                FUNC_0(VAR_1);
            default:
                FUNC_18();
                FUNC_0(VAR_0);
        }
    }

    FUNC_9(VAR_9);

    if (!FUNC_7())
        FUNC_0(VAR_0);

    FUNC_16(VAR_2, VAR_17);
    FUNC_16(VAR_6, VAR_3);

    for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
    {
        int VAR_21, VAR_22, VAR_23, VAR_24;
        if (VAR_15)
            FUNC_16(VAR_4, VAR_18);

        VAR_20[VAR_15] = FUNC_5(200, 200, VAR_12[VAR_15], ((void*)0), ((void*)0));
        if (!VAR_20[VAR_15])
        {
            FUNC_14();
            FUNC_0(VAR_0);
        }

        FUNC_10(VAR_20[VAR_15], VAR_11);

        FUNC_8(VAR_20[VAR_15]);
        FUNC_4(VAR_10);
        FUNC_3(VAR_8[VAR_15].r, VAR_8[VAR_15].g, VAR_8[VAR_15].b, 1.f);

        FUNC_6(VAR_20[VAR_15], &VAR_21, &VAR_22, &VAR_23, &VAR_24);
        FUNC_11(VAR_20[VAR_15],
                         100 + (VAR_15 & 1) * (200 + VAR_21 + VAR_23),
                         100 + (VAR_15 >> 1) * (200 + VAR_22 + VAR_24));
    }

    for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
        FUNC_12(VAR_20[VAR_15]);

    while (VAR_19)
    {
        for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
        {
            FUNC_8(VAR_20[VAR_15]);
            FUNC_2(VAR_7);
            FUNC_13(VAR_20[VAR_15]);

            if (FUNC_17(VAR_20[VAR_15]))
                VAR_19 = VAR_3;
        }

        FUNC_15();
    }

    FUNC_14();
    FUNC_0(VAR_1);
}
