
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i7core_pvt {int * i7core_pci; TYPE_1__* i7core_dev; } ;
struct TYPE_2__ {int socket; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct i7core_pvt *VAR_1)
{
 if (FUNC_2(VAR_1->i7core_pci))
  FUNC_0(VAR_1->i7core_pci);
 else
  FUNC_1(VAR_0,
    "Couldn't find mem_ctl_info for socket %d\n",
    VAR_1->i7core_dev->socket);
 VAR_1->i7core_pci = ((void*)0);
}
