
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread_data {int ppp; int hist; int edit; } ;
struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
struct TYPE_3__ {char* member_1; int member_0; } ;
typedef TYPE_1__ HistEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,TYPE_1__*,char const*,...) ;
 int FUNC_3 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static void *
FUNC_6(void *VAR_6)
{
    struct sigaction VAR_7, VAR_8;
    struct thread_data *VAR_9;
    const char *VAR_10;
    int VAR_11;

    HistEvent VAR_12 = { 0, "" };


    VAR_7.sa_handler = VAR_1;
    FUNC_4(&VAR_7.sa_mask);
    VAR_7.sa_flags = VAR_3;
    FUNC_3(VAR_4, &VAR_7, &VAR_8);

    VAR_9 = (struct thread_data *)VAR_6;
    VAR_5 = 1;

    while ((VAR_10 = FUNC_1(VAR_9->edit, &VAR_11, VAR_9->ppp))) {
        if (VAR_11 > 1)



            FUNC_2(VAR_9->hist, &VAR_12, VAR_0, VAR_10);

        FUNC_5(VAR_9->ppp, VAR_10, VAR_11);
        if (FUNC_0(VAR_9->ppp, VAR_2) != 0)
            break;
    }

    return ((void*)0);
}
