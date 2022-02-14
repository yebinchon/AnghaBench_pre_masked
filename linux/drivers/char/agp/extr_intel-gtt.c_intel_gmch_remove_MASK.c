
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * driver; scalar_t__ bridge_dev; scalar_t__ pcidev; scalar_t__ scratch_page; scalar_t__ refcount; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(void)
{
 if (--VAR_0.refcount)
  return;

 if (VAR_0.scratch_page)
  FUNC_0();
 if (VAR_0.pcidev)
  FUNC_1(VAR_0.pcidev);
 if (VAR_0.bridge_dev)
  FUNC_1(VAR_0.bridge_dev);
 VAR_0.driver = ((void*)0);
}
