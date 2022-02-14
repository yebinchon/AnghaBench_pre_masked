
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metafile_len; int * metafile; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2 (user *VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return;
  }

  if (VAR_1 > 2) {
    FUNC_0 (VAR_0, "unbind_user_metafile\n");
  }

  if (VAR_2->metafile != ((void*)0)) {
    FUNC_1 (VAR_2->metafile, VAR_2->metafile_len);
  }

  VAR_2->metafile = ((void*)0);
  VAR_2->metafile_len = -1;
}
