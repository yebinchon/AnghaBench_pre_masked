
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long base_addr; unsigned long num_bytes; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static unsigned long FUNC_0(void)
{
 int VAR_4;
 unsigned long VAR_5 = VAR_2 + (VAR_1 >> VAR_0);
 unsigned long VAR_6, VAR_7;

 VAR_7 = (VAR_3[0].base_addr + VAR_3[0].num_bytes) >> VAR_0;
 for (VAR_4 = 1; VAR_3[VAR_4].num_bytes != 0; VAR_4++) {
  VAR_6 = VAR_3[VAR_4].base_addr >> VAR_0;

  if (VAR_6 >= VAR_5) {
   if (VAR_7 < VAR_5)
    VAR_5 = VAR_7;
   break;
  }

  VAR_7 = (VAR_3[VAR_4].base_addr + VAR_3[VAR_4].num_bytes) >> VAR_0;
 }

 return VAR_5;
}
