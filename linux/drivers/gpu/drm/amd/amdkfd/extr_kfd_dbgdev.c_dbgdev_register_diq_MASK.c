
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_properties {int type; } ;
struct kfd_dbgdev {struct kernel_queue* kq; int pqm; int dev; } ;
struct kernel_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,struct queue_properties*,unsigned int*) ;
 int FUNC_1 (int ,unsigned int) ;
 struct kernel_queue* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct kfd_dbgdev *VAR_2)
{
 struct queue_properties VAR_3;
 unsigned int VAR_4;
 struct kernel_queue *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_3.type = VAR_1;

 VAR_6 = FUNC_0(VAR_2->pqm, VAR_2->dev, ((void*)0),
    &VAR_3, &VAR_4);

 if (VAR_6) {
  FUNC_4("Failed to create DIQ\n");
  return VAR_6;
 }

 FUNC_3("DIQ Created with queue id: %d\n", VAR_4);

 VAR_5 = FUNC_2(VAR_2->pqm, VAR_4);

 if (!VAR_5) {
  FUNC_4("Error getting DIQ\n");
  FUNC_1(VAR_2->pqm, VAR_4);
  return -VAR_0;
 }

 VAR_2->kq = VAR_5;

 return VAR_6;
}
