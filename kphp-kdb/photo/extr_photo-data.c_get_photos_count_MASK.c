
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int local_id; } ;
typedef TYPE_1__ user ;
typedef int predicate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;

int FUNC_7 (int VAR_4, int VAR_5, char *VAR_6) {
  FUNC_0 (!VAR_2 && !VAR_3);

  user *VAR_7 = FUNC_1 (VAR_4);
  if (VAR_7 == ((void*)0)) {
    return -1;
  }

  FUNC_2 (VAR_7, VAR_7->local_id, VAR_0);
  if (!FUNC_6 (VAR_7)) {
    return -2;
  }

  predicate *VAR_8 = FUNC_3 (VAR_6, VAR_1);

  if (VAR_8 == ((void*)0)) {
    return FUNC_4 (VAR_7, VAR_5);
  } else {
    return FUNC_5 (VAR_7, VAR_5, VAR_8);
  }
}
