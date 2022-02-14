
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int dummy; } ;
struct vmw_surface {struct vmw_resource res; } ;


 int FUNC_0 (struct vmw_resource**) ;

__attribute__((used)) static inline void FUNC_1(struct vmw_surface **VAR_0)
{
 struct vmw_surface *VAR_1 = *VAR_0;
 struct vmw_resource *VAR_2 = &VAR_1->res;
 *VAR_0 = ((void*)0);

 FUNC_0(&VAR_2);
}
