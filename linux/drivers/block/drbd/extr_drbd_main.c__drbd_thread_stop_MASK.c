
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_thread {scalar_t__ t_state; int stop; int t_lock; int * task; } ;
typedef enum drbd_thread_state { ____Placeholder_drbd_thread_state } drbd_thread_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct drbd_thread*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct drbd_thread *VAR_5, int VAR_6, int VAR_7)
{
 unsigned long VAR_8;

 enum drbd_thread_state VAR_9 = VAR_6 ? VAR_3 : VAR_1;


 FUNC_4(&VAR_5->t_lock, VAR_8);

 if (VAR_5->t_state == VAR_2) {
  FUNC_5(&VAR_5->t_lock, VAR_8);
  if (VAR_6)
   FUNC_0(VAR_5);
  return;
 }

 if (VAR_5->t_state != VAR_9) {
  if (VAR_5->task == ((void*)0)) {
   FUNC_5(&VAR_5->t_lock, VAR_8);
   return;
  }

  VAR_5->t_state = VAR_9;
  FUNC_3();
  FUNC_1(&VAR_5->stop);
  if (VAR_5->task != VAR_4)
   FUNC_2(VAR_0, VAR_5->task, 1);
 }

 FUNC_5(&VAR_5->t_lock, VAR_8);

 if (VAR_7)
  FUNC_6(&VAR_5->stop);
}
