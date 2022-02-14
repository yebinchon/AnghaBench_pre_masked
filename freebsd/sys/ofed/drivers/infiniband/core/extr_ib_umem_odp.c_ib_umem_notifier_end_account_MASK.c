
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_umem {TYPE_1__* odp_data; } ;
struct TYPE_2__ {scalar_t__ notifiers_count; int umem_mutex; int notifier_completion; int notifiers_seq; scalar_t__ mn_counters_active; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ib_umem *VAR_0)
{
 FUNC_1(&VAR_0->odp_data->umem_mutex);



 if (VAR_0->odp_data->mn_counters_active) {





  ++VAR_0->odp_data->notifiers_seq;
  if (--VAR_0->odp_data->notifiers_count == 0)
   FUNC_0(&VAR_0->odp_data->notifier_completion);
 }
 FUNC_2(&VAR_0->odp_data->umem_mutex);
}
