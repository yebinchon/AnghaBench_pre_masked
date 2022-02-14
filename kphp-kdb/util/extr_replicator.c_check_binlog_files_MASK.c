
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_12 ;

int FUNC_3 (void) {
  int VAR_13 = 0, VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
    if (FUNC_0 (&VAR_0[VAR_14]) < 0) {
      VAR_0[VAR_14].flags |= VAR_1;
      VAR_13++;
    } else if (!(VAR_0[VAR_14].flags & VAR_3) && VAR_6) {
      VAR_0[VAR_14].flags |= VAR_1 | VAR_4;
      VAR_13++;
    } else if (!(VAR_0[VAR_14].flags & VAR_3) && FUNC_2 (&VAR_0[VAR_14]) < 0) {
      VAR_0[VAR_14].flags |= VAR_1 | VAR_2;
      VAR_13++;
    } else if (!(VAR_0[VAR_14].flags & VAR_3) && FUNC_1 (&VAR_0[VAR_14]) < 0) {
      VAR_0[VAR_14].flags |= VAR_1 | VAR_5;
      VAR_13++;
    }
    if (VAR_0[VAR_14].flags & VAR_3) {
      VAR_9++;
      if (VAR_0[VAR_14].flags & VAR_1) {
        VAR_7++;
      }
    } else if (!VAR_12) {
      VAR_10++;
      if (VAR_0[VAR_14].flags & VAR_1) {
        VAR_8++;
      }
    }
  }
  return VAR_11 - VAR_13;
}
