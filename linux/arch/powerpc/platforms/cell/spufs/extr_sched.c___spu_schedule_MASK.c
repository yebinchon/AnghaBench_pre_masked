
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int run_wq; } ;
struct spu {int node; int alloc_state; int * ctx; } ;
struct TYPE_2__ {int list_mutex; int nr_active; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu*,struct spu_context*) ;
 int FUNC_4 (struct spu_context*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct spu *VAR_2, struct spu_context *VAR_3)
{
 int VAR_4 = VAR_2->node;
 int VAR_5 = 0;

 FUNC_4(VAR_3);

 FUNC_0(&VAR_1[VAR_4].list_mutex);
 if (VAR_2->ctx == ((void*)0)) {
  FUNC_3(VAR_2, VAR_3);
  VAR_1[VAR_4].nr_active++;
  VAR_2->alloc_state = VAR_0;
  VAR_5 = 1;
 }
 FUNC_1(&VAR_1[VAR_4].list_mutex);

 if (VAR_5)
  FUNC_5(&VAR_3->run_wq);
 else
  FUNC_2(VAR_3);
}
