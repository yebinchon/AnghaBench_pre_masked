
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {int size; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_1__* VAR_2 ;
 int FUNC_0 (void*,void*,int ) ;

int FUNC_1(int VAR_3, void *VAR_4, struct pt_regs *VAR_5)
{
 if (VAR_3 >= VAR_0 || VAR_3 < 0)
  return -VAR_1;

 switch (VAR_3) {
 case 129:



  *(u16 *)((void *)VAR_5 +
    VAR_2[VAR_3].offset) = *(u32 *)VAR_4;
  break;
 default:
  FUNC_0((void *)VAR_5 + VAR_2[VAR_3].offset, VAR_4,
         VAR_2[VAR_3].size);
 }
 return 0;
}
