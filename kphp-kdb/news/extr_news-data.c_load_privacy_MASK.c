
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int priv_mask; } ;
typedef TYPE_1__ user_t ;
typedef int index_header ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4 (index_header *VAR_3) {
  static int VAR_4[1 << 20];


  while (1) {
    int VAR_5 = FUNC_3 (VAR_0, VAR_4, 1 << 20);
    if (!VAR_5) {
      break;
    }
    FUNC_0 ((VAR_5 & 7) == 0);
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < (VAR_5 >> 3); VAR_6++) {
      if (VAR_2 >= 3) {
        FUNC_1 (VAR_1, "uid = %d, priv_mask = %d\n", VAR_4[2 * VAR_6], VAR_4[2 * VAR_6 + 1]);
      }
      user_t *VAR_7 = FUNC_2 (VAR_4[2 * VAR_6], 1);
      VAR_7->priv_mask = VAR_4[2 * VAR_6 + 1];
      FUNC_0 (VAR_7->priv_mask & 1);
    }
  }
}
