
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pid; } ;
typedef TYPE_1__ transaction_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4 (int VAR_0, int VAR_1) {
  transaction_t *VAR_2 = FUNC_1 (VAR_1, 0);
  if (VAR_2 == ((void*)0)) {
    return 0;
  }

  if (!FUNC_0 (VAR_2)) {
    return 0;
  }

  if (FUNC_2 (VAR_2->pid, VAR_0) < 0) {
    return 0;
  }

  return FUNC_3 (VAR_2);
}
