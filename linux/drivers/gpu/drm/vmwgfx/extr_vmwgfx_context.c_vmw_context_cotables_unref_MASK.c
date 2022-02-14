
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_user_context {int cotable_lock; struct vmw_resource** cotables; } ;
struct vmw_resource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_resource**) ;

__attribute__((used)) static void FUNC_3(struct vmw_user_context *VAR_1)
{
 struct vmw_resource *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_0(&VAR_1->cotable_lock);
  VAR_2 = VAR_1->cotables[VAR_3];
  VAR_1->cotables[VAR_3] = ((void*)0);
  FUNC_1(&VAR_1->cotable_lock);

  if (VAR_2)
   FUNC_2(&VAR_2);
 }
}
