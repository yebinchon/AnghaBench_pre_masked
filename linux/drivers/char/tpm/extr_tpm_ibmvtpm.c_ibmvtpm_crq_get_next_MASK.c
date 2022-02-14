
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvtpm_crq_queue {size_t index; size_t num_entry; struct ibmvtpm_crq* crq_addr; } ;
struct ibmvtpm_dev {struct ibmvtpm_crq_queue crq_queue; } ;
struct ibmvtpm_crq {int valid; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static struct ibmvtpm_crq *FUNC_1(struct ibmvtpm_dev *VAR_1)
{
 struct ibmvtpm_crq_queue *VAR_2 = &VAR_1->crq_queue;
 struct ibmvtpm_crq *VAR_3 = &VAR_2->crq_addr[VAR_2->index];

 if (VAR_3->valid & VAR_0) {
  if (++VAR_2->index == VAR_2->num_entry)
   VAR_2->index = 0;
  FUNC_0();
 } else
  VAR_3 = ((void*)0);
 return VAR_3;
}
