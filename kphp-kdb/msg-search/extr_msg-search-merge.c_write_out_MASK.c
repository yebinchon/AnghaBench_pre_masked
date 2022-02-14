
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,void const*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3 (const void *VAR_5, int VAR_6) {
  int VAR_7;
  FUNC_0 ((unsigned) VAR_6 < VAR_0 * 8);
  if (!VAR_3) { VAR_3 = VAR_2 = VAR_1; }
  while (VAR_6 > 0) {
    VAR_7 = VAR_1 + VAR_0 - VAR_3;
    if (VAR_7 > VAR_6) { VAR_7 = VAR_6; }
    FUNC_0 (VAR_7 > 0);
    FUNC_2 (VAR_3, VAR_5, VAR_7);
    VAR_5 = ((char *) VAR_5) + VAR_7;
    VAR_3 += VAR_7;
    VAR_6 -= VAR_7;
    VAR_4 += VAR_7;
    if (VAR_3 == VAR_1 + VAR_0) {
      FUNC_1();
    }
  }
}
