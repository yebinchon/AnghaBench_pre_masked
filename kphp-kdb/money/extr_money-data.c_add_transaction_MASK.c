
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* h_next; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2 (transaction_t *VAR_1) {
  int VAR_2 = FUNC_1 (VAR_1->transaction_id);
  FUNC_0 (!VAR_1->h_next);

  VAR_1->h_next = VAR_0[VAR_2];
  VAR_0[VAR_2] = VAR_1;
  return 0;
}
