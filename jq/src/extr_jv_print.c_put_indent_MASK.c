
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char,int *,int *,int) ;

__attribute__((used)) static void FUNC_1(int VAR_4, int VAR_5, FILE* VAR_6, jv* VAR_7, int VAR_8) {
  if (VAR_5 & VAR_3) {
    while (VAR_4--)
      FUNC_0('\t', VAR_6, VAR_7, VAR_8);
  } else {
    VAR_4 *= ((VAR_5 & (VAR_0 | VAR_1 | VAR_2)) >> 8);
    while (VAR_4--)
      FUNC_0(' ', VAR_6, VAR_7, VAR_8);
  }
}
