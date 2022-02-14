
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ ev_io ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,unsigned char*,int) ;
 unsigned char* FUNC_4 (int) ;
 unsigned char* FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static unsigned char *FUNC_7(ev_io *VAR_4, int *VAR_5) {
    int VAR_6 = VAR_4->fd;
    int VAR_7 = 0;
    int VAR_8 = 0;
    int VAR_9 = VAR_2;
    unsigned char *VAR_10 = FUNC_4(VAR_9 + 1);
    VAR_10[0] = '\0';
    while (1) {
        VAR_7 = FUNC_3(VAR_6, VAR_10 + VAR_8, VAR_9 - VAR_8);
        if (VAR_7 == -1) {
            if (VAR_3 == VAR_0) {

                break;
            }
            FUNC_0("read() failed!: %s\n", FUNC_6(VAR_3));
            FUNC_1(VAR_10);
            FUNC_2(VAR_1);
        }
        if (VAR_7 == 0) {
            FUNC_0("stdin: received EOF\n");
            FUNC_1(VAR_10);
            *VAR_5 = -1;
            return ((void*)0);
        }
        VAR_8 += VAR_7;

        if (VAR_8 == VAR_9) {
            VAR_9 += VAR_2;
            VAR_10 = FUNC_5(VAR_10, VAR_9);
        }
    }
    if (*VAR_10 == '\0') {
        FUNC_1(VAR_10);
        VAR_8 = -1;
    }
    *VAR_5 = VAR_8;
    return VAR_10;
}
