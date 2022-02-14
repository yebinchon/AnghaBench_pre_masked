
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spu {size_t node; TYPE_1__* ctx; } ;
struct TYPE_4__ {int list_mutex; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct spu *VAR_2)
{
 FUNC_0(!FUNC_1(&VAR_1[VAR_2->node].list_mutex));

 return (!VAR_2->ctx || !(VAR_2->ctx->flags & VAR_0));
}
