
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ seqno; } ;
struct vmw_fence_obj {TYPE_2__ base; } ;
struct vmw_fence_manager {int seqno_valid; TYPE_1__* dev_priv; } ;
struct TYPE_3__ {scalar_t__* mmio_virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 struct vmw_fence_manager* FUNC_1 (struct vmw_fence_obj*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static bool FUNC_5(struct vmw_fence_obj *VAR_2)
{
 struct vmw_fence_manager *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;
 u32 *VAR_5;

 if (FUNC_0(&VAR_2->base))
  return 0;

 VAR_5 = VAR_3->dev_priv->mmio_virt;
 VAR_4 = FUNC_3(VAR_5 + VAR_0);
 if (FUNC_2(VAR_3->seqno_valid &&
     VAR_4 - VAR_2->base.seqno < VAR_1))
  return 0;

 FUNC_4(VAR_2->base.seqno, VAR_5 + VAR_0);
 VAR_3->seqno_valid = 1;

 return 1;
}
