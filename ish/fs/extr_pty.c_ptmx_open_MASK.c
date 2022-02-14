
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct fd {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty*) ;
 int VAR_0 ;
 int FUNC_1 (struct tty*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 struct tty* FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct tty*,struct fd*) ;

int FUNC_5(struct fd *VAR_4) {
    int VAR_5 = FUNC_2();
    if (VAR_5 == VAR_0)
        return VAR_2;
    struct tty *VAR_6 = FUNC_3(&VAR_3, VAR_1, VAR_5);
    if (FUNC_0(VAR_6))
        return FUNC_1(VAR_6);
    return FUNC_4(VAR_6, VAR_4);
}
