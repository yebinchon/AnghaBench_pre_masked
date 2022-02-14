
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_cq {scalar_t__ poll_ctx; struct dim* dim; TYPE_2__* device; } ;
struct dim {int work; struct ib_cq* priv; int profile_ix; int tune_state; int state; } ;
struct TYPE_3__ {int modify_cq; } ;
struct TYPE_4__ {int use_cq_dim; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct dim* FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct ib_cq *VAR_6)
{
 struct dim *VAR_7;

 if (!VAR_6->device->ops.modify_cq || !VAR_6->device->use_cq_dim ||
     VAR_6->poll_ctx == VAR_3)
  return;

 VAR_7 = FUNC_1(sizeof(struct dim), VAR_2);
 if (!VAR_7)
  return;

 VAR_7->state = VAR_1;
 VAR_7->tune_state = VAR_0;
 VAR_7->profile_ix = VAR_4;
 VAR_7->priv = VAR_6;
 VAR_6->dim = VAR_7;

 FUNC_0(&VAR_7->work, VAR_5);
}
