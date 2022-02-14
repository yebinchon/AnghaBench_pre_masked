
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ evicted; int * pqm; int dqm; int priv_queue_list; int queues_list; } ;
struct kfd_process_device {int already_dequeued; int alloc_idr; int per_device_list; int bound; struct kfd_process* process; TYPE_1__ qpd; struct kfd_dev* dev; } ;
struct kfd_process {int per_device_data; int pqm; } ;
struct kfd_dev {int dqm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct kfd_dev*) ;
 int FUNC_3 (struct kfd_process_device*) ;
 struct kfd_process_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;

struct kfd_process_device *FUNC_7(struct kfd_dev *VAR_2,
       struct kfd_process *VAR_3)
{
 struct kfd_process_device *VAR_4 = ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_2(&VAR_4->qpd, VAR_2)) {
  FUNC_6("Failed to init doorbell for process\n");
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 VAR_4->dev = VAR_2;
 FUNC_0(&VAR_4->qpd.queues_list);
 FUNC_0(&VAR_4->qpd.priv_queue_list);
 VAR_4->qpd.dqm = VAR_2->dqm;
 VAR_4->qpd.pqm = &VAR_3->pqm;
 VAR_4->qpd.evicted = 0;
 VAR_4->process = VAR_3;
 VAR_4->bound = VAR_1;
 VAR_4->already_dequeued = 0;
 FUNC_5(&VAR_4->per_device_list, &VAR_3->per_device_data);


 FUNC_1(&VAR_4->alloc_idr);

 return VAR_4;
}
