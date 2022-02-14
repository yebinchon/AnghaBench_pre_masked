
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ object_old_n; int * object_type_ids; int object_chg; int * object_indexes; int * object_data; scalar_t__ aio; scalar_t__ metafile_len; int * metafile; int * prev_used; int * next_used; int flags; int chg_list_global; int chg_list_st; int chg_list_cur; int * object_ratings; int * object_names; scalar_t__ object_size; int chg_list_en; int object_table; int pref_table; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6 (user *VAR_1) {



  FUNC_5 (&VAR_1->object_table);
  FUNC_3 (&VAR_1->chg_list_st, &VAR_1->chg_list_en);
  VAR_1->object_size = 0;



  VAR_1->object_ratings = ((void*)0);
  VAR_1->chg_list_cur = VAR_1->chg_list_st;
  VAR_1->chg_list_global = VAR_0;
  VAR_1->flags = FUNC_1(0, -1);
  VAR_1->flags = FUNC_2(VAR_1->flags, 1);

  VAR_1->next_used = ((void*)0);
  VAR_1->prev_used = ((void*)0);

  VAR_1->metafile = ((void*)0);
  VAR_1->metafile_len = 0;
  VAR_1->aio = 0;





  FUNC_0 (VAR_1->object_chg);

  VAR_1->object_type_ids = ((void*)0);
  VAR_1->object_old_n = 0;
}
