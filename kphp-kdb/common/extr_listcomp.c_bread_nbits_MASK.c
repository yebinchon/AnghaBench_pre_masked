
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

unsigned int FUNC_2 (struct bitreader *VAR_1, int VAR_2) {
  FUNC_0 (!(VAR_2 & -32));
  unsigned int VAR_3 = 0;
  int VAR_4 = VAR_1->m;
  while (VAR_2--) {
    VAR_3 <<= 1;
    if (VAR_0) {
      VAR_3++;
    }
    FUNC_1();
  }
  VAR_1->m = VAR_4;
  return VAR_3;
}
