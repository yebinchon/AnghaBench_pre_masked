
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int dirty; } ;


 unsigned int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct smq_policy *VAR_0, bool VAR_1)
{




 if (VAR_1) {



  return FUNC_0(&VAR_0->dirty) == 0u;
 }




 return 1;
}
