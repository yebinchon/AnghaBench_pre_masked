
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_placement {int dummy; } ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct ttm_buffer_object {int dummy; } ;
struct ttm_bo_device {int dummy; } ;
struct sg_table {int dummy; } ;
struct dma_resv {int dummy; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;


 int FUNC_0 (struct ttm_bo_device*,struct ttm_buffer_object*,unsigned long,int,struct ttm_placement*,int ,struct ttm_operation_ctx*,size_t,struct sg_table*,struct dma_resv*,void (*) (struct ttm_buffer_object*)) ;
 int FUNC_1 (struct ttm_buffer_object*) ;

int FUNC_2(struct ttm_bo_device *VAR_0,
  struct ttm_buffer_object *VAR_1,
  unsigned long VAR_2,
  enum ttm_bo_type VAR_3,
  struct ttm_placement *VAR_4,
  uint32_t VAR_5,
  bool VAR_6,
  size_t VAR_7,
  struct sg_table *VAR_8,
  struct dma_resv *VAR_9,
  void (*VAR_10) (struct ttm_buffer_object *))
{
 struct ttm_operation_ctx VAR_11 = { VAR_6, 0 };
 int VAR_12;

 VAR_12 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, &VAR_11, VAR_7,
       VAR_8, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 if (!VAR_9)
  FUNC_1(VAR_1);

 return 0;
}
