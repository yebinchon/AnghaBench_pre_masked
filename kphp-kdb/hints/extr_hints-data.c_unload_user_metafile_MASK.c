
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ metafile_len; scalar_t__ aio; int metafile; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

int FUNC_5 (user *VAR_6) {
  FUNC_0 (VAR_6 != ((void*)0));

  int VAR_7 = -1;

  if (VAR_5 > 1) {
    VAR_7 = (int)FUNC_3 (&VAR_3, (int)(VAR_6 - VAR_4));
  }

  if (VAR_5 > 2) {
    FUNC_2 (VAR_2, "unload_user_metafile (%d)\n", VAR_7);
  }

  if (!VAR_6->metafile || VAR_6->aio) {
    if (VAR_5 > 1) {
      FUNC_2 (VAR_2, "cannot unload user metafile (%d)\n", VAR_7);
    }
    return 0;
  }

  FUNC_1 (VAR_6);
  VAR_1--;

  VAR_0 -= VAR_6->metafile_len;

  FUNC_4 (VAR_6);

  if (VAR_5 > 2) {
    FUNC_2 (VAR_2, "unload_user_metafile (%d) END\n", VAR_7);
  }

  return 1;
}
