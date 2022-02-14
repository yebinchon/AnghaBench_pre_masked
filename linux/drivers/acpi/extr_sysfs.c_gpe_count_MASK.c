
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int count; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void FUNC_0(u32 VAR_5)
{
 VAR_2++;

 if (!VAR_3)
  return;

 if (VAR_5 < VAR_4)
  VAR_3[VAR_5].count++;
 else
  VAR_3[VAR_4 + VAR_0 +
        VAR_1].count++;

 return;
}
