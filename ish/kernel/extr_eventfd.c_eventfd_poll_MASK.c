
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ val; } ;
struct fd {int lock; TYPE_1__ eventfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct fd *VAR_3) {
    FUNC_0(&VAR_3->lock);
    int VAR_4 = 0;
    if (VAR_3->eventfd.val > 0)
        VAR_4 |= VAR_0;
    if (VAR_3->eventfd.val < VAR_2 - 1)
        VAR_4 |= VAR_1;
    FUNC_1(&VAR_3->lock);
    return VAR_4;
}
