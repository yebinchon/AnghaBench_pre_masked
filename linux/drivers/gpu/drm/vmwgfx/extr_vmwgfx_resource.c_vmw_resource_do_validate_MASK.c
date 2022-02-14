
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int id; struct vmw_res_func* func; } ;
struct vmw_res_func {int (* create ) (struct vmw_resource*) ;int (* bind ) (struct vmw_resource*,struct ttm_validate_buffer*) ;int (* destroy ) (struct vmw_resource*) ;scalar_t__ needs_backup; } ;
struct ttm_validate_buffer {int * bo; } ;


 int FUNC_0 (struct vmw_resource*) ;
 int FUNC_1 (struct vmw_resource*,struct ttm_validate_buffer*) ;
 int FUNC_2 (struct vmw_resource*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vmw_resource*) ;
 int FUNC_5 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_6(struct vmw_resource *VAR_0,
        struct ttm_validate_buffer *VAR_1)
{
 int VAR_2 = 0;
 const struct vmw_res_func *VAR_3 = VAR_0->func;

 if (FUNC_3(VAR_0->id == -1)) {
  VAR_2 = VAR_3->create(VAR_0);
  if (FUNC_3(VAR_2 != 0))
   return VAR_2;
 }

 if (VAR_3->bind &&
     ((VAR_3->needs_backup && !FUNC_5(VAR_0) &&
       VAR_1->bo != ((void*)0)) ||
      (!VAR_3->needs_backup && VAR_1->bo != ((void*)0)))) {
  VAR_2 = VAR_3->bind(VAR_0, VAR_1);
  if (FUNC_3(VAR_2 != 0))
   goto out_bind_failed;
  if (VAR_3->needs_backup)
   FUNC_4(VAR_0);
 }

 return 0;

out_bind_failed:
 VAR_3->destroy(VAR_0);

 return VAR_2;
}
