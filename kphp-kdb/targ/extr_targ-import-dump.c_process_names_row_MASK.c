
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

void FUNC_2 (void) {
  int VAR_8 = VAR_2[0], VAR_9 = VAR_3[1];

  if (VAR_8 <= 0 || VAR_8 >= VAR_4) {
    return;
  }

  FUNC_0 (VAR_1 < VAR_5 - VAR_9 - 16);

  ((int *) VAR_0)[VAR_8] = VAR_1;
  *((int *) (VAR_0 + VAR_1)) = VAR_9;
  VAR_1 += 4;
  FUNC_1 (VAR_0 + VAR_1, VAR_6[1], VAR_9+1);
  VAR_1 = (VAR_1 + VAR_9 + 4) & -4;

  FUNC_0 (VAR_1 <= VAR_5);

  VAR_7++;

}
