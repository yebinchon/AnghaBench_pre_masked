
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_queue {size_t rear; struct pending_entry* head; } ;
struct pending_entry {int busy; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct pending_entry *FUNC_1(struct pending_queue *VAR_0,
          int VAR_1)
{
 struct pending_entry *VAR_2 = ((void*)0);

 VAR_2 = &VAR_0->head[VAR_0->rear];
 if (FUNC_0(VAR_2->busy)) {
  VAR_2 = ((void*)0);
  goto no_free_entry;
 }

 VAR_0->rear++;
 if (FUNC_0(VAR_0->rear == VAR_1))
  VAR_0->rear = 0;

no_free_entry:
 return VAR_2;
}
