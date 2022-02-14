
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ hash_t ;
struct TYPE_2__ {int sp; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0 (hash_t VAR_5, char VAR_6) {
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
    if (VAR_3[VAR_7] == VAR_5) {
      return VAR_7;
    }
  }
  if (VAR_7 == VAR_1) {
    return -1;
  }
  VAR_3[VAR_7] = VAR_5;
  VAR_2[VAR_7] = VAR_6;
  VAR_0[VAR_7].sp = -2;
  return VAR_4++;
}
