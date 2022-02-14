
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ) ;

int
FUNC_9(void)
{
    int VAR_5, VAR_6, VAR_7;

    FUNC_0(VAR_2);

    if (FUNC_6(VAR_3) == -1)
 FUNC_4(1, "mkstemp");
    FUNC_8(VAR_3);
    VAR_5 = FUNC_3(VAR_3);

    if (FUNC_6(VAR_4) == -1)
        FUNC_4(1, "mkstemp");
    FUNC_8(VAR_4);
    VAR_6 = FUNC_3(VAR_4);

    VAR_7 = FUNC_7(VAR_0, VAR_1, 0);
    if (VAR_7 < 0)
        FUNC_4(1, "can't create socket");

    FUNC_2(VAR_7, VAR_3);
    FUNC_1(VAR_5);
    FUNC_2(VAR_7, VAR_4);
    FUNC_1(VAR_6);

    FUNC_5 (0);
}
