
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_driver {int limit; int ttys; } ;
struct tty {int dummy; } ;
struct TYPE_2__ {int limit; int ttys; } ;


 struct tty* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tty*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct tty*) ;
 struct tty* FUNC_4 (struct tty_driver*,int ,int) ;

struct tty *FUNC_5(struct tty_driver *VAR_4) {
    int VAR_5 = FUNC_2();
    if (VAR_5 == VAR_0)
        return FUNC_0(VAR_2);

    VAR_4->ttys = VAR_3.ttys;
    VAR_4->limit = VAR_3.limit;
    struct tty *VAR_6 = FUNC_4(VAR_4, VAR_1, VAR_5);
    if (FUNC_1(VAR_6))
        return VAR_6;
    FUNC_3(VAR_6);
    return VAR_6;
}
