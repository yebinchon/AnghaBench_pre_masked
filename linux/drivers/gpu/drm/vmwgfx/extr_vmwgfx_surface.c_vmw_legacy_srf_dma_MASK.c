
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct vmw_surface {int dummy; } ;
struct vmw_resource {struct vmw_private* dev_priv; } ;
struct vmw_private {int dummy; } ;
struct vmw_fence_obj {int dummy; } ;
struct ttm_validate_buffer {int bo; } ;
typedef int SVGAGuestPtr ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (struct vmw_private*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct vmw_fence_obj*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,struct vmw_private*,struct vmw_fence_obj**,int *) ;
 int FUNC_7 (struct vmw_fence_obj**) ;
 int FUNC_8 (struct vmw_private*,int ) ;
 struct vmw_surface* FUNC_9 (struct vmw_resource*) ;
 int FUNC_10 (struct vmw_surface*,int *,int *,int) ;
 int FUNC_11 (struct vmw_surface*) ;

__attribute__((used)) static int FUNC_12(struct vmw_resource *VAR_1,
         struct ttm_validate_buffer *VAR_2,
         bool VAR_3)
{
 SVGAGuestPtr VAR_4;
 struct vmw_fence_obj *VAR_5;
 uint32_t VAR_6;
 struct vmw_surface *VAR_7 = FUNC_9(VAR_1);
 uint8_t *VAR_8;
 struct vmw_private *VAR_9 = VAR_1->dev_priv;

 FUNC_0(!VAR_2->bo);
 VAR_6 = FUNC_11(VAR_7);
 VAR_8 = FUNC_1(VAR_9, VAR_6);
 if (FUNC_3(!VAR_8))
  return -VAR_0;

 FUNC_5(VAR_2->bo, &VAR_4);
 FUNC_10(VAR_7, VAR_8, &VAR_4, VAR_3);

 FUNC_8(VAR_9, VAR_6);





 (void) FUNC_6(((void*)0), VAR_9,
       &VAR_5, ((void*)0));

 FUNC_4(VAR_2->bo, VAR_5);

 if (FUNC_2(VAR_5 != ((void*)0)))
  FUNC_7(&VAR_5);

 return 0;
}
