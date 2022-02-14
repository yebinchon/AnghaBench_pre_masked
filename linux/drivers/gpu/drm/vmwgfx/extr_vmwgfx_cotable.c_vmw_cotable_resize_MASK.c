
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_resource {size_t backup_size; int id; struct vmw_buffer_object* backup; struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;
struct vmw_cotable {size_t size_read_back; int type; } ;
struct ttm_buffer_object {size_t num_pages; } ;
struct vmw_buffer_object {struct ttm_buffer_object base; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct ttm_bo_kmap_obj {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct vmw_buffer_object* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ttm_buffer_object*,size_t,int,struct ttm_bo_kmap_obj*) ;
 int FUNC_5 (struct ttm_bo_kmap_obj*) ;
 int FUNC_6 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_7 (struct ttm_buffer_object*) ;
 int FUNC_8 (struct ttm_buffer_object*,int *,struct ttm_operation_ctx*) ;
 int FUNC_9 (struct ttm_buffer_object*,int,int) ;
 int FUNC_10 (struct ttm_bo_kmap_obj*,int*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_3 ;
 int FUNC_12 (struct vmw_private*,struct vmw_buffer_object*,size_t,int *,int,int ) ;
 int FUNC_13 (struct vmw_buffer_object**) ;
 struct vmw_cotable* FUNC_14 (struct vmw_resource*) ;
 int FUNC_15 (struct vmw_resource*) ;
 int FUNC_16 (struct vmw_resource*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 (struct vmw_resource*) ;
 int FUNC_18 (struct vmw_resource*) ;

__attribute__((used)) static int FUNC_19(struct vmw_resource *VAR_6, size_t VAR_7)
{
 struct ttm_operation_ctx VAR_8 = { 0, 0 };
 struct vmw_private *VAR_9 = VAR_6->dev_priv;
 struct vmw_cotable *VAR_10 = FUNC_14(VAR_6);
 struct vmw_buffer_object *VAR_11, *VAR_12 = VAR_6->backup;
 struct ttm_buffer_object *VAR_13, *VAR_14 = &VAR_6->backup->base;
 size_t VAR_15 = VAR_6->backup_size;
 size_t VAR_16 = VAR_10->size_read_back;
 size_t VAR_17;
 struct ttm_bo_kmap_obj VAR_18, VAR_19;
 int VAR_20;
 size_t VAR_21;

 VAR_20 = FUNC_15(VAR_6);
 if (VAR_20)
  return VAR_20;

 VAR_17 = VAR_10->size_read_back;
 VAR_10->size_read_back = VAR_16;






 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_20 = FUNC_12(VAR_9, VAR_11, VAR_7, &VAR_4,
     1, VAR_3);
 if (VAR_20) {
  FUNC_0("Failed initializing new cotable MOB.\n");
  return VAR_20;
 }

 VAR_13 = &VAR_11->base;
 FUNC_1(FUNC_6(VAR_13, 0, 1, ((void*)0)));

 VAR_20 = FUNC_9(VAR_14, 0, 0);
 if (FUNC_11(VAR_20 != 0)) {
  FUNC_0("Failed waiting for cotable unbind.\n");
  goto out_wait;
 }





 for (VAR_21 = 0; VAR_21 < VAR_14->num_pages; ++VAR_21) {
  bool VAR_22;

  VAR_20 = FUNC_4(VAR_14, VAR_21, 1, &VAR_18);
  if (FUNC_11(VAR_20 != 0)) {
   FUNC_0("Failed mapping old COTable on resize.\n");
   goto out_wait;
  }
  VAR_20 = FUNC_4(VAR_13, VAR_21, 1, &VAR_19);
  if (FUNC_11(VAR_20 != 0)) {
   FUNC_0("Failed mapping new COTable on resize.\n");
   goto out_map_new;
  }
  FUNC_3(FUNC_10(&VAR_19, &VAR_22),
         FUNC_10(&VAR_18, &VAR_22),
         VAR_2);
  FUNC_5(&VAR_19);
  FUNC_5(&VAR_18);
 }


 VAR_20 = FUNC_8(VAR_13, &VAR_5, &VAR_8);
 if (FUNC_11(VAR_20 != 0)) {
  FUNC_0("Failed validating new COTable backup buffer.\n");
  goto out_wait;
 }

 FUNC_18(VAR_6);
 VAR_6->backup = VAR_11;
 VAR_6->backup_size = VAR_7;
 VAR_10->size_read_back = VAR_17;





 VAR_20 = FUNC_16(VAR_6);
 if (VAR_20) {
  FUNC_0("Failed switching COTable backup buffer.\n");
  VAR_6->backup = VAR_12;
  VAR_6->backup_size = VAR_15;
  VAR_10->size_read_back = VAR_16;
  FUNC_17(VAR_6);
  goto out_wait;
 }

 FUNC_17(VAR_6);

 FUNC_13(&VAR_12);
 VAR_6->id = VAR_10->type;

 return 0;

out_map_new:
 FUNC_5(&VAR_18);
out_wait:
 FUNC_7(VAR_13);
 FUNC_13(&VAR_11);

 return VAR_20;
}
