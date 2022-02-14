
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long num; unsigned long addr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_4;
 int VAR_5;


 if (VAR_3 == 0)
  return 0;

 VAR_4 = FUNC_1("Physical") % VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4 >= VAR_2[VAR_5].num) {
   VAR_4 -= VAR_2[VAR_5].num;
   continue;
  }
  return VAR_2[VAR_5].addr + VAR_4 * VAR_0;
 }

 if (VAR_5 == VAR_1)
  FUNC_0("slots_fetch_random() failed!?\n");
 return 0;
}
