
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int metafile_len; int * metafile; int sugg; } ;
typedef TYPE_2__ user ;
struct TYPE_9__ {int user_cnt; TYPE_1__* user_index; } ;
struct TYPE_7__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,TYPE_2__*) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int) ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;

void FUNC_4 (user *VAR_8) {
  if (VAR_7 > 2) {
    FUNC_1 (VAR_5, "bind user metafile local id = %d (%p)\n", (int)(VAR_8 - VAR_6), VAR_8);
  }
  int VAR_9 = (int)(VAR_8 - VAR_6);

  if (VAR_8->metafile == ((void*)0)) {
    return;
  }

  FUNC_0 (1 <= VAR_9 && VAR_9 <= VAR_3.user_cnt);

  FUNC_0 (VAR_8->metafile_len >= (int)sizeof (int));
  int VAR_10 = (((int *)VAR_8->metafile)[0] + 1) * sizeof (int),
      VAR_11 = VAR_8->metafile_len - VAR_10;
  FUNC_0 (VAR_11 >= 0);

  if (VAR_11 && !VAR_4) {
    FUNC_0 (VAR_11 % (2 * sizeof (int)) == sizeof (int));

    int *VAR_12 = (int *)(VAR_8->metafile + VAR_10), VAR_13 = VAR_12[0];


    VAR_13 = (VAR_11 / sizeof (int) - 1) / 2;
    VAR_1 += VAR_13;

    if (VAR_13 > VAR_0) {
      VAR_13 = VAR_0;
    }

    int VAR_14;
    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
      FUNC_0 (1 <= VAR_12[2 * VAR_14 + 2] && VAR_12[2 * VAR_14 + 2] < 500000000);
      FUNC_0 (1 <= VAR_12[2 * VAR_14 + 1] && VAR_12[2 * VAR_14 + 1] < 100000);

      FUNC_3 (&VAR_8->sugg, VAR_12[2 * VAR_14 + 2], VAR_12[2 * VAR_14 + 1]);
    }
    FUNC_2 (VAR_8->metafile, VAR_10, VAR_8->metafile_len);
    VAR_8->metafile_len = VAR_10;
    VAR_3.user_index[VAR_9].size = VAR_10;
    VAR_2 -= VAR_11;
  }
}
