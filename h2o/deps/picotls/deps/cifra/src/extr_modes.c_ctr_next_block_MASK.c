
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int counter_width; scalar_t__ counter_offset; scalar_t__ nonce; int prpctx; TYPE_1__* prp; } ;
typedef TYPE_2__ cf_ctr ;
struct TYPE_3__ {int (* encrypt ) (int ,scalar_t__,int *) ;} ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t *VAR_1)
{
  cf_ctr *VAR_2 = VAR_0;
  VAR_2->prp->encrypt(VAR_2->prpctx, VAR_2->nonce, VAR_1);
  FUNC_0(VAR_2->nonce + VAR_2->counter_offset, VAR_2->counter_width);
}
