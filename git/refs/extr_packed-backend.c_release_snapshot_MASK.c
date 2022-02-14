
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot {int validity; int referrers; } ;


 int FUNC_0 (struct snapshot*) ;
 int FUNC_1 (struct snapshot*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snapshot *VAR_0)
{
 if (!--VAR_0->referrers) {
  FUNC_2(&VAR_0->validity);
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
  return 1;
 } else {
  return 0;
 }
}
