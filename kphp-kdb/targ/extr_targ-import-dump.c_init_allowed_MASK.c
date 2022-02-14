
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int FUNC_0 (int*,int ,int) ;

void FUNC_1 (void) {
  int VAR_1;
  FUNC_0 (VAR_0, 0, 256);
  for (VAR_1 = '0'; VAR_1 <= '9'; VAR_1++) { VAR_0[VAR_1] = 4; }
  for (VAR_1 = 'A'; VAR_1 <= 'Z'; VAR_1++) { VAR_0[VAR_1] = 2; }
  for (VAR_1 = 'a'; VAR_1 <= 'z'; VAR_1++) { VAR_0[VAR_1] = 1; }
  VAR_0['-'] = 8;
  VAR_0[','] = 8;
}
