
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ hash_t ;
struct TYPE_2__ {scalar_t__ word; int len; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

int FUNC_0 (hash_t VAR_2) {
  int VAR_3 = -1, VAR_4 = VAR_1, VAR_5;

  while (VAR_4 - VAR_3 > 1) {
    VAR_5 = ((VAR_3 + VAR_4) >> 1);
    if (VAR_0[VAR_5].word <= VAR_2) { VAR_3 = VAR_5; } else { VAR_4 = VAR_5; }
  }

  if (VAR_3 < 0 || VAR_0[VAR_3].word != VAR_2) {
    return 0;
  }

  return VAR_0[VAR_3].len;
}
