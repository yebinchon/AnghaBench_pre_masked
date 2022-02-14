
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ Tree ;
struct TYPE_2__ {scalar_t__ node; scalar_t__ printed; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

int FUNC_0(Tree VAR_2) {
 int VAR_3 = 1;

 VAR_0[VAR_1].node = VAR_2;
 while (VAR_0[VAR_3].node != VAR_2)
  VAR_3++;
 if (VAR_3 == VAR_1)
  VAR_0[VAR_1++].printed = 0;
 return VAR_3;
}
