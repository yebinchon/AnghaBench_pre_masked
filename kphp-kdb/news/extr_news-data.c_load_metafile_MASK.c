
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; scalar_t__ aio; } ;
struct TYPE_3__ {int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (long long) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int ,scalar_t__,long long) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_8 (int VAR_14, int VAR_15) {
  FUNC_1 (0 <= VAR_14 && VAR_14 < VAR_6);

  if (VAR_15 < 0 && VAR_4[VAR_14].data && VAR_4[VAR_14].aio) {
    if (VAR_13 >= 0) {
      FUNC_2 (VAR_12, "forced re-loading of pending aio query for large metafile %d without aio\n", VAR_14);
    }



    VAR_4[VAR_14].data = 0;
    VAR_4[VAR_14].aio = 0;
  }

  if (VAR_4[VAR_14].data) {
    if (VAR_4[VAR_14].aio) {
      FUNC_4 (VAR_14);
      VAR_8 ++;
      if (!VAR_4[VAR_14].aio) {
        return 1;
      } else {
        return -2;
      }
    }
    if (VAR_15 > 0) {
      VAR_10 ++;
    }
    return 1;
  }

  FUNC_1 (!VAR_4[VAR_14].aio);

  long long VAR_16 = sizeof (long long) * (VAR_5[VAR_14 + 1].offset - VAR_5[VAR_14].offset);
  while (VAR_1 + VAR_16 > VAR_7 && FUNC_3 ());
  while (!(VAR_4[VAR_14].data = FUNC_6 (VAR_16))) {
    FUNC_1 (FUNC_3 ());
  }

  if (VAR_15 <= 0) {

    FUNC_5 (VAR_2, VAR_3 + sizeof (long long) * (long long)VAR_5[VAR_14].offset, VAR_0);
    FUNC_1 ((long long)(FUNC_7 (VAR_2, VAR_4[VAR_14].data, VAR_16)) == VAR_16);
    FUNC_0 (VAR_14);
    VAR_11 ++;
    return 1;
  } else {
    FUNC_4 (VAR_14);
    VAR_9 ++;
    return -2;
  }
  return 0;
}
