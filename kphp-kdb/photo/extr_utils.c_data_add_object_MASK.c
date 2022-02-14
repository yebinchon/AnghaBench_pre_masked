
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int objects_n; int new_objects_n; int prm; int id_to_local_id; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int,int) ;

int FUNC_5 (data *VAR_1, int VAR_2) {


  int VAR_3 = FUNC_3 (VAR_1, VAR_2), VAR_4 = 0;
  if (VAR_3 != -1) {
    VAR_4 = FUNC_2 (VAR_1, VAR_2) != 0;
    if (!VAR_4) {
      return -1;
    }
  }

  if (VAR_4) {
    FUNC_1 (VAR_1, VAR_2);
  }

  int VAR_5 = VAR_1->objects_n + VAR_1->new_objects_n;
  FUNC_4 (&VAR_1->id_to_local_id, VAR_2, VAR_5);
  VAR_1->new_objects_n++;

  FUNC_0 (VAR_0, &VAR_1->prm, 1);
  return VAR_5;
}
