
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wkey ;
typedef int watchcat_query_t ;
struct TYPE_4__ {int keys; } ;
typedef TYPE_1__ watchcat ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,long long,char*,int,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (long long,int *) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int * FUNC_5 (int *,int,int ,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

void FUNC_8 (long long VAR_2, char *VAR_3, int VAR_4, int VAR_5) {
  if (VAR_0 > 1) {
    FUNC_1 (VAR_1, "subscribe wathcat %lld (%s), q_id = %d, timeout = %d\n", VAR_2, VAR_3, VAR_4, VAR_5);
  }


  watchcat_query_t *VAR_6 = FUNC_0 (VAR_3);
  if (FUNC_6 (VAR_6) == -1) {
    FUNC_2 (VAR_6);
    return;
  }
  watchcat *VAR_7 = FUNC_3 (VAR_2, VAR_6);

  wkey *VAR_8 = FUNC_5 (&VAR_7->keys, VAR_4, FUNC_4(), VAR_7);
  FUNC_7 (VAR_8, VAR_5);
}
