
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(int VAR_4)
{
    int VAR_5;
    char VAR_6 = VAR_4;

    FUNC_3(10000);

    VAR_5 = FUNC_4(VAR_3, &VAR_6, 1);

    switch (VAR_5) {
    case 1:
 return (0);

    default:
 FUNC_0("warning: write() on stdout returned %d", VAR_5);

    case -1:
 if ((VAR_5 = FUNC_2(0, VAR_0, 0)) == -1)
     FUNC_1(2, "Can't get file mode flags on stdin, %m");

 if (FUNC_2(0, VAR_1, VAR_5 & ~VAR_2) == -1)
     FUNC_1(2, "Can't set file mode flags on stdin: %m");

 return (-1);
    }
}
