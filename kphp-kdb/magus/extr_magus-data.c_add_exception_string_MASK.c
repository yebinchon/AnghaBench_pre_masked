
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int new_exceptions; } ;
typedef TYPE_1__ user ;
struct lev_magus_add_exception_string {int type; int text; int user_id; } ;
struct TYPE_5__ {int fid_names_cnt; int objs_limit; int * fid_names_begins; int fid_id_str; scalar_t__ has_names; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int* FUNC_4 (int *,int ) ;
 int* FUNC_5 (int *,int ) ;
 TYPE_2__* VAR_2 ;
 scalar_t__* VAR_3 ;

int FUNC_6 (struct lev_magus_add_exception_string *VAR_4) {
  user *VAR_5 = FUNC_1 (VAR_4->user_id);

  if (VAR_5 == ((void*)0)) {
    return 0;
  }

  int VAR_6 = VAR_4->type - VAR_0;
  FUNC_0 (0 < VAR_6 && VAR_6 < 256);

  FUNC_0 (VAR_3[VAR_6] && VAR_2[VAR_6].has_names);

  int *VAR_7 = FUNC_5 (&VAR_2[VAR_6].fid_id_str, VAR_4->text);
  if (VAR_7 == ((void*)0) && VAR_1) {
    int *VAR_8 = &VAR_2[VAR_6].fid_names_cnt;
    FUNC_0 (*VAR_8 < VAR_2[VAR_6].objs_limit * 2 + 1024000 * VAR_1 + 1);
    VAR_2[VAR_6].fid_names_begins[*VAR_8] = FUNC_2 (VAR_4->text);
    VAR_7 = FUNC_4 (&VAR_2[VAR_6].fid_id_str, VAR_2[VAR_6].fid_names_begins[*VAR_8]);
    *VAR_7 = *VAR_8;
    *VAR_8 = (*VAR_8) + 1;
  }
  if (VAR_7 == ((void*)0)) {
    return 0;
  }

  FUNC_0 (0 <= *VAR_7 && *VAR_7 < (1 << 23));

  FUNC_3 (&VAR_5->new_exceptions, (VAR_6 << 23) + *VAR_7);

  return 1;
}
