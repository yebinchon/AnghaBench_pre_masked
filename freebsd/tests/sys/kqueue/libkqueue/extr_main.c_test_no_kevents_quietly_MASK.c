
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeo ;
struct timespec {int dummy; } ;
struct kevent {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int ,struct kevent*,int,struct timespec*) ;
 char* FUNC_3 (struct kevent*) ;
 int VAR_0 ;
 int FUNC_4 (struct timespec*,int ,int) ;
 int FUNC_5 (char*) ;

void
FUNC_6(void)
{
    int VAR_1;
    struct timespec VAR_2;
    struct kevent VAR_3;
    char *VAR_4;

    FUNC_4(&VAR_2, 0, sizeof(VAR_2));
    VAR_1 = FUNC_2(VAR_0, ((void*)0), 0, &VAR_3, 1, &VAR_2);
    if (VAR_1 != 0) {
        FUNC_5("\nUnexpected event:");
        VAR_4 = FUNC_3(&VAR_3);
        FUNC_5(VAR_4);
        FUNC_1(VAR_4);
        FUNC_0(1, "%d event(s) pending, but none expected:", VAR_1);
    }
}
