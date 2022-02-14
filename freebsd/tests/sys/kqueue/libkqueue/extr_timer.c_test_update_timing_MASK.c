
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int data; int fflags; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,long,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,long) ;
 scalar_t__ FUNC_4 (int ,struct kevent*,int,int *,int ,int *) ;
 int FUNC_5 (struct kevent*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 long FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char const*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_14(void)
{


    const char *VAR_9 = "kevent(EVFILT_TIMER (UPDATE TIMING), EV_ADD | EV_ONESHOT)";
    struct kevent VAR_10;
    int VAR_11;
    int VAR_12;
    long VAR_13;
    long VAR_14;
    long VAR_15;

    FUNC_10(VAR_9);

    FUNC_11();






    for (VAR_12 = 500, VAR_11 = 1;
         VAR_12 < 1500;
         ++VAR_12, ++VAR_11) {


        FUNC_0(&VAR_10, VAR_8, VAR_0, VAR_1 | VAR_3,
            VAR_6, FUNC_1(1), ((void*)0));
        if (FUNC_4(VAR_7, &VAR_10, 1, ((void*)0), 0, ((void*)0)) < 0)
            FUNC_2(1, "%s", VAR_9);




        FUNC_13(VAR_12);


        VAR_14 = FUNC_8();
        if (FUNC_4(VAR_7, &VAR_10, 1, ((void*)0), 0, ((void*)0)) < 0)
            FUNC_2(1, "%s", VAR_9);


        VAR_10.flags |= VAR_2;
        VAR_10.fflags &= ~VAR_6;
        VAR_10.data = 1;
        FUNC_5(&VAR_10, FUNC_6(VAR_7));
        VAR_15 = FUNC_8();
        VAR_13 = VAR_15 - VAR_14;





        if (VAR_13 < FUNC_1(1))
            FUNC_3(1, "early timer expiration: %ld us", VAR_13);





        FUNC_7(2);
        FUNC_12();
    }

    FUNC_9();
}
