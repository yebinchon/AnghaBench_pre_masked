
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_fence_obj {int base; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct vmw_fence_obj **VAR_0)
{
 struct vmw_fence_obj *VAR_1 = *VAR_0;

 *VAR_0 = ((void*)0);
 if (VAR_1)
  FUNC_0(&VAR_1->base);
}
