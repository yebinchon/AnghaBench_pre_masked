
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int id; } ;
typedef TYPE_1__ user ;
struct TYPE_9__ {scalar_t__ v_fid; } ;
typedef TYPE_2__ field ;
typedef int data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (int *,int,TYPE_2__*,int,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

int FUNC_5 (user *VAR_3, int VAR_4, field *VAR_5, int VAR_6) {
  FUNC_1 ("user_change_album %d: album_id = %d, field_changes_n = %d\n", VAR_3->id, VAR_4, VAR_6);

  if (VAR_2) {
    return 1;
  }

  FUNC_0 (FUNC_4 (VAR_3));

  data *VAR_7 = FUNC_3 (VAR_3);
  FUNC_0 (VAR_7 != ((void*)0));

  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {

    FUNC_0 (VAR_5[VAR_8].v_fid != VAR_0 && VAR_5[VAR_8].v_fid != VAR_1);
  }

  return FUNC_2 (VAR_7, VAR_4, VAR_5, VAR_6, 0) > -1;
}
