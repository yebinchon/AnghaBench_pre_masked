
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {scalar_t__ filter; int fflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 () ;
 char* FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (char*) ;

char *
FUNC_5(struct kevent *VAR_17)
{
    char *VAR_18;





    if ((VAR_18 = FUNC_2(1, 1024)) == ((void*)0))
        FUNC_1();


    if (VAR_17->filter == VAR_0) {
        FUNC_3(VAR_18, 1024, "fflags = %x (", VAR_17->fflags);
        if (VAR_17->fflags & VAR_7) strncat(VAR_18, "NOTE_EXIT"" ", 64);;
        if (VAR_17->fflags & VAR_9) FUNC_0(VAR_18, "NOTE_FORK"" ", 64);;
        if (VAR_17->fflags & VAR_6) FUNC_0(VAR_18, "NOTE_EXEC"" ", 64);;
        if (VAR_17->fflags & VAR_4) FUNC_0(VAR_18, "NOTE_CHILD"" ", 64);;
        if (VAR_17->fflags & VAR_14) FUNC_0(VAR_18, "NOTE_TRACKERR"" ", 64);;
        if (VAR_17->fflags & VAR_13) FUNC_0(VAR_18, "NOTE_TRACK"" ", 64);;
        VAR_18[FUNC_4(VAR_18) - 1] = ')';
    } else if (VAR_17->filter == VAR_1) {
        FUNC_3(VAR_18, 1024, "fflags = %x (", VAR_17->fflags);
        if (VAR_17->fflags & VAR_7) FUNC_0(VAR_18, "NOTE_EXIT"" ", 64);;
        if (VAR_17->fflags & VAR_9) FUNC_0(VAR_18, "NOTE_FORK"" ", 64);;
        if (VAR_17->fflags & VAR_6) FUNC_0(VAR_18, "NOTE_EXEC"" ", 64);;
        VAR_18[FUNC_4(VAR_18) - 1] = ')';
    } else if (VAR_17->filter == VAR_2) {
        FUNC_3(VAR_18, 1024, "fflags = %x (", VAR_17->fflags);
        if (VAR_17->fflags & VAR_5) FUNC_0(VAR_18, "NOTE_DELETE"" ", 64);;
        if (VAR_17->fflags & VAR_16) FUNC_0(VAR_18, "NOTE_WRITE"" ", 64);;
        if (VAR_17->fflags & VAR_8) FUNC_0(VAR_18, "NOTE_EXTEND"" ", 64);;



        if (VAR_17->fflags & VAR_3) FUNC_0(VAR_18, "NOTE_ATTRIB"" ", 64);;
        if (VAR_17->fflags & VAR_10) FUNC_0(VAR_18, "NOTE_LINK"" ", 64);;
        if (VAR_17->fflags & VAR_11) FUNC_0(VAR_18, "NOTE_RENAME"" ", 64);;



        VAR_18[FUNC_4(VAR_18) - 1] = ')';
    } else {
        FUNC_3(VAR_18, 1024, "fflags = %x", VAR_17->fflags);
    }

    return (VAR_18);
}
