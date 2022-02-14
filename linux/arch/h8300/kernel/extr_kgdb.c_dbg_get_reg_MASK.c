
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {char* name; int size; int offset; } ;


 int VAR_0 ;


 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;

char *FUNC_2(int VAR_2, void *VAR_3, struct pt_regs *VAR_4)
{
 if (VAR_2 >= VAR_0 || VAR_2 < 0)
  return ((void*)0);

 switch (VAR_2) {
 case 129:



  *(u32 *)VAR_3 = *(u16 *)((void *)VAR_4 +
           VAR_1[VAR_2].offset);
  break;
 default:
  if (VAR_1[VAR_2].offset >= 0)
   FUNC_0(VAR_3, (void *)VAR_4 + VAR_1[VAR_2].offset,
          VAR_1[VAR_2].size);
  else
   FUNC_1(VAR_3, 0, VAR_1[VAR_2].size);
  break;
 }
 return VAR_1[VAR_2].name;
}
