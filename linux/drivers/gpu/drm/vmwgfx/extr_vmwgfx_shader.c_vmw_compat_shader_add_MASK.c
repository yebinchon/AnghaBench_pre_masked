
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_resource {int dummy; } ;
struct vmw_private {int dummy; } ;
struct vmw_cmdbuf_res_manager {int dummy; } ;
struct vmw_buffer_object {int base; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct ttm_bo_kmap_obj {int dummy; } ;
struct list_head {int dummy; } ;
typedef int SVGA3dShaderType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct vmw_buffer_object* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int FUNC_4 (int *,int ,int,struct ttm_bo_kmap_obj*) ;
 int FUNC_5 (struct ttm_bo_kmap_obj*) ;
 int FUNC_6 (int *,int,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,struct ttm_operation_ctx*) ;
 int FUNC_9 (struct ttm_bo_kmap_obj*,int*) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_4 ;
 int FUNC_11 (struct vmw_private*,struct vmw_buffer_object*,size_t,int *,int,int ) ;
 int FUNC_12 (struct vmw_buffer_object**) ;
 int FUNC_13 (struct vmw_cmdbuf_res_manager*,int ,int ,struct vmw_resource*,struct list_head*) ;
 int VAR_5 ;
 int FUNC_14 (struct vmw_resource**) ;
 struct vmw_resource* FUNC_15 (struct vmw_private*,struct vmw_buffer_object*,size_t,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_18(struct vmw_private *VAR_8,
     struct vmw_cmdbuf_res_manager *VAR_9,
     u32 VAR_10, const void *VAR_11,
     SVGA3dShaderType VAR_12,
     size_t VAR_13,
     struct list_head *VAR_14)
{
 struct ttm_operation_ctx VAR_15 = { 0, 1 };
 struct vmw_buffer_object *VAR_16;
 struct ttm_bo_kmap_obj VAR_17;
 bool VAR_18;
 int VAR_19;
 struct vmw_resource *VAR_20;

 if (!FUNC_16(VAR_10, VAR_12))
  return -VAR_0;


 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_2);
 if (FUNC_10(!VAR_16))
  return -VAR_1;

 VAR_19 = FUNC_11(VAR_8, VAR_16, VAR_13, &VAR_6,
         1, VAR_4);
 if (FUNC_10(VAR_19 != 0))
  goto out;

 VAR_19 = FUNC_6(&VAR_16->base, 0, 1, ((void*)0));
 if (FUNC_10(VAR_19 != 0))
  goto no_reserve;


 VAR_19 = FUNC_4(&VAR_16->base, 0, FUNC_0(VAR_13) >> VAR_3,
     &VAR_17);
 if (FUNC_10(VAR_19 != 0)) {
  FUNC_7(&VAR_16->base);
  goto no_reserve;
 }

 FUNC_3(FUNC_9(&VAR_17, &VAR_18), VAR_11, VAR_13);
 FUNC_1(VAR_18);

 FUNC_5(&VAR_17);
 VAR_19 = FUNC_8(&VAR_16->base, &VAR_7, &VAR_15);
 FUNC_1(VAR_19 != 0);
 FUNC_7(&VAR_16->base);

 VAR_20 = FUNC_15(VAR_8, VAR_16, VAR_13, 0, VAR_12);
 if (FUNC_10(VAR_19 != 0))
  goto no_reserve;

 VAR_19 = FUNC_13(VAR_9, VAR_5,
     FUNC_17(VAR_10, VAR_12),
     VAR_20, VAR_14);
 FUNC_14(&VAR_20);
no_reserve:
 FUNC_12(&VAR_16);
out:
 return VAR_19;
}
