
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* getflags ) (struct fd*) ;} ;


 int FUNC_0 (struct fd*) ;

int FUNC_1(struct fd *VAR_0) {
    if (VAR_0->ops->getflags)
        return VAR_0->ops->getflags(VAR_0);
    return VAR_0->flags;
}
