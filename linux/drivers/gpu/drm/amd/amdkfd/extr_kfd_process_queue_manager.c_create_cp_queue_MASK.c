
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_properties {unsigned int queue_id; scalar_t__ vmid; int * doorbell_ptr; } ;
struct queue {int process; struct kfd_dev* device; } ;
struct process_queue_manager {int process; } ;
struct kfd_dev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct queue**,struct queue_properties*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct process_queue_manager *VAR_0,
    struct kfd_dev *VAR_1, struct queue **VAR_2,
    struct queue_properties *VAR_3,
    struct file *VAR_4, unsigned int VAR_5)
{
 int VAR_6;


 VAR_3->doorbell_ptr = ((void*)0);


 VAR_3->vmid = 0;
 VAR_3->queue_id = VAR_5;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (VAR_6 != 0)
  return VAR_6;

 (*VAR_2)->device = VAR_1;
 (*VAR_2)->process = VAR_0->process;

 FUNC_1("PQM After init queue");

 return VAR_6;
}
