
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int new_exceptions; scalar_t__ metafile_len; int * metafile; } ;
typedef TYPE_2__ user ;
struct lev_mf_clear_exceptions {int user_id; } ;
struct TYPE_11__ {int user_cnt; TYPE_1__* user_index; } ;
struct TYPE_9__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (TYPE_2__*) ;

int FUNC_9 (struct lev_mf_clear_exceptions *VAR_4) {
  user *VAR_5 = FUNC_3 (VAR_4->user_id);
  int VAR_6 = FUNC_6 (VAR_4->user_id);

  if (VAR_5 == ((void*)0)) {
    return 0;
  }

  FUNC_5 (VAR_5, VAR_6, VAR_0 || VAR_3 || !VAR_1);

  if (!FUNC_8 (VAR_5)) {
    return -2;
  }

  FUNC_4 (VAR_5);
  FUNC_0 (VAR_5);

  if (VAR_5->metafile != ((void*)0)) {
    FUNC_1 (1 <= VAR_6 && VAR_6 <= VAR_2.user_cnt);

    FUNC_7 (VAR_5->metafile, VAR_5->metafile_len);
    VAR_5->metafile = ((void*)0);
    VAR_5->metafile_len = 0;
    VAR_2.user_index[VAR_6].size = 0;
  }
  FUNC_2 (&VAR_5->new_exceptions);
  return 1;
}
