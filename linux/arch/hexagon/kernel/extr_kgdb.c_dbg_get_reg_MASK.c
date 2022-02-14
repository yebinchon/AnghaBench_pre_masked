
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int offset; char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

char *FUNC_0(int VAR_2, void *VAR_3, struct pt_regs *VAR_4)
{
 if (VAR_2 >= VAR_0 || VAR_2 < 0)
  return ((void*)0);

 *((unsigned long *) VAR_3) = *((unsigned long *) ((void *)VAR_4 +
  VAR_1[VAR_2].offset));

 return VAR_1[VAR_2].name;
}
