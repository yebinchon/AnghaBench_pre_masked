
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; } ;
typedef TYPE_1__ user_t ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static user_t *FUNC_2 (int VAR_1) {
  int VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 >= 0 && VAR_0[VAR_2]) {
    FUNC_0 (VAR_2 == VAR_0[VAR_2]->user_id);
  }
  return VAR_2 >= 0 ? VAR_0[VAR_2] : 0;
}
