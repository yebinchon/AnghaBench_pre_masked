
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vmw_private {struct vmw_buffer_object* dummy_query_bo; } ;
struct vmw_buffer_object {int base; } ;
struct ttm_bo_kmap_obj {int dummy; } ;
struct TYPE_3__ {int totalSize; int result32; int state; } ;
typedef TYPE_1__ SVGA3dQueryResult ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vmw_buffer_object* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int,struct ttm_bo_kmap_obj*) ;
 int FUNC_5 (struct ttm_bo_kmap_obj*) ;
 int FUNC_6 (int *,int,int,int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (struct ttm_bo_kmap_obj*,int*) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_4 ;
 int FUNC_10 (struct vmw_private*,struct vmw_buffer_object*,int ,int *,int,int *) ;
 int FUNC_11 (struct vmw_buffer_object*,int) ;
 int FUNC_12 (struct vmw_buffer_object**) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct vmw_private *VAR_6)
{
 int VAR_7;
 struct vmw_buffer_object *VAR_8;
 struct ttm_bo_kmap_obj VAR_9;
 volatile SVGA3dQueryResult *VAR_10;
 bool VAR_11;






 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_10(VAR_6, VAR_8, VAR_2,
     &VAR_5, 0,
     &VAR_4);
 if (FUNC_9(VAR_7 != 0))
  return VAR_7;

 VAR_7 = FUNC_6(&VAR_8->base, 0, 1, ((void*)0));
 FUNC_0(VAR_7 != 0);
 FUNC_11(VAR_8, 1);

 VAR_7 = FUNC_4(&VAR_8->base, 0, 1, &VAR_9);
 if (FUNC_3(VAR_7 == 0)) {
  VAR_10 = FUNC_8(&VAR_9, &VAR_11);
  VAR_10->totalSize = sizeof(*VAR_10);
  VAR_10->state = VAR_3;
  VAR_10->result32 = 0xff;
  FUNC_5(&VAR_9);
 }
 FUNC_11(VAR_8, 0);
 FUNC_7(&VAR_8->base);

 if (FUNC_9(VAR_7 != 0)) {
  FUNC_1("Dummy query buffer map failed.\n");
  FUNC_12(&VAR_8);
 } else
  VAR_6->dummy_query_bo = VAR_8;

 return VAR_7;
}
