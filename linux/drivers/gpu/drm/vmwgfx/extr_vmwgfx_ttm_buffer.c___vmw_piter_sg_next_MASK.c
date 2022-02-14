
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_piter {int iter; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct vmw_piter*) ;

__attribute__((used)) static bool FUNC_2(struct vmw_piter *VAR_0)
{
 bool VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_0->iter) && VAR_1;
}
