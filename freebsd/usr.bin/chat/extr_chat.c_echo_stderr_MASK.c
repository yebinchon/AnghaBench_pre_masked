
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;

void
FUNC_3(int VAR_1)
{
    static int VAR_2;
    char *VAR_3;

    switch (VAR_1) {
    case '\r':
 break;
    case -1:
 if (VAR_2 == 0)
     break;

    case '\n':
 FUNC_2(VAR_0, "\n", 1);
 VAR_2 = 0;
 break;
    default:
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_0, VAR_3, FUNC_1(VAR_3));
 VAR_2 = 1;
 break;
    }
}
