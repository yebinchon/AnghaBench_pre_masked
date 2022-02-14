
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tty*,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct tty *VAR_3) {
    char VAR_4;
    for (;;) {
        int VAR_5 = FUNC_2(VAR_1, &VAR_4, 1);
        if (VAR_5 != 1) {
            FUNC_0("tty read returned %d\n", VAR_5);
            if (VAR_5 < 0)
                FUNC_0("error: %s\n", FUNC_3(VAR_2));
            continue;
        }
        if (VAR_4 == '\x1c') {

            FUNC_1(VAR_0);
        }
        FUNC_4(VAR_3, &VAR_4, 1, 0);
    }
}
