
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct vmw_ctx_binding_state {int dummy; } ;
struct vmw_ctx_bindinfo {int dummy; } ;
struct vmw_binding_info {size_t* offsets; size_t size; } ;
typedef enum vmw_ctx_binding_type { ____Placeholder_vmw_ctx_binding_type } vmw_ctx_binding_type ;


 struct vmw_binding_info* VAR_0 ;

__attribute__((used)) static struct vmw_ctx_bindinfo *
FUNC_0(struct vmw_ctx_binding_state *VAR_1,
  enum vmw_ctx_binding_type VAR_2, u32 VAR_3, u32 VAR_4)
{
 const struct vmw_binding_info *VAR_5 = &VAR_0[VAR_2];
 size_t VAR_6 = VAR_5->offsets[VAR_3] + VAR_5->size*VAR_4;

 return (struct vmw_ctx_bindinfo *)((u8 *) VAR_1 + VAR_6);
}
