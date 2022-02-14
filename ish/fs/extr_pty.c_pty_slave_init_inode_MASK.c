
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int perms; int gid; int uid; } ;
struct tty {TYPE_1__ pty; } ;
struct TYPE_4__ {int egid; int euid; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tty *VAR_1) {
    VAR_1->pty.uid = VAR_0->euid;

    VAR_1->pty.gid = VAR_0->egid;
    VAR_1->pty.perms = 0620;
}
