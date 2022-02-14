
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int retries; int * lock_ops; struct drm_dp_aux* algo_data; int * algo; } ;
struct TYPE_3__ {int lock; } ;
struct drm_dp_aux {TYPE_2__ ddc; int crc_work; TYPE_1__ cec; int hw_mutex; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_dp_aux *VAR_3)
{
 FUNC_1(&VAR_3->hw_mutex);
 FUNC_1(&VAR_3->cec.lock);
 FUNC_0(&VAR_3->crc_work, VAR_0);

 VAR_3->ddc.algo = &VAR_1;
 VAR_3->ddc.algo_data = VAR_3;
 VAR_3->ddc.retries = 3;

 VAR_3->ddc.lock_ops = &VAR_2;
}
