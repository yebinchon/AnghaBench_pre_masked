
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {scalar_t__ fg_group; } ;
typedef scalar_t__ pid_t_ ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty*) ;

__attribute__((used)) static int FUNC_2(struct tty *VAR_2, pid_t_ VAR_3, int VAR_4) {


    if (!FUNC_1(VAR_2))
        return 0;

    if (VAR_2->fg_group == 0 || VAR_3 == VAR_2->fg_group)
        return 0;

    if (!FUNC_0(VAR_4))
        return VAR_1;
    else
        return VAR_0;
}
