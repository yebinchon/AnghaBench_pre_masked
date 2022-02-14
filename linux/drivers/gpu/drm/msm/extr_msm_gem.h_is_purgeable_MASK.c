
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int import_attach; int dma_buf; TYPE_1__* dev; } ;
struct msm_gem_object {scalar_t__ madv; TYPE_2__ base; scalar_t__ sgt; } ;
struct TYPE_3__ {int struct_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool FUNC_2(struct msm_gem_object *VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_1->base.dev->struct_mutex));
 return (VAR_1->madv == VAR_0) && VAR_1->sgt &&
   !VAR_1->base.dma_buf && !VAR_1->base.import_attach;
}
