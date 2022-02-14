
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * vaddr; } ;
struct falcon {TYPE_2__ firmware; TYPE_1__* ops; } ;
struct TYPE_3__ {int free; int alloc; } ;


 int VAR_0 ;

int FUNC_0(struct falcon *VAR_1)
{

 if (!VAR_1->ops || !VAR_1->ops->alloc || !VAR_1->ops->free)
  return -VAR_0;

 VAR_1->firmware.vaddr = ((void*)0);

 return 0;
}
