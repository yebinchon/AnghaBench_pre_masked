
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int local_id; } ;
typedef TYPE_1__ user ;
typedef int predicate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int * FUNC_4 (char*,int ) ;
 int * VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;

int FUNC_7 (int VAR_6, char *VAR_7) {
  FUNC_0 (!VAR_3 && !VAR_5);

  user *VAR_8 = FUNC_1 (VAR_6);
  if (VAR_8 == ((void*)0)) {
    return -1;
  }

  FUNC_3 (VAR_8, VAR_8->local_id, VAR_2);
  if (!FUNC_6 (VAR_8)) {
    return -2;
  }

  predicate *VAR_9 = FUNC_4 (VAR_7, VAR_0);

  int VAR_10 = FUNC_5 (VAR_8, 0, VAR_1, VAR_9);

  int VAR_11, VAR_12 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
    int VAR_13 = FUNC_2 (&VAR_4[VAR_11]);

    if (VAR_13 > 0) {
      VAR_12++;
    }
  }

  return VAR_12;
}
