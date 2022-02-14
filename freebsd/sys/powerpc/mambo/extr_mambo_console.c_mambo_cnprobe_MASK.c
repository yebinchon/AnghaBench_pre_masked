
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consdev {int cn_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(struct consdev *VAR_2)
{
 if (FUNC_0("/mambo") == -1) {
  VAR_2->cn_pri = VAR_0;
  return;
 }

 VAR_2->cn_pri = VAR_1;
}
