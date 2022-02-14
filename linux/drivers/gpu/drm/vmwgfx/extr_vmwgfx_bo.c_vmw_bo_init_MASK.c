
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_bo_device {int dummy; } ;
struct vmw_private {struct ttm_bo_device bdev; } ;
struct TYPE_2__ {int priority; } ;
struct vmw_buffer_object {TYPE_1__ base; int res_list; } ;
struct ttm_placement {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vmw_buffer_object*,int ,int) ;
 int FUNC_4 (struct ttm_bo_device*,TYPE_1__*,size_t,int ,struct ttm_placement*,int ,int,size_t,int *,int *,void (*) (struct ttm_buffer_object*)) ;
 int VAR_1 ;
 size_t FUNC_5 (struct vmw_private*,size_t,int) ;
 void FUNC_6 (struct ttm_buffer_object*) ;
 void FUNC_7 (struct ttm_buffer_object*) ;

int FUNC_8(struct vmw_private *VAR_2,
  struct vmw_buffer_object *VAR_3,
  size_t VAR_4, struct ttm_placement *VAR_5,
  bool VAR_6,
  void (*VAR_7)(struct ttm_buffer_object *VAR_8))
{
 struct ttm_bo_device *VAR_9 = &VAR_2->bdev;
 size_t VAR_10;
 int VAR_11;
 bool VAR_12 = (VAR_7 == &FUNC_7);

 FUNC_2(!VAR_7 && (!VAR_12 && (VAR_7 != FUNC_6)));

 VAR_10 = FUNC_5(VAR_2, VAR_4, VAR_12);
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 FUNC_0(VAR_0 <= 3);
 VAR_3->base.priority = 3;

 FUNC_1(&VAR_3->res_list);

 VAR_11 = FUNC_4(VAR_9, &VAR_3->base, VAR_4,
     VAR_1, VAR_5,
     0, VAR_6, VAR_10,
     ((void*)0), ((void*)0), VAR_7);
 return VAR_11;
}
