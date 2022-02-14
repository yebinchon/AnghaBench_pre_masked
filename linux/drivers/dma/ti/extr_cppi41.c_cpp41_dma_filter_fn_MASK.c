
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dma_chan {TYPE_2__* device; } ;
struct cppi41_dd {struct chan_queues* queues_rx; struct chan_queues* queues_tx; } ;
struct cppi41_channel {scalar_t__ port_num; int q_comp_num; int q_num; scalar_t__ is_tx; struct cppi41_dd* cdd; } ;
struct chan_queues {int complete; int submit; } ;
struct TYPE_6__ {int driver; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int * driver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 struct cppi41_channel* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_4(struct dma_chan *VAR_5, void *VAR_6)
{
 struct cppi41_channel *VAR_7;
 struct cppi41_dd *VAR_8;
 const struct chan_queues *VAR_9;
 u32 *VAR_10 = VAR_6;

 if (VAR_5->device->dev->driver != &VAR_4.driver)
  return 0;

 VAR_7 = FUNC_3(VAR_5);

 if (VAR_7->port_num != VAR_10[VAR_1])
  return 0;

 if (VAR_7->is_tx && !VAR_10[VAR_0])
  return 0;
 VAR_8 = VAR_7->cdd;
 if (VAR_7->is_tx)
  VAR_9 = VAR_8->queues_tx;
 else
  VAR_9 = VAR_8->queues_rx;

 FUNC_1(FUNC_0(VAR_2) !=
       FUNC_0(VAR_3));
 if (FUNC_2(VAR_7->port_num >= FUNC_0(VAR_2)))
  return 0;

 VAR_7->q_num = VAR_9[VAR_7->port_num].submit;
 VAR_7->q_comp_num = VAR_9[VAR_7->port_num].complete;
 return 1;
}
