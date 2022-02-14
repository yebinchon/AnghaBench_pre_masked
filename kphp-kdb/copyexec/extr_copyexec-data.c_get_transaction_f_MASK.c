
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transaction_id; struct TYPE_4__* hnext; } ;
typedef TYPE_1__ transaction_t ;


 void** VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;

transaction_t *FUNC_2 (int VAR_3, int VAR_4) {
  int VAR_5 = VAR_3 & VAR_1;
  transaction_t **VAR_6 = &(VAR_0[VAR_5]), *VAR_7;
  while (1) {
    VAR_7 = *VAR_6;
    if (VAR_7 == ((void*)0)) {
      break;
    }
    if (VAR_7->transaction_id == VAR_3) {
      *VAR_6 = VAR_7->hnext;
      if (VAR_4 >= 0) {
        VAR_7->hnext = VAR_0[VAR_5];
        VAR_0[VAR_5] = VAR_7;
      }
      return VAR_7;
    }
    VAR_6 = &(VAR_7->hnext);
  }
  if (VAR_4 > 0) {

    VAR_7 = FUNC_0 (1, sizeof (transaction_t));
    if (VAR_7 == ((void*)0)) {
      FUNC_1 ("get_transaction_f: calloc returns NULL. %m\n");
      return ((void*)0);
    }
    VAR_2++;
    VAR_7->transaction_id = VAR_3;
    VAR_7->hnext = VAR_0[VAR_5];
    VAR_0[VAR_5] = VAR_7;
    return VAR_7;
  }
  return ((void*)0);
}
