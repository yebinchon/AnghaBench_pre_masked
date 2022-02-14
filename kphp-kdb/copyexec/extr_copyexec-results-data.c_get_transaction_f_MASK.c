
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int transaction_id; unsigned long long volume_id; struct TYPE_6__* hnext; } ;
typedef TYPE_1__ transaction_t ;


 void** VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;

transaction_t *FUNC_4 (unsigned long long VAR_3, int VAR_4, int VAR_5) {
  unsigned VAR_6 = VAR_3 >> 32;
  VAR_6 = VAR_6 * 10007 + ((unsigned) VAR_3);
  VAR_6 = VAR_6 * 10007 + VAR_4;
  VAR_6 &= VAR_1;
  transaction_t **VAR_7 = &(VAR_0[VAR_6]), *VAR_8;
  while (1) {
    VAR_8 = *VAR_7;
    if (VAR_8 == ((void*)0)) {
      break;
    }
    if (VAR_8->transaction_id == VAR_4 && VAR_8->volume_id == VAR_3) {
      *VAR_7 = VAR_8->hnext;
      if (VAR_5 >= 0) {
        VAR_8->hnext = VAR_0[VAR_6];
        VAR_0[VAR_6] = VAR_8;
        FUNC_1 (VAR_8);
      }
      return VAR_8;
    }
    VAR_7 = &(VAR_8->hnext);
  }
  if (VAR_5 > 0) {
    FUNC_2 ();
    VAR_8 = FUNC_3 (sizeof (transaction_t));
    VAR_2++;
    VAR_8->volume_id = VAR_3;
    VAR_8->transaction_id = VAR_4;
    VAR_8->hnext = VAR_0[VAR_6];
    VAR_0[VAR_6] = VAR_8;
    FUNC_0 (VAR_8);
    return VAR_8;
  }
  return ((void*)0);
}
