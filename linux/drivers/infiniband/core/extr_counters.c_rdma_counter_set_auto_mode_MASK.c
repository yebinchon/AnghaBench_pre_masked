
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct rdma_port_counter {int lock; TYPE_2__ mode; scalar_t__ num_counters; int hstats; } ;
struct ib_device {TYPE_1__* port_data; } ;
typedef enum rdma_nl_counter_mask { ____Placeholder_rdma_nl_counter_mask } rdma_nl_counter_mask ;
struct TYPE_3__ {struct rdma_port_counter port_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ib_device *VAR_5, u8 VAR_6,
          bool VAR_7, enum rdma_nl_counter_mask VAR_8)
{
 struct rdma_port_counter *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_5->port_data[VAR_6].port_counter;
 if (!VAR_9->hstats)
  return -VAR_1;

 FUNC_1(&VAR_9->lock);
 if (VAR_7) {
  VAR_10 = FUNC_0(&VAR_9->mode,
      VAR_2, VAR_8);
 } else {
  if (VAR_9->mode.mode != VAR_2) {
   VAR_10 = -VAR_0;
   goto out;
  }

  if (VAR_9->num_counters)
   VAR_10 = FUNC_0(&VAR_9->mode,
       VAR_3, 0);
  else
   VAR_10 = FUNC_0(&VAR_9->mode,
       VAR_4, 0);
 }

out:
 FUNC_2(&VAR_9->lock);
 return VAR_10;
}
