
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vfdev; int * pf2vf_wq; } ;
struct nitrox_device {TYPE_1__ iov; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nitrox_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nitrox_device *VAR_0)
{

 FUNC_1(VAR_0);

 if (VAR_0->iov.pf2vf_wq)
  FUNC_0(VAR_0->iov.pf2vf_wq);

 FUNC_2(VAR_0->iov.vfdev);
 VAR_0->iov.pf2vf_wq = ((void*)0);
 VAR_0->iov.vfdev = ((void*)0);
}
