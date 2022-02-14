
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const metafile_len; scalar_t__ metafile; int new_exceptions; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

int FUNC_2 (user *VAR_0, int VAR_1) {
  int VAR_2;

  if ( (VAR_2 = FUNC_1 (VAR_0->new_exceptions, VAR_1)) ) {
      return VAR_2 > 0;
  }

  int *VAR_3 = (int *)VAR_0->metafile;
  if (VAR_3 == ((void*)0)) {
    return 0;
  }

  const int VAR_4 = (int)sizeof (int);
  FUNC_0 (VAR_0->metafile_len >= VAR_4);
  int VAR_5 = VAR_3[0];

  FUNC_0 (VAR_0->metafile_len >= VAR_4 * (1 + VAR_5));
  FUNC_0 (VAR_0->metafile_len <= VAR_4 * (1 + VAR_5));
  if (VAR_5 <= 5) {
    for (VAR_2 = 1; VAR_2 <= VAR_5; VAR_2++) {
      if (VAR_3[VAR_2] == VAR_1) {
        return 1;
      }
    }
    return 0;
  } else {
    int VAR_6 = 1, VAR_7 = VAR_5 + 1, VAR_8;
    while (VAR_6 + 1 < VAR_7) {
      VAR_8 = (VAR_6 + VAR_7) / 2;
      if (VAR_3[VAR_8] >= VAR_1) {
        VAR_6 = VAR_8;
      } else {
        VAR_7 = VAR_8;
      }
    }
    return VAR_3[VAR_6] == VAR_1;
  }
}
