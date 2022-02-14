
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int invol_ctx_switch; } ;
struct spu_context {TYPE_2__ stats; } ;
struct TYPE_4__ {int invol_ctx_switch; } ;
struct spu {int node; TYPE_1__ stats; int alloc_state; } ;
struct TYPE_6__ {int list_mutex; int nr_active; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct spu*,struct spu_context*) ;

__attribute__((used)) static void FUNC_3(struct spu *VAR_2, struct spu_context *VAR_3,
  int VAR_4)
{
 int VAR_5 = VAR_2->node;

 FUNC_0(&VAR_1[VAR_5].list_mutex);
 VAR_1[VAR_5].nr_active--;
 if (VAR_4)
  VAR_2->alloc_state = VAR_0;
 FUNC_2(VAR_2, VAR_3);
 VAR_3->stats.invol_ctx_switch++;
 VAR_2->stats.invol_ctx_switch++;
 FUNC_1(&VAR_1[VAR_5].list_mutex);
}
