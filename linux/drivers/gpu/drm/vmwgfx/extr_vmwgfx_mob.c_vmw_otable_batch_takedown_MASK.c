
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int dummy; } ;
struct vmw_otable_batch {size_t num_otables; struct ttm_buffer_object* otable_bo; TYPE_1__* otables; } ;
struct ttm_buffer_object {int dummy; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
typedef size_t SVGAOTableType ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int *) ;
 int FUNC_5 (struct vmw_private*,size_t,TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct vmw_private *VAR_0,
          struct vmw_otable_batch *VAR_1)
{
 SVGAOTableType VAR_2;
 struct ttm_buffer_object *VAR_3 = VAR_1->otable_bo;
 int VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_otables; ++VAR_2)
  if (VAR_1->otables[VAR_2].enabled)
   FUNC_5(VAR_0, VAR_2,
       &VAR_1->otables[VAR_2]);

 VAR_4 = FUNC_2(VAR_3, 0, 1, ((void*)0));
 FUNC_0(VAR_4 != 0);

 FUNC_4(VAR_3, ((void*)0));
 FUNC_3(VAR_3);

 FUNC_1(VAR_1->otable_bo);
 VAR_1->otable_bo = ((void*)0);
}
