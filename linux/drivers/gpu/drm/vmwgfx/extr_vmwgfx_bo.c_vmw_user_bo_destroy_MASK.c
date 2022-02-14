
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_user_buffer_object {int vbo; } ;
struct ttm_buffer_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmw_user_buffer_object*,int ) ;
 int FUNC_1 (int *) ;
 struct vmw_user_buffer_object* FUNC_2 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_3(struct ttm_buffer_object *VAR_1)
{
 struct vmw_user_buffer_object *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->vbo);
 FUNC_0(VAR_2, VAR_0);
}
