
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vmw_dx_shader_bindings {int dirty; } ;
struct vmw_ctx_binding_state {struct vmw_dx_shader_bindings* per_shader; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct vmw_ctx_binding_state*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vmw_ctx_binding_state *VAR_2)
{
 struct vmw_dx_shader_bindings *VAR_3 = &VAR_2->per_shader[0];
 u32 VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4, ++VAR_3) {
  if (!FUNC_1(VAR_1, &VAR_3->dirty))
   continue;

  VAR_5 = FUNC_2(VAR_2, VAR_4);
  if (VAR_5)
   break;

  FUNC_0(VAR_1, &VAR_3->dirty);
 }

 return 0;
}
