
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int size; int offset; char* name; } ;


 int VAR_0 ;

 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*,void*,int) ;

char *FUNC_1(int VAR_2, void *VAR_3, struct pt_regs *VAR_4)
{
 if (VAR_2 >= VAR_0 || VAR_2 < 0)
  return ((void*)0);

 if (VAR_1[VAR_2].size != -1)
  FUNC_0(VAR_3, (void *)VAR_4 + VAR_1[VAR_2].offset,
         VAR_1[VAR_2].size);

 switch (VAR_2) {
 case 128:
  __asm__ __volatile__ ("stc vbr, %0" : "=r" (VAR_3));
  break;
 }

 return VAR_1[VAR_2].name;
}
