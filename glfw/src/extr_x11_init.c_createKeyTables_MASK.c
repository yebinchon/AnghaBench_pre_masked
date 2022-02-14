
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_5__* XkbDescPtr ;
struct TYPE_11__ {scalar_t__ available; } ;
struct TYPE_12__ {size_t* keycodes; size_t* scancodes; int display; TYPE_1__ xkb; } ;
struct TYPE_16__ {TYPE_2__ x11; } ;
struct TYPE_15__ {int min_key_code; int max_key_code; TYPE_4__* names; } ;
struct TYPE_14__ {TYPE_3__* keys; } ;
struct TYPE_13__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 TYPE_5__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 TYPE_6__ VAR_53 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (size_t*,int,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void)
{
    int VAR_54, VAR_55;

    FUNC_5(VAR_53.x11.keycodes, -1, sizeof(VAR_53.x11.keycodes));
    FUNC_5(VAR_53.x11.scancodes, -1, sizeof(VAR_53.x11.scancodes));

    if (VAR_53.x11.xkb.available)
    {



        char VAR_56[VAR_50 + 1];
        XkbDescPtr VAR_57 = FUNC_2(VAR_53.x11.display, 0, VAR_52);
        FUNC_3(VAR_53.x11.display, VAR_51, VAR_57);


        for (VAR_54 = VAR_57->min_key_code; VAR_54 <= VAR_57->max_key_code; VAR_54++)
        {
            FUNC_4(VAR_56, VAR_57->names->keys[VAR_54].name, VAR_50);
            VAR_56[VAR_50] = '\0';





            if (FUNC_6(VAR_56, "TLDE") == 0) VAR_55 = VAR_21;
            else if (FUNC_6(VAR_56, "AE01") == 0) VAR_55 = VAR_1;
            else if (FUNC_6(VAR_56, "AE02") == 0) VAR_55 = VAR_2;
            else if (FUNC_6(VAR_56, "AE03") == 0) VAR_55 = VAR_3;
            else if (FUNC_6(VAR_56, "AE04") == 0) VAR_55 = VAR_4;
            else if (FUNC_6(VAR_56, "AE05") == 0) VAR_55 = VAR_5;
            else if (FUNC_6(VAR_56, "AE06") == 0) VAR_55 = VAR_6;
            else if (FUNC_6(VAR_56, "AE07") == 0) VAR_55 = VAR_7;
            else if (FUNC_6(VAR_56, "AE08") == 0) VAR_55 = VAR_8;
            else if (FUNC_6(VAR_56, "AE09") == 0) VAR_55 = VAR_9;
            else if (FUNC_6(VAR_56, "AE10") == 0) VAR_55 = VAR_0;
            else if (FUNC_6(VAR_56, "AE11") == 0) VAR_55 = VAR_29;
            else if (FUNC_6(VAR_56, "AE12") == 0) VAR_55 = VAR_18;
            else if (FUNC_6(VAR_56, "AD01") == 0) VAR_55 = VAR_34;
            else if (FUNC_6(VAR_56, "AD02") == 0) VAR_55 = VAR_44;
            else if (FUNC_6(VAR_56, "AD03") == 0) VAR_55 = VAR_17;
            else if (FUNC_6(VAR_56, "AD04") == 0) VAR_55 = VAR_35;
            else if (FUNC_6(VAR_56, "AD05") == 0) VAR_55 = VAR_40;
            else if (FUNC_6(VAR_56, "AD06") == 0) VAR_55 = VAR_47;
            else if (FUNC_6(VAR_56, "AD07") == 0) VAR_55 = VAR_41;
            else if (FUNC_6(VAR_56, "AD08") == 0) VAR_55 = VAR_23;
            else if (FUNC_6(VAR_56, "AD09") == 0) VAR_55 = VAR_31;
            else if (FUNC_6(VAR_56, "AD10") == 0) VAR_55 = VAR_32;
            else if (FUNC_6(VAR_56, "AD11") == 0) VAR_55 = VAR_27;
            else if (FUNC_6(VAR_56, "AD12") == 0) VAR_55 = VAR_36;
            else if (FUNC_6(VAR_56, "AC01") == 0) VAR_55 = VAR_10;
            else if (FUNC_6(VAR_56, "AC02") == 0) VAR_55 = VAR_37;
            else if (FUNC_6(VAR_56, "AC03") == 0) VAR_55 = VAR_16;
            else if (FUNC_6(VAR_56, "AC04") == 0) VAR_55 = VAR_19;
            else if (FUNC_6(VAR_56, "AC05") == 0) VAR_55 = VAR_20;
            else if (FUNC_6(VAR_56, "AC06") == 0) VAR_55 = VAR_22;
            else if (FUNC_6(VAR_56, "AC07") == 0) VAR_55 = VAR_24;
            else if (FUNC_6(VAR_56, "AC08") == 0) VAR_55 = VAR_25;
            else if (FUNC_6(VAR_56, "AC09") == 0) VAR_55 = VAR_26;
            else if (FUNC_6(VAR_56, "AC10") == 0) VAR_55 = VAR_38;
            else if (FUNC_6(VAR_56, "AC11") == 0) VAR_55 = VAR_11;
            else if (FUNC_6(VAR_56, "AB01") == 0) VAR_55 = VAR_48;
            else if (FUNC_6(VAR_56, "AB02") == 0) VAR_55 = VAR_46;
            else if (FUNC_6(VAR_56, "AB03") == 0) VAR_55 = VAR_14;
            else if (FUNC_6(VAR_56, "AB04") == 0) VAR_55 = VAR_43;
            else if (FUNC_6(VAR_56, "AB05") == 0) VAR_55 = VAR_12;
            else if (FUNC_6(VAR_56, "AB06") == 0) VAR_55 = VAR_30;
            else if (FUNC_6(VAR_56, "AB07") == 0) VAR_55 = VAR_28;
            else if (FUNC_6(VAR_56, "AB08") == 0) VAR_55 = VAR_15;
            else if (FUNC_6(VAR_56, "AB09") == 0) VAR_55 = VAR_33;
            else if (FUNC_6(VAR_56, "AB10") == 0) VAR_55 = VAR_39;
            else if (FUNC_6(VAR_56, "BKSL") == 0) VAR_55 = VAR_13;
            else if (FUNC_6(VAR_56, "LSGT") == 0) VAR_55 = VAR_45;
            else VAR_55 = VAR_42;

            if ((VAR_54 >= 0) && (VAR_54 < 256))
                VAR_53.x11.keycodes[VAR_54] = VAR_55;
        }

        FUNC_1(VAR_57, VAR_51, VAR_49);
        FUNC_0(VAR_57, 0, VAR_49);
    }

    for (VAR_54 = 0; VAR_54 < 256; VAR_54++)
    {


        if (VAR_53.x11.keycodes[VAR_54] < 0)
            VAR_53.x11.keycodes[VAR_54] = FUNC_7(VAR_54);


        if (VAR_53.x11.keycodes[VAR_54] > 0)
            VAR_53.x11.scancodes[VAR_53.x11.keycodes[VAR_54]] = VAR_54;
    }
}
