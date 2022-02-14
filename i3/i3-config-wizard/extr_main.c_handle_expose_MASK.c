
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int color_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (char**,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (int,int,char*,int const,int const) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void) {
    const color_t VAR_10 = FUNC_1("#000000");
    const color_t VAR_11 = FUNC_1("#FFFFFF");
    const color_t VAR_12 = FUNC_1("#00FF00");
    const color_t VAR_13 = FUNC_1("#FF0000");


    FUNC_0(&VAR_9, VAR_10);

    FUNC_4(&VAR_7);

    if (VAR_6 == VAR_2) {
        FUNC_5(2, 2, "You have not configured i3 yet.", VAR_11, VAR_10);
        FUNC_5(2, 3, "Do you want me to generate a config at", VAR_11, VAR_10);

        char *VAR_14;
        FUNC_3(&VAR_14, "%s?", VAR_4);
        FUNC_5(2, 4, VAR_14, VAR_11, VAR_10);
        FUNC_2(VAR_14);

        FUNC_5(13, 6, "Yes, generate the config", VAR_11, VAR_10);
        FUNC_5(13, 8, "No, I will use the defaults", VAR_11, VAR_10);

        FUNC_5(4, 6, "<Enter>", VAR_12, VAR_10);

        FUNC_5(5, 8, "<ESC>", VAR_13, VAR_10);
    }

    if (VAR_6 == VAR_1) {
        FUNC_5(2, 2, "Please choose either:", VAR_11, VAR_10);
        FUNC_5(13, 4, "Win as default modifier", VAR_11, VAR_10);
        FUNC_5(13, 5, "Alt as default modifier", VAR_11, VAR_10);
        FUNC_5(2, 7, "Afterwards, press", VAR_11, VAR_10);
        FUNC_5(13, 9, "to write the config", VAR_11, VAR_10);
        FUNC_5(13, 10, "to abort", VAR_11, VAR_10);


        if (VAR_8 == VAR_0)
            FUNC_5(5, 5, "<Alt>", VAR_11, VAR_10);
        else
            FUNC_5(5, 4, "<Win>", VAR_11, VAR_10);


        FUNC_4(&VAR_3);
        if (VAR_8 == VAR_0)
            FUNC_5(2, 4, "-> <Win>", VAR_11, VAR_10);
        else
            FUNC_5(2, 5, "-> <Alt>", VAR_11, VAR_10);

        FUNC_4(&VAR_7);
        FUNC_5(4, 9, "<Enter>", VAR_12, VAR_10);

        FUNC_5(5, 10, "<ESC>", VAR_13, VAR_10);
    }

    FUNC_6(VAR_5);

    return 1;
}
