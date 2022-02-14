
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {int backup_dirty; } ;
struct ttm_validate_buffer {int dummy; } ;


 int FUNC_0 (struct vmw_resource*,struct ttm_validate_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct vmw_resource *VAR_0,
          struct ttm_validate_buffer *VAR_1)
{
 if (!VAR_0->backup_dirty)
  return 0;

 return FUNC_0(VAR_0, VAR_1, 1);
}
