
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int wait; int waiting_thread_node; struct binder_proc* proc; } ;
struct binder_proc {int waiting_threads; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct binder_thread*,int) ;
 int FUNC_2 (struct binder_proc*) ;
 int FUNC_3 (struct binder_proc*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_12(struct binder_thread *VAR_4,
    bool VAR_5)
{
 FUNC_0(VAR_3);
 struct binder_proc *VAR_6 = VAR_4->proc;
 int VAR_7 = 0;

 FUNC_6();
 FUNC_2(VAR_6);
 for (;;) {
  FUNC_9(&VAR_4->wait, &VAR_3, VAR_1);
  if (FUNC_1(VAR_4, VAR_5))
   break;
  if (VAR_5)
   FUNC_7(&VAR_4->waiting_thread_node,
     &VAR_6->waiting_threads);
  FUNC_3(VAR_6);
  FUNC_10();
  FUNC_2(VAR_6);
  FUNC_8(&VAR_4->waiting_thread_node);
  if (FUNC_11(VAR_2)) {
   VAR_7 = -VAR_0;
   break;
  }
 }
 FUNC_4(&VAR_4->wait, &VAR_3);
 FUNC_3(VAR_6);
 FUNC_5();

 return VAR_7;
}
