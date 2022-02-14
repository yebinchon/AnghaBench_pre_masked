
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* len; size_t* data; } ;


 size_t* VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_0(void)
{
 int VAR_2, VAR_3;

 VAR_2 = 0;
 while (VAR_1[VAR_2].len) {
  VAR_3 = 0;
  while (VAR_3 < (*VAR_1[VAR_2].len)) {
   VAR_1[VAR_2].data[VAR_3] =
    VAR_0[VAR_1[VAR_2].data[VAR_3]];
   VAR_3++;
  }
  VAR_2++;
 }
}
