
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int m; } ;


 unsigned int FUNC_0 (struct bitreader*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

unsigned int FUNC_2 (struct bitreader *VAR_1) {
  int VAR_2 = 0, VAR_3 = VAR_1->m;
  while (VAR_0) {
    VAR_2++;
    FUNC_1();
  }
  FUNC_1();
  VAR_1->m = VAR_3;
  return (1U << VAR_2) | FUNC_0 (VAR_1, VAR_2);
}
