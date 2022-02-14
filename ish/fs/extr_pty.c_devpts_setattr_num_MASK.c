
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int perms; int gid; int uid; } ;
struct tty {int lock; TYPE_1__ pty; } ;
struct attr {int type; int mode; int gid; int uid; } ;
struct TYPE_4__ {struct tty** ttys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;


 int VAR_2 ;

 int FUNC_1 (int *) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_5, struct attr VAR_6) {
    if (VAR_5 == -1)
        return VAR_1;
    if (VAR_6.type == VAR_2)
        return VAR_0;

    FUNC_1(&VAR_4);
    struct tty *VAR_7 = VAR_3.ttys[VAR_5];
    FUNC_0(VAR_7 != ((void*)0));
    FUNC_1(&VAR_7->lock);

    switch (VAR_6.type) {
        case 128:
            VAR_7->pty.uid = VAR_6.uid;
            break;
        case 130:
            VAR_7->pty.gid = VAR_6.gid;
            break;
        case 129:
            VAR_7->pty.perms = VAR_6.mode;
            break;
    }

    FUNC_2(&VAR_7->lock);
    FUNC_2(&VAR_4);
    return 0;
}
