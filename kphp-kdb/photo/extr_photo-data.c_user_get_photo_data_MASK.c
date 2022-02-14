
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int albums_n; scalar_t__* albums_offset; scalar_t__ metafile; int albums_id; int deleted_albums; int photos; } ;
typedef TYPE_1__ user ;
typedef int data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int,int) ;
 int * FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int VAR_2 ;
 int * FUNC_8 (int *,int) ;
 int * FUNC_9 (TYPE_1__*) ;

data *FUNC_10 (user *VAR_3, int VAR_4) {


  data *VAR_5 = FUNC_9 (VAR_3);

  int VAR_6 = FUNC_0 (VAR_5, VAR_4);
  if (VAR_6 == -1) {
    FUNC_4 ("unexisted album %d\n", VAR_4);
    return ((void*)0);
  }

  data **VAR_7 = (data **)FUNC_7 (&VAR_3->photos, VAR_4);
  if (*VAR_7 == ((void*)0)) {
    *VAR_7 = FUNC_6 (sizeof (data));
    FUNC_1 (*VAR_7, &VAR_2);
  }



  if (!FUNC_3 (*VAR_7)) {
    int VAR_8 = VAR_3->albums_n;
    if (FUNC_8 (&VAR_3->deleted_albums, VAR_4) == ((void*)0)) {
      VAR_8 = FUNC_5 (VAR_3->albums_id, VAR_3->albums_n, VAR_4);
    }
    if (VAR_8 != VAR_3->albums_n) {
      FUNC_2 (*VAR_7, VAR_3->metafile + VAR_3->albums_offset[VAR_8], VAR_3->albums_offset[VAR_8 + 1] - VAR_3->albums_offset[VAR_8]);
    } else {
      FUNC_2 (*VAR_7, VAR_0, VAR_1);
    }
  }

  return *VAR_7;
}
