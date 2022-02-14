
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct closure {struct workqueue_struct* wq; int * fn; } ;
typedef int closure_fn ;


 int FUNC_0 (struct closure*) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct closure *VAR_0, closure_fn *VAR_1,
      struct workqueue_struct *VAR_2)
{
 FUNC_0(VAR_0);
 VAR_0->fn = VAR_1;
 VAR_0->wq = VAR_2;

 FUNC_1();
}
