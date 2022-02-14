
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uid; } ;
typedef TYPE_1__ user_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (user_t *VAR_3, int VAR_4) {
  if ((unsigned) VAR_4 >= VAR_0) {
    return -1;
  }

  VAR_2--;

  FUNC_0 (VAR_3->uid, FUNC_1 (VAR_1, VAR_4));

  return 1;
}
