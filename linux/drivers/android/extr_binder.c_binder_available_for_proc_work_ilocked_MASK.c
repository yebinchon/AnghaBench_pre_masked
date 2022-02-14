
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_thread {int looper; int todo; int transaction_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct binder_thread *VAR_2)
{
 return !VAR_2->transaction_stack &&
  FUNC_0(&VAR_2->todo) &&
  (VAR_2->looper & (VAR_0 |
       VAR_1));
}
