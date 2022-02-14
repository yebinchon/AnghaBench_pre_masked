
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_cdma {int dummy; } ;
struct host1x {TYPE_1__* cdma_op; } ;
struct TYPE_2__ {int (* timeout_destroy ) (struct host1x_cdma*) ;} ;


 int FUNC_0 (struct host1x_cdma*) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0,
        struct host1x_cdma *VAR_1)
{
 VAR_0->cdma_op->timeout_destroy(VAR_1);
}
