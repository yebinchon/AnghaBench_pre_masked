
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
typedef TYPE_1__ queue ;
typedef int ll ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4 (char *VAR_0, ll *VAR_1) {
  if (!FUNC_0 (VAR_0, FUNC_1 (VAR_0))) {
    return 0;
  }
  queue *VAR_2 = FUNC_2 (VAR_0, 1);
  FUNC_3 (VAR_2);
  *VAR_1 = VAR_2->id;
  return 1;
}
