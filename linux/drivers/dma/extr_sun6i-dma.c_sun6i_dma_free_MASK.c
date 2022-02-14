
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device_node; } ;
struct TYPE_4__ {int task; TYPE_1__ chan; } ;
struct sun6i_vchan {TYPE_2__ vc; } ;
struct sun6i_dma_dev {int num_vchans; struct sun6i_vchan* vchans; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct sun6i_dma_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_vchans; VAR_1++) {
  struct sun6i_vchan *VAR_2 = &VAR_0->vchans[VAR_1];

  FUNC_0(&VAR_2->vc.chan.device_node);
  FUNC_1(&VAR_2->vc.task);
 }
}
