
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {unsigned long offset; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* seekdir ) (struct fd*,unsigned long) ;} ;


 int FUNC_0 (struct fd*,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct fd *VAR_0, unsigned long VAR_1) {
    VAR_0->offset = VAR_1;
    if (VAR_0->ops->seekdir)
        VAR_0->ops->seekdir(VAR_0, VAR_1);
}
