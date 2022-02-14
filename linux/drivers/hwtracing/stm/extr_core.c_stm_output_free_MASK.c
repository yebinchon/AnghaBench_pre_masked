
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm_output {int lock; scalar_t__ nr_chans; } ;
struct stm_device {int mc_lock; TYPE_1__* pdrv; } ;
struct TYPE_2__ {int (* output_close ) (struct stm_output*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stm_device*,struct stm_output*) ;
 int FUNC_3 (struct stm_output*) ;

__attribute__((used)) static void FUNC_4(struct stm_device *VAR_0, struct stm_output *VAR_1)
{
 FUNC_0(&VAR_0->mc_lock);
 FUNC_0(&VAR_1->lock);
 if (VAR_1->nr_chans)
  FUNC_2(VAR_0, VAR_1);
 if (VAR_0->pdrv && VAR_0->pdrv->output_close)
  VAR_0->pdrv->output_close(VAR_1);
 FUNC_1(&VAR_1->lock);
 FUNC_1(&VAR_0->mc_lock);
}
