
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extra; int mask; int* rates; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1 (item_t *VAR_1, int VAR_2) {
  if (!VAR_1 || (VAR_1->extra & VAR_0)) { return 0;}
  if (!(VAR_1->mask & (1 << VAR_2))) { return 0;}
  return VAR_1->rates[FUNC_0 (VAR_1->mask,VAR_2)];
}
