
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int perms; int gid; int uid; } ;
struct tty {int lock; TYPE_1__ pty; } ;
struct statbuf {int mode; int inode; int rdev; int gid; int uid; } ;
struct TYPE_4__ {struct tty** ttys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_5, struct statbuf *VAR_6) {
    if (VAR_5 == -1) {

        VAR_6->mode = VAR_1 | 0755;
        VAR_6->inode = 1;
    } else {
        FUNC_2(&VAR_4);
        struct tty *VAR_7 = VAR_3.ttys[VAR_5];
        FUNC_0(VAR_7 != ((void*)0));
        FUNC_2(&VAR_7->lock);

        VAR_6->mode = VAR_0 | VAR_7->pty.perms;
        VAR_6->uid = VAR_7->pty.uid;
        VAR_6->gid = VAR_7->pty.gid;
        VAR_6->inode = VAR_5 + 3;
        VAR_6->rdev = FUNC_1(VAR_2, VAR_5);

        FUNC_3(&VAR_7->lock);
        FUNC_3(&VAR_4);
    }
}
