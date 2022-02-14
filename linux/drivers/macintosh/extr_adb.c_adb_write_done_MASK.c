
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adbdev_state {int complete; int lock; int wait_queue; struct adbdev_state* next; struct adbdev_state* completed; int n_pending; int inuse; scalar_t__ reply_len; scalar_t__ arg; } ;
struct adb_request {int complete; int lock; int wait_queue; struct adb_request* next; struct adb_request* completed; int n_pending; int inuse; scalar_t__ reply_len; scalar_t__ arg; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct adbdev_state*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct adb_request *VAR_0)
{
 struct adbdev_state *VAR_1 = (struct adbdev_state *) VAR_0->arg;
 unsigned long VAR_2;

 if (!VAR_0->complete) {
  VAR_0->reply_len = 0;
  VAR_0->complete = 1;
 }
 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(&VAR_1->n_pending);
 if (!VAR_1->inuse) {
  FUNC_2(VAR_0);
  if (FUNC_1(&VAR_1->n_pending) == 0) {
   FUNC_4(&VAR_1->lock, VAR_2);
   FUNC_2(VAR_1);
   return;
  }
 } else {
  struct adb_request **VAR_3 = &VAR_1->completed;
  while (*VAR_3 != ((void*)0))
   VAR_3 = &(*VAR_3)->next;
  VAR_0->next = ((void*)0);
  *VAR_3 = VAR_0;
  FUNC_5(&VAR_1->wait_queue);
 }
 FUNC_4(&VAR_1->lock, VAR_2);
}
