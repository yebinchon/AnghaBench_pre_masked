
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
struct TYPE_5__ {int offset; char* name; int size; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;

char *FUNC_2(int VAR_3, void *VAR_4, struct pt_regs *VAR_5)
{
 if (VAR_3 >= VAR_0 || VAR_3 < 0)
  return ((void*)0);

 if (VAR_3 < 32 || VAR_3 >= 64)


  FUNC_0(VAR_4, (void *)VAR_5 + VAR_2[VAR_3].offset,
    VAR_2[VAR_3].size);

 if (VAR_3 >= 32 && VAR_3 < 64) {







  FUNC_1(VAR_4, 0, VAR_2[VAR_3].size);

 }

 return VAR_2[VAR_3].name;
}
