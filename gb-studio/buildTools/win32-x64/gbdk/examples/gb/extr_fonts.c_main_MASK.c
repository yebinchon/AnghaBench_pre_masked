
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int font_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(void)
{
    font_t VAR_7, VAR_8, VAR_9;
    int VAR_10;


    FUNC_1();


    VAR_7 = FUNC_2(VAR_4);
    VAR_8 = FUNC_2(VAR_5);


    FUNC_0(VAR_3, VAR_0, VAR_2);

    VAR_9 = FUNC_2(VAR_6);


    FUNC_5(FUNC_4() | VAR_1);




    FUNC_3(VAR_7);
    FUNC_6("Font demo.\n\n");

    FUNC_6("IBM Font #!?123\n");


    FUNC_3(VAR_8);
    for (VAR_10=1; VAR_10!=5; VAR_10++) {
 FUNC_6("In italics, line %u\n", VAR_10);
    }


    FUNC_3(VAR_9);
    FUNC_6("Minimal 36 tile font\n");


    FUNC_3(VAR_7);
    FUNC_6("\nDone!");
}
