
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kyber_hctx_data {int * kcq_map; } ;
struct flush_kcq_data {unsigned int sched_domain; struct list_head* list; struct kyber_hctx_data* khd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct flush_kcq_data*) ;

__attribute__((used)) static void FUNC_1(struct kyber_hctx_data *VAR_1,
      unsigned int VAR_2,
      struct list_head *VAR_3)
{
 struct flush_kcq_data VAR_4 = {
  .khd = VAR_1,
  .sched_domain = VAR_2,
  .list = VAR_3,
 };

 FUNC_0(&VAR_1->kcq_map[VAR_2],
        VAR_0, &VAR_4);
}
