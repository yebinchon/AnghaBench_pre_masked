
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3 (listree_t *VAR_9, int VAR_10) {
  if (!((FUNC_2 (VAR_10) ^ VAR_4) & VAR_2)) {
    if (!(VAR_5 & 1)) {
      FUNC_1 (FUNC_0 (VAR_1, VAR_10), VAR_0[VAR_10], FUNC_2 (VAR_10));
      VAR_8--;
      VAR_3++;
      return 0;
    } else {
      VAR_6[VAR_7 ++] = FUNC_0 (VAR_1, VAR_10);
      VAR_3++;
      return 1;
    }
  } else {
    return 1;
  }
}
