
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (char *VAR_6, int VAR_7) {
  if (VAR_7 < 2 || VAR_7 >= 64) { return; }
  FUNC_1 (VAR_5, VAR_6, VAR_7+1);
  VAR_2[VAR_4++] = VAR_5;
  VAR_5 += (VAR_7 + 4) & -4;
  if (VAR_5 >= VAR_3 + VAR_0 - 512 || VAR_4 >= VAR_1) {
    FUNC_0 ();
  }
}
