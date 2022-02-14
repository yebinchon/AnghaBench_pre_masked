
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process_queue_node {struct kernel_queue* kq; } ;
struct process_queue_manager {int dummy; } ;
struct kernel_queue {int dummy; } ;


 struct process_queue_node* FUNC_0 (struct process_queue_manager*,unsigned int) ;

struct kernel_queue *FUNC_1(
     struct process_queue_manager *VAR_0,
     unsigned int VAR_1)
{
 struct process_queue_node *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && VAR_2->kq)
  return VAR_2->kq;

 return ((void*)0);
}
