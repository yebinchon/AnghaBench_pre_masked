
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_drv_cc {TYPE_1__* core; } ;
struct TYPE_2__ {int bus; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static inline int FUNC_1(struct bcma_drv_cc *VAR_0)
{
 FUNC_0(VAR_0->core->bus, "Parallel flash not supported\n");
 return 0;
}
