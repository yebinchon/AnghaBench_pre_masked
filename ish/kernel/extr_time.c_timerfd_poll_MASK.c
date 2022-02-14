
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expirations; } ;
struct fd {int lock; TYPE_1__ timerfd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fd *VAR_1) {
    int VAR_2 = 0;
    FUNC_0(&VAR_1->lock);
    if (VAR_1->timerfd.expirations != 0)
        VAR_2 |= VAR_0;
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
