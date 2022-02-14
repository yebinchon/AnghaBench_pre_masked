
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vaddr; int paddr; int size; int * firmware; } ;
struct falcon {TYPE_1__ firmware; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* free ) (struct falcon*,int ,int ,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct falcon*,int ,int ,int *) ;

void FUNC_2(struct falcon *VAR_0)
{
 if (VAR_0->firmware.firmware) {
  FUNC_0(VAR_0->firmware.firmware);
  VAR_0->firmware.firmware = ((void*)0);
 }

 if (VAR_0->firmware.vaddr) {
  VAR_0->ops->free(VAR_0, VAR_0->firmware.size,
      VAR_0->firmware.paddr,
      VAR_0->firmware.vaddr);
  VAR_0->firmware.vaddr = ((void*)0);
 }
}
