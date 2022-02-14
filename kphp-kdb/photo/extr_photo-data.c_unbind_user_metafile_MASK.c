
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metafile_len; int * metafile; int album_by_photo; int d; int photos; } ;
typedef TYPE_1__ user ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_7 (user *VAR_6) {
  FUNC_0 (VAR_6 != ((void*)0));

  if (VAR_5 > 2) {
    FUNC_3 (VAR_2, "unbind_user_metafile\n");
  }
  VAR_4 = 0;
  FUNC_6 (&VAR_6->photos, VAR_1);
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
    FUNC_5 (&VAR_6->photos, VAR_3[VAR_7]);
  }



  FUNC_1 (&VAR_6->d);
  FUNC_4 (&VAR_6->album_by_photo);

  if (VAR_6->metafile != ((void*)0) && VAR_6->metafile != VAR_0) {
    FUNC_2 (VAR_6->metafile, VAR_6->metafile_len);
  }

  VAR_6->metafile = ((void*)0);
  VAR_6->metafile_len = -1;
}
