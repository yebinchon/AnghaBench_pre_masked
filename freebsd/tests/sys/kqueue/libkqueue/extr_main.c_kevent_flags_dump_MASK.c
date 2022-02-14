
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*) ;

char *
FUNC_5(struct kevent *VAR_10)
{
    char *VAR_11;





    if ((VAR_11 = FUNC_2(1, 1024)) == ((void*)0))
        FUNC_1();

    FUNC_3(VAR_11, 1024, "flags = %d (", VAR_10->flags);
    if (VAR_10->flags & VAR_0) strncat(VAR_11, "EV_ADD"" ", 64);;
    if (VAR_10->flags & VAR_5) FUNC_0(VAR_11, "EV_ENABLE"" ", 64);;
    if (VAR_10->flags & VAR_3) FUNC_0(VAR_11, "EV_DISABLE"" ", 64);;
    if (VAR_10->flags & VAR_2) FUNC_0(VAR_11, "EV_DELETE"" ", 64);;
    if (VAR_10->flags & VAR_8) FUNC_0(VAR_11, "EV_ONESHOT"" ", 64);;
    if (VAR_10->flags & VAR_1) FUNC_0(VAR_11, "EV_CLEAR"" ", 64);;
    if (VAR_10->flags & VAR_6) FUNC_0(VAR_11, "EV_EOF"" ", 64);;
    if (VAR_10->flags & VAR_7) FUNC_0(VAR_11, "EV_ERROR"" ", 64);;






    VAR_11[FUNC_4(VAR_11) - 1] = ')';

    return (VAR_11);
}
