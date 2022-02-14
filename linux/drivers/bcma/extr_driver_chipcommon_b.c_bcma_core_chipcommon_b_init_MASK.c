
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcma_drv_cc_b {int setup_done; int mii; TYPE_1__* core; } ;
struct TYPE_2__ {int * addr_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct bcma_drv_cc_b *VAR_2)
{
 if (VAR_2->setup_done)
  return 0;

 VAR_2->setup_done = 1;
 VAR_2->mii = FUNC_0(VAR_2->core->addr_s[1], VAR_0);
 if (!VAR_2->mii)
  return -VAR_1;

 return 0;
}
