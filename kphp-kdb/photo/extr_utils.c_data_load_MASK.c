
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int n; } ;
struct TYPE_4__ {int objects_n; int* objects_offset; char* objects; TYPE_2__ hidden_state; int prm; int restore_info; int id_to_local_id; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ,int *,size_t,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int*,int,int *) ;

void FUNC_6 (data *VAR_1, char *VAR_2, int VAR_3) {
  char *VAR_4 = VAR_2, *VAR_5 = VAR_4 + VAR_3;

  int VAR_6 = VAR_1->objects_n == -2;

  FUNC_1 (VAR_4, VAR_1->objects_n);





  VAR_1->objects_offset = (int *)VAR_4;
  VAR_4 += sizeof (int) * (VAR_1->objects_n + 1);


  VAR_4 += FUNC_4 (&VAR_1->id_to_local_id, VAR_4, VAR_5 - VAR_4, VAR_1->objects_n);

  VAR_1->objects = VAR_4;

  VAR_4 = VAR_1->objects + VAR_1->objects_offset[VAR_1->objects_n];

  if (VAR_5 != VAR_4 && VAR_1->objects_n) {
    int VAR_7;
    FUNC_2 (VAR_4 + sizeof (int) <= VAR_5);
    FUNC_1 (VAR_4, VAR_7);
    FUNC_2 (VAR_4 + VAR_7 <= VAR_5);
    FUNC_3 (&VAR_1->hidden_state, VAR_4, VAR_7);
    VAR_4 += VAR_7;

    if (VAR_6) {
      int VAR_8;
      FUNC_2 (VAR_4 + sizeof (int) <= VAR_5);
      FUNC_1 (VAR_4, VAR_8);

      int VAR_9 = sizeof (int) * VAR_8;
      FUNC_2 (VAR_4 + VAR_9 <= VAR_5);
      VAR_4 += FUNC_5 ((int *)VAR_4, VAR_8, &VAR_1->restore_info);
    }

  } else {
    FUNC_3 (&VAR_1->hidden_state, ((void*)0), 0);
  }
  if (VAR_6) {

    FUNC_0 (VAR_0, &VAR_1->prm, VAR_1->objects_n, VAR_1->hidden_state.n);
  }
}
