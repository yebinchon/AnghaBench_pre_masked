
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct camdd_dev {int cur_active_io; int num_run_queue; scalar_t__ num_peer_work_queue; scalar_t__ num_peer_done_queue; int blocksize; int peer_bytes_queued; } ;



void
FUNC_0(struct camdd_dev *VAR_0, uint32_t *VAR_1,
  uint32_t *VAR_2, uint32_t *VAR_3, uint32_t *VAR_4)
{
 *VAR_1 = VAR_0->cur_active_io + VAR_0->num_run_queue;
 if (VAR_0->num_peer_work_queue >
     VAR_0->num_peer_done_queue)
  *VAR_2 = VAR_0->num_peer_work_queue -
         VAR_0->num_peer_done_queue;
 else
  *VAR_2 = 0;
 *VAR_3 = *VAR_1 * VAR_0->blocksize;
 *VAR_4 = VAR_0->peer_bytes_queued;
}
