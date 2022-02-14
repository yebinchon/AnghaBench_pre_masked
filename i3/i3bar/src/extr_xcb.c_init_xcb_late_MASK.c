
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bar_height; scalar_t__ hide_on_modifier; scalar_t__ separator_symbol; int tray_padding; } ;
struct TYPE_5__ {scalar_t__ height; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ) ;

void FUNC_7(char *VAR_8) {
    if (VAR_8 == ((void*)0))
        VAR_8 = "-misc-fixed-medium-r-normal--13-120-75-75-C-70-iso10646-1";


    VAR_3 = FUNC_1(VAR_8, 1);
    FUNC_5(&VAR_3);
    FUNC_0("Calculated font-height: %d\n", VAR_3.height);





    if (VAR_2.bar_height <= 0)
        VAR_1 = VAR_3.height + 2 * FUNC_2(VAR_6);
    else
        VAR_1 = VAR_2.bar_height;
    VAR_4 = VAR_1 - 2 * FUNC_2(VAR_2.tray_padding);

    if (VAR_2.separator_symbol)
        VAR_5 = FUNC_3(VAR_2.separator_symbol);

    FUNC_6(VAR_7);

    if (VAR_2.hide_on_modifier == VAR_0)
        FUNC_4();
}
