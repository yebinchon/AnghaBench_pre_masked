
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsec {int ln; } ;
struct mprintc {scalar_t__ tail; int last_outed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char) ;

__attribute__((used)) static void
FUNC_3(struct mprintc *VAR_1, struct parsec *VAR_2)
{


 if (VAR_1->tail > 0) {
  FUNC_2(&VAR_2->ln, '-');
  VAR_1->tail--;
  if (VAR_0 > 0)
   FUNC_0();
 } else if (VAR_0 == 0 || (VAR_0 > 0 && FUNC_1(&VAR_2->ln)))






  ++VAR_1->last_outed;
}
