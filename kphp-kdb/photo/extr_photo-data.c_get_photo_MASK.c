
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int local_id; } ;
typedef TYPE_1__ user ;
typedef int actual_object ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 char* FUNC_3 (int *,size_t,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,int const,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;

int FUNC_8 (int VAR_7, int VAR_8, const int VAR_9, char *VAR_10, char **VAR_11) {
  FUNC_0 (!VAR_3 && !VAR_6);

  user *VAR_12 = FUNC_2 (VAR_7);
  int VAR_13 = FUNC_4 (&VAR_5[VAR_1], VAR_10);

  if (VAR_12 == ((void*)0) || VAR_13 < 0 || !FUNC_1 (VAR_8)) {
    return 0;
  }

  FUNC_5 (VAR_12, VAR_12->local_id, VAR_0);
  if (!FUNC_7 (VAR_12)) {
    return -2;
  }

  actual_object VAR_14;
  if (FUNC_6 (VAR_12, VAR_8, VAR_9, &VAR_14) < 0) {
    return 0;
  }

  *VAR_11 = FUNC_3 (&VAR_14, VAR_1, VAR_4, VAR_13);

  if (VAR_2) {
    return 0;
  }

  return 1;
}
