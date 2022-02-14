
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metafile_len; int * metafile; } ;
typedef TYPE_1__ user ;


 int * VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2 (user *VAR_3) {
  if (VAR_3 == ((void*)0)) {
    return;
  }

  if (VAR_2 > 2) {
    FUNC_0 (VAR_1, "unbind_user_metafile\n");
  }

  if (VAR_3->metafile != ((void*)0) && VAR_3->metafile != VAR_0) {
    FUNC_1 (VAR_3->metafile, VAR_3->metafile_len);
  }

  VAR_3->metafile = ((void*)0);
  VAR_3->metafile_len = -1;
}
