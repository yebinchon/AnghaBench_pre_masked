
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; scalar_t__ metafile_len; } ;
typedef TYPE_1__ user ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;

int FUNC_5 (user *VAR_5) {
  VAR_0;

  FUNC_1 (VAR_5 != ((void*)0));

  int VAR_6 = 0;

  if (VAR_4 > 1) {
    VAR_6 = VAR_5->id;
  }

  if (VAR_4 > 2) {
    FUNC_2 (VAR_2, "unload_user_metafile (%d)\n", VAR_6);
  }

  if (!VAR_5 || !FUNC_4 (VAR_5)) {
    if (VAR_4 > 1) {
      FUNC_2 (VAR_2, "cannot unload user metafile (%d)\n", VAR_6);
      FUNC_1 (0);
    }
    FUNC_0(VAR_3, 0);
  }

  VAR_1 -= VAR_5->metafile_len;

  FUNC_3 (VAR_5);

  if (VAR_4 > 2) {
    FUNC_2 (VAR_2, "unload_user_metafile (%d) END\n", VAR_6);
  }

  FUNC_0(VAR_3, 1);
}
