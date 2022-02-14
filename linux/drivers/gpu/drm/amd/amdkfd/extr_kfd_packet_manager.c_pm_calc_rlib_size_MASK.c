
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet_manager {TYPE_1__* pmf; TYPE_2__* dqm; } ;
struct kfd_dev {int max_proc_per_quantum; } ;
struct TYPE_4__ {unsigned int processes_count; unsigned int queue_count; unsigned int sdma_queue_count; unsigned int xgmi_sdma_queue_count; struct kfd_dev* dev; } ;
struct TYPE_3__ {unsigned int map_queues_size; unsigned int map_process_size; scalar_t__ runlist_size; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct packet_manager *VAR_0,
    unsigned int *VAR_1,
    bool *VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7 = 1;
 struct kfd_dev *VAR_8 = VAR_0->dqm->dev;

 VAR_3 = VAR_0->dqm->processes_count;
 VAR_4 = VAR_0->dqm->queue_count;
 VAR_5 = VAR_4 - VAR_0->dqm->sdma_queue_count -
    VAR_0->dqm->xgmi_sdma_queue_count;






 *VAR_2 = 0;

 if (VAR_8->max_proc_per_quantum > 1)
  VAR_7 = VAR_8->max_proc_per_quantum;

 if ((VAR_3 > VAR_7) ||
     VAR_5 > FUNC_0(VAR_0->dqm)) {
  *VAR_2 = 1;
  FUNC_1("Over subscribed runlist\n");
 }

 VAR_6 = VAR_0->pmf->map_queues_size;

 *VAR_1 = VAR_3 * VAR_0->pmf->map_process_size +
       VAR_4 * VAR_6;





 if (*VAR_2)
  *VAR_1 += VAR_0->pmf->runlist_size;

 FUNC_1("runlist ib size %d\n", *VAR_1);
}
