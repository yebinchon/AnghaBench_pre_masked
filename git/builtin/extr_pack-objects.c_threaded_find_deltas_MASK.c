
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_params {int mutex; scalar_t__ data_ready; int cond; scalar_t__ working; int processed; int depth; int window; scalar_t__ remaining; int list; } ;


 int FUNC_0 (int ,scalar_t__*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void *FUNC_7(void *VAR_1)
{
 struct thread_params *VAR_2 = VAR_1;

 FUNC_1();
 while (VAR_2->remaining) {
  FUNC_2();

  FUNC_0(VAR_2->list, &VAR_2->remaining,
       VAR_2->window, VAR_2->depth, VAR_2->processed);

  FUNC_1();
  VAR_2->working = 0;
  FUNC_3(&VAR_0);
  FUNC_2();
  FUNC_5(&VAR_2->mutex);
  while (!VAR_2->data_ready)
   FUNC_4(&VAR_2->cond, &VAR_2->mutex);
  VAR_2->data_ready = 0;
  FUNC_6(&VAR_2->mutex);

  FUNC_1();
 }
 FUNC_2();

 return ((void*)0);
}
