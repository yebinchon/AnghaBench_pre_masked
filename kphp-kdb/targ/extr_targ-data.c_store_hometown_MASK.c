
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hometown_hashes; scalar_t__ hometown; int uid; } ;
typedef TYPE_1__ user_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;

int FUNC_6 (user_t *VAR_1, char *VAR_2, int VAR_3) {
  int VAR_4;
  FUNC_1 (VAR_3 <= 255);
  FUNC_1 (!VAR_2[VAR_3]);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    FUNC_1 ((unsigned char) VAR_2[VAR_4] >= ' ');
  }
  FUNC_4 (VAR_1->hometown);
  FUNC_2 (VAR_1->uid, VAR_1->hometown_hashes);

  if (VAR_3) {
    VAR_1->hometown = FUNC_3 (VAR_2, VAR_3);
    VAR_1->hometown_hashes = FUNC_5 (VAR_1->hometown, 0, VAR_0);
    FUNC_0 (VAR_1->uid, VAR_1->hometown_hashes);
  } else {
    VAR_1->hometown = 0;
    VAR_1->hometown_hashes = 0;
  }

  return 1;
}
