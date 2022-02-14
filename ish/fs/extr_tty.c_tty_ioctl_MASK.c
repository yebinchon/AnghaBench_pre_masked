
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty {int lock; TYPE_3__* driver; int bufsize; int fg_group; int session; int consumed; scalar_t__ hung_up; } ;
struct fd {struct tty* tty; } ;
typedef int pid_t_ ;
typedef int dword_t ;
struct TYPE_8__ {TYPE_1__* group; } ;
struct TYPE_7__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* ioctl ) (struct tty*,int,void*) ;} ;
struct TYPE_5__ {int sid; } ;



 int FUNC_0 (char*,int ) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct tty*,int,void*) ;
 int FUNC_4 (struct tty*,int ) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int,void*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct fd *VAR_5, int VAR_6, void *VAR_7) {
    int VAR_8 = 0;
    struct tty *VAR_9 = VAR_5->tty;
    FUNC_1(&VAR_9->lock);
    if (VAR_9->hung_up) {
        FUNC_7(&VAR_9->lock);
        if (VAR_6 == 128)
            return VAR_2;
        return VAR_1;
    }

    switch (VAR_6) {
        case 134:

            switch ((dword_t) VAR_7) {
                case 133:
                case 132:
                    VAR_9->bufsize = 0;
                    FUNC_2(&VAR_9->consumed);
                    break;
                case 131:
                    break;
                default:
                    VAR_8 = VAR_0;
                    break;
            };
            break;

        case 129:
            VAR_8 = FUNC_4(VAR_9, (dword_t) VAR_7);
            break;

        case 130:
            if (!FUNC_5(VAR_9) || VAR_9->fg_group == 0) {
                VAR_8 = VAR_2;
                break;
            }
            FUNC_0("tty group = %d\n", VAR_9->fg_group);
            *(dword_t *) VAR_7 = VAR_9->fg_group; break;
        case 128:

            FUNC_7(&VAR_9->lock);
            FUNC_1(&VAR_4);
            FUNC_1(&VAR_9->lock);
            pid_t_ VAR_10 = VAR_3->group->sid;
            FUNC_7(&VAR_4);
            if (!FUNC_5(VAR_9) || VAR_10 != VAR_9->session) {
                VAR_8 = VAR_2;
                break;
            }

            VAR_9->fg_group = *(dword_t *) VAR_7;
            FUNC_0("tty group set to = %d\n", VAR_9->fg_group);
            break;

        case 135:
            *(dword_t *) VAR_7 = VAR_9->bufsize;
            break;

        default:
            VAR_8 = FUNC_6(VAR_9, VAR_6, VAR_7);
            if (VAR_8 == VAR_2 && VAR_9->driver->ops->ioctl)
                VAR_8 = VAR_9->driver->ops->ioctl(VAR_9, VAR_6, VAR_7);
    }

    FUNC_7(&VAR_9->lock);
    return VAR_8;
}
