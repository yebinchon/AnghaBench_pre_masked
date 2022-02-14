
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; scalar_t__ revents; int events; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct pollfd*,int,int) ;

__attribute__((used)) static int
FUNC_3(void)
{
    struct pollfd VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_7 = FUNC_1("/dev/random", VAR_3);
    if (VAR_7 == -1) {
        return 0;
    }
    VAR_6.fd = VAR_7;
    VAR_6.events = VAR_4;
    VAR_6.revents = 0;
    do {
        VAR_8 = FUNC_2(&VAR_6, 1, -1);
    } while (VAR_8 < 0 && (VAR_5 == VAR_1 || VAR_5 == VAR_0));
    if (VAR_8 != 1) {
        (void) FUNC_0(VAR_7);
        VAR_5 = VAR_2;
        return -1;
    }
    return FUNC_0(VAR_7);
}
