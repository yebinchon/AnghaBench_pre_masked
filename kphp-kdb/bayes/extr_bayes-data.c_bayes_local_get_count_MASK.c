
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ll ;
struct TYPE_3__ {int spam; int ham; } ;
struct TYPE_4__ {scalar_t__ h; TYPE_1__ val; } ;
typedef TYPE_2__ entry_t ;


 int VAR_0 ;

int FUNC_0 (char *VAR_1, ll VAR_2, int VAR_3) {
  int VAR_4 = ((int *)VAR_1)[0];
  entry_t *VAR_5 = (entry_t *)(VAR_1 + sizeof (int));

  if (VAR_4 == 0) {
    return 0;
  }

  int VAR_6 = 0, VAR_7 = VAR_4;
  while (VAR_6 + 1 < VAR_7) {
    int VAR_8 = VAR_6 + ((VAR_7 - VAR_6) >> 1);
    if (VAR_5[VAR_8].h > VAR_2) {
      VAR_7 = VAR_8;
    } else {
      VAR_6 = VAR_8;
    }
  }

  if (VAR_5[VAR_6].h != VAR_2)
    return 0;

  if (VAR_3 == VAR_0) {
    return VAR_5[VAR_6].val.spam;
  } else {
    return VAR_5[VAR_6].val.ham;
  }
}
