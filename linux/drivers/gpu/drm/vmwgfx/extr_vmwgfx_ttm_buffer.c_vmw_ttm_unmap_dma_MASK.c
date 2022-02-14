
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sgt; } ;
struct vmw_ttm_tt {int mapped; int sg_alloc_size; TYPE_1__ vsgt; struct vmw_private* dev_priv; } ;
struct vmw_private {int map_mode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;


 int FUNC_2 (struct vmw_private*) ;
 int FUNC_3 (struct vmw_ttm_tt*) ;

__attribute__((used)) static void FUNC_4(struct vmw_ttm_tt *VAR_0)
{
 struct vmw_private *VAR_1 = VAR_0->dev_priv;

 if (!VAR_0->vsgt.sgt)
  return;

 switch (VAR_1->map_mode) {
 case 129:
 case 128:
  FUNC_3(VAR_0);
  FUNC_0(VAR_0->vsgt.sgt);
  VAR_0->vsgt.sgt = ((void*)0);
  FUNC_1(FUNC_2(VAR_1),
        VAR_0->sg_alloc_size);
  break;
 default:
  break;
 }
 VAR_0->mapped = 0;
}
