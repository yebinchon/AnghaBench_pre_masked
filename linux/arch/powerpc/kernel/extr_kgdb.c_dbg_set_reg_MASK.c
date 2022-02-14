
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {void* evr; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;
struct TYPE_5__ {int offset; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (void*,void*,int ) ;

int FUNC_1(int VAR_4, void *VAR_5, struct pt_regs *VAR_6)
{
 if (VAR_4 >= VAR_0 || VAR_4 < 0)
  return -VAR_1;

 if (VAR_4 < 32 || VAR_4 >= 64)


  FUNC_0((void *)VAR_6 + VAR_3[VAR_4].offset, VAR_5,
    VAR_3[VAR_4].size);

 if (VAR_4 >= 32 && VAR_4 < 64) {






  return 0;

 }

 return 0;
}
