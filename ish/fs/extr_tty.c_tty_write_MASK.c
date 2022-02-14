
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oflags; } ;
struct tty {TYPE_3__* driver; int lock; TYPE_1__ termios; scalar_t__ hung_up; } ;
struct fd {int flags; struct tty* tty; } ;
typedef int ssize_t ;
typedef int dword_t ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* write ) (struct tty*,void const*,size_t,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (struct tty*,void const*,size_t,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct fd *VAR_6, const void *VAR_7, size_t VAR_8) {
    struct tty *VAR_9 = VAR_6->tty;
    FUNC_1(&VAR_9->lock);
    if (VAR_9->hung_up) {
        FUNC_4(&VAR_9->lock);
        return VAR_5;
    }

    bool VAR_10 = !(VAR_6->flags & VAR_4);
    dword_t VAR_11 = VAR_9->termios.oflags;



    FUNC_4(&VAR_9->lock);

    int VAR_12 = 0;
    char *VAR_13 = ((void*)0);
    size_t VAR_14 = VAR_8;
    if (VAR_11 & VAR_3) {
        VAR_13 = FUNC_2(VAR_8 * 2);
        VAR_14 = 0;
        const char *VAR_15 = VAR_7;
        for (size_t VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
            char VAR_17 = VAR_15[VAR_16];
            if (VAR_17 == '\r' && VAR_11 & VAR_2)
                continue;
            else if (VAR_17 == '\r' && VAR_11 & VAR_0)
                VAR_17 = '\n';
            else if (VAR_17 == '\n' && VAR_11 & VAR_1)
                VAR_13[VAR_14++] = '\r';
            VAR_13[VAR_14++] = VAR_17;
        }
        VAR_7 = VAR_13;
    }
    VAR_12 = VAR_9->driver->ops->write(VAR_9, VAR_7, VAR_14, VAR_10);
    if (VAR_13)
        FUNC_0(VAR_13);
    if (VAR_12 < 0)
        return VAR_12;
    return VAR_8;
}
