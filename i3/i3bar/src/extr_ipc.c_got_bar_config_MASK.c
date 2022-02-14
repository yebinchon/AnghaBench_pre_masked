
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int command; int colors; int fontname; int disable_ws; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(char *VAR_3) {
    FUNC_0("Received bar config \"%s\"\n", VAR_3);



    FUNC_2(VAR_0, ((void*)0));

    FUNC_1(&(VAR_2.colors));
    FUNC_5(VAR_3);



    FUNC_7();
    if (!VAR_2.disable_ws)
        FUNC_2(VAR_1, ((void*)0));


    FUNC_4(VAR_2.fontname);


    FUNC_3(&(VAR_2.colors));

    FUNC_6(VAR_2.command);
}
