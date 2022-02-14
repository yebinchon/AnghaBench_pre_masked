
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,char*,int) ;

void FUNC_2 (int VAR_7) {
  FUNC_1 (3, "store_res_targ_aud(%d)\n", VAR_7);
  VAR_2[VAR_4++] = VAR_7;
  long VAR_8;
  for (VAR_8 = 0; (int) VAR_8 < VAR_1; VAR_8++) {
    if (FUNC_0 (VAR_6[VAR_7], VAR_0[VAR_8], VAR_7)) {
      VAR_3[3*VAR_8 + 3]++;
    }
  }
  VAR_3[0]++;
  VAR_5++;
}
