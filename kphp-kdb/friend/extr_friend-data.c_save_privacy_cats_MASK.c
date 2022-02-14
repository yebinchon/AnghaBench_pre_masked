
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cat_ver; } ;
typedef TYPE_1__ user_t ;


 int* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (user_t *VAR_1) {
  int *VAR_2;
  for (VAR_2 = VAR_0; *VAR_2 != -1; VAR_2++) {
    int VAR_3 = *VAR_2;
    if ((VAR_3 & 0x60000000) == 0x40000000) {
      FUNC_0 (!(VAR_3 & 0x3fffffe0));
      *VAR_2 = (VAR_3 & -0x40000000) + VAR_1->cat_ver[VAR_3 & 0x1f];
    }
  }
}
