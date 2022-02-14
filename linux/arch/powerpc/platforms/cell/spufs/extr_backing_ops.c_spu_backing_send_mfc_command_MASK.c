
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int register_lock; } ;
struct spu_context {TYPE_1__ csa; } ;
struct mfc_dma_command {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct spu_context *VAR_1,
     struct mfc_dma_command *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->csa.register_lock);
 VAR_3 = -VAR_0;

 FUNC_1(&VAR_1->csa.register_lock);

 return VAR_3;
}
