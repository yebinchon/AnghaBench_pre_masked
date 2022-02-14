
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long pos; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (long long,int,int) ;

long long FUNC_1 (long long VAR_4) {
  int VAR_5;
  if (VAR_2 > VAR_3) {
    VAR_5 = FUNC_0 (VAR_4, VAR_2, VAR_0);
    if (VAR_5 < VAR_0) {
      return VAR_1[VAR_5].pos;
    }
    VAR_5 = FUNC_0 (VAR_4, 0, VAR_3);
  } else {
    VAR_5 = FUNC_0 (VAR_4, VAR_2, VAR_3);
  }
  return VAR_5 == VAR_3 ? 0 : VAR_1[VAR_5].pos;
}
