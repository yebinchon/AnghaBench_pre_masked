
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_private {int dummy; } ;
struct vmw_buffer_object {int base; } ;
struct ttm_bo_kmap_obj {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long,unsigned long,struct ttm_bo_kmap_obj*) ;
 int FUNC_2 (struct ttm_bo_kmap_obj*) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct ttm_bo_kmap_obj*,int*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct vmw_private*,void*,int,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct vmw_private *VAR_3,
    struct vmw_buffer_object *VAR_4,
    u32 VAR_5, u32 VAR_6,
    u32 VAR_7, u32 VAR_8)
{
 struct ttm_bo_kmap_obj VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 void *VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_10 = 0;
 VAR_11 = (VAR_5*VAR_6*4 + VAR_2 - 1) >> VAR_1;

 VAR_14 = FUNC_3(&VAR_4->base, 1, 0, ((void*)0));
 if (FUNC_6(VAR_14 != 0)) {
  FUNC_0("reserve failed\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_1(&VAR_4->base, VAR_10, VAR_11, &VAR_9);
 if (FUNC_6(VAR_14 != 0))
  goto err_unreserve;

 VAR_12 = FUNC_5(&VAR_9, &VAR_13);
 VAR_14 = FUNC_7(VAR_3, VAR_12, VAR_5, VAR_6,
          VAR_7, VAR_8);

 FUNC_2(&VAR_9);
err_unreserve:
 FUNC_4(&VAR_4->base);

 return VAR_14;
}
