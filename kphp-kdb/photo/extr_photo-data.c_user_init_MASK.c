
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int metafile_len; int deleted_albums; int photos; int album_by_photo; int d; int * prev_used; int * next_used; int * aio; int * metafile; scalar_t__ local_id; scalar_t__ id; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

void FUNC_4 (user *VAR_2) {
  VAR_2->id = 0;
  VAR_2->local_id = 0;
  VAR_2->metafile = ((void*)0);
  VAR_2->metafile_len = -1;

  VAR_2->aio = ((void*)0);
  VAR_2->next_used = ((void*)0);
  VAR_2->prev_used = ((void*)0);

  if (!VAR_1) {
    FUNC_0 (&VAR_2->d, &VAR_0);
    FUNC_1 (&VAR_2->album_by_photo);
    FUNC_2 (&VAR_2->photos);
    FUNC_3 (&VAR_2->deleted_albums);
  }
}
