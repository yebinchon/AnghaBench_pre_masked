
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priv_mask; } ;
typedef TYPE_1__ user_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2 (int VAR_1, int VAR_2) {
  FUNC_0 (VAR_0);
  user_t *VAR_3 = FUNC_1 (VAR_1, 1);
  if (!VAR_3) {
    return -1;
  }
  VAR_3->priv_mask = VAR_2 | 1;
  return 1;
}
