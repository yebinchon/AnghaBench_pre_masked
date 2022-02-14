
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize_ {int dummy; } ;
struct tty {scalar_t__ fg_group; struct winsize_ winsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;

void FUNC_1(struct tty *VAR_2, struct winsize_ VAR_3) {
    VAR_2->winsize = VAR_3;
    if (VAR_2->fg_group != 0)
        FUNC_0(VAR_2->fg_group, VAR_1, VAR_0);
}
