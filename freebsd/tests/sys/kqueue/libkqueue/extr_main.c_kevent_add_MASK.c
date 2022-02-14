
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
struct kevent {int dummy; } ;


 int FUNC_0 (struct kevent*,uintptr_t,short,int ,int ,intptr_t,int *) ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,struct kevent*,int,int *,int ,int *) ;
 char* FUNC_4 (struct kevent*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(int VAR_1, struct kevent *VAR_2,
        uintptr_t VAR_3,
        short VAR_4,
        u_short VAR_5,
        u_int VAR_6,
        intptr_t VAR_7,
        void *VAR_8)
{
    char *VAR_9;

    FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, ((void*)0));
    if (FUNC_3(VAR_1, VAR_2, 1, ((void*)0), 0, ((void*)0)) < 0) {
        VAR_9 = FUNC_4(VAR_2);
        FUNC_5("Unable to add the following kevent:\n%s\n",
                VAR_9);
        FUNC_2(VAR_9);
        FUNC_1(1, "kevent(): %s", FUNC_6(VAR_0));
    }
}
