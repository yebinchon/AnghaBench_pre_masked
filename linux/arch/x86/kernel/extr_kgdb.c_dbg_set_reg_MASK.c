
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int offset; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (void*,void*,int ) ;

int FUNC_1(int VAR_6, void *VAR_7, struct pt_regs *VAR_8)
{
 if (



     VAR_6 == VAR_3 || VAR_6 == VAR_2)
  return 0;

 if (VAR_5[VAR_6].offset != -1)
  FUNC_0((void *)VAR_8 + VAR_5[VAR_6].offset, VAR_7,
         VAR_5[VAR_6].size);
 return 0;
}
