
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; scalar_t__ metafile_len; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

int FUNC_4 (user *VAR_3) {
  FUNC_0 (VAR_3 != ((void*)0));

  int VAR_4 = 0;

  if (VAR_2 > 1) {
    VAR_4 = VAR_3->id;
  }

  if (VAR_2 > 2) {
    FUNC_1 (VAR_1, "unload_user_metafile (%d)\n", VAR_4);
  }

  if (!VAR_3 || !FUNC_3 (VAR_3)) {
    if (VAR_2 > 1) {
      FUNC_1 (VAR_1, "cannot unload user metafile (%d)\n", VAR_4);
      FUNC_0 (0);
    }
    return 0;
  }

  VAR_0 -= VAR_3->metafile_len;

  FUNC_2 (VAR_3);

  if (VAR_2 > 2) {
    FUNC_1 (VAR_1, "unload_user_metafile (%d) END\n", VAR_4);
  }

  return 1;
}
