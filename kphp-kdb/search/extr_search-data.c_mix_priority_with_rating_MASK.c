
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* rates; int mask; } ;
typedef TYPE_1__ item_t ;


 long long VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1 (item_t *VAR_4, int VAR_5) {
  long long VAR_6 = ((VAR_3 == 1) ? (5 - VAR_5) : (VAR_5 - 5)) * 100000000;
  int VAR_7 = FUNC_0 (VAR_4->mask, VAR_2);
  if (VAR_7 != -1) {
    VAR_6 += VAR_4->rates[VAR_7];
  }
  if (VAR_6 < VAR_1) { return VAR_1; }
  if (VAR_6 > VAR_0) { return VAR_0; }
  return VAR_6;
}
