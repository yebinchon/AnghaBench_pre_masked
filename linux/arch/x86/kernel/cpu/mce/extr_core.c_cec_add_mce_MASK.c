
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mce*) ;
 scalar_t__ FUNC_2 (struct mce*) ;
 scalar_t__ FUNC_3 (struct mce*) ;

__attribute__((used)) static bool FUNC_4(struct mce *VAR_1)
{
 if (!VAR_1)
  return 0;


 if (FUNC_2(VAR_1) &&
     FUNC_1(VAR_1) &&
     FUNC_3(VAR_1))
  if (!FUNC_0(VAR_1->addr >> VAR_0))
   return 1;

 return 0;
}
