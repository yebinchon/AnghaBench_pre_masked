
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu_state {int nr_bos; TYPE_1__* registers; TYPE_1__* cmd; TYPE_1__* comm; TYPE_1__* bos; TYPE_2__* ring; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct msm_gpu_state *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->ring); VAR_1++)
  FUNC_2(VAR_0->ring[VAR_1].data);

 for (VAR_1 = 0; VAR_0->bos && VAR_1 < VAR_0->nr_bos; VAR_1++)
  FUNC_2(VAR_0->bos[VAR_1].data);

 FUNC_1(VAR_0->bos);
 FUNC_1(VAR_0->comm);
 FUNC_1(VAR_0->cmd);
 FUNC_1(VAR_0->registers);
}
