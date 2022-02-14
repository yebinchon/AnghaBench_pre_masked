
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* setflags ) (struct fd*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fd*,int) ;

int FUNC_1(struct fd *VAR_1, int VAR_2) {
    if (VAR_1->ops->setflags)
        return VAR_1->ops->setflags(VAR_1, VAR_2);
    VAR_1->flags = (VAR_1->flags & ~VAR_0) | (VAR_2 & VAR_0);
    return 0;
}
