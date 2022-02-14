
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umem_odp {scalar_t__ notifiers_count; int umem_mutex; int notifier_completion; int notifiers_seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ib_umem_odp *VAR_0)
{
 FUNC_1(&VAR_0->umem_mutex);




 ++VAR_0->notifiers_seq;
 if (--VAR_0->notifiers_count == 0)
  FUNC_0(&VAR_0->notifier_completion);
 FUNC_2(&VAR_0->umem_mutex);
}
