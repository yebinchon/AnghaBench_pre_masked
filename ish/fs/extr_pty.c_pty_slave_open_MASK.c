
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ locked; int * other; } ;
struct tty {TYPE_1__ pty; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty *VAR_1) {
    if (VAR_1->pty.other == ((void*)0))
        return VAR_0;
    if (VAR_1->pty.locked)
        return VAR_0;
    return 0;
}
