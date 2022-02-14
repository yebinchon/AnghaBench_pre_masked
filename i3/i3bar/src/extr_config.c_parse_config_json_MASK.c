
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yajl_status ;
typedef int yajl_handle ;
struct TYPE_2__ {int tray_outputs; int bindings; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned char const*,int ) ;




void FUNC_7(char *VAR_3) {
    yajl_handle VAR_4;
    yajl_status VAR_5;
    VAR_4 = FUNC_4(&VAR_2, ((void*)0), ((void*)0));

    FUNC_1(&(VAR_1.bindings));
    FUNC_1(&(VAR_1.tray_outputs));

    VAR_5 = FUNC_6(VAR_4, (const unsigned char *)VAR_3, FUNC_3(VAR_3));


    switch (VAR_5) {
        case 128:
            break;
        case 130:
        case 129:
            FUNC_0("Could not parse config reply!\n");
            FUNC_2(VAR_0);
            break;
    }

    FUNC_5(VAR_4);
}
