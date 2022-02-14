
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int block; int prpctx; TYPE_1__* prp; } ;
typedef TYPE_2__ cf_cbc ;
struct TYPE_4__ {size_t blocksz; int (* encrypt ) (int ,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int const*,int ,size_t) ;

void FUNC_3(cf_cbc *VAR_1, const uint8_t *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
  uint8_t VAR_5[VAR_0];
  size_t VAR_6 = VAR_1->prp->blocksz;

  while (VAR_4--)
  {
    FUNC_2(VAR_5, VAR_2, VAR_1->block, VAR_6);
    VAR_1->prp->encrypt(VAR_1->prpctx, VAR_5, VAR_1->block);
    FUNC_0(VAR_3, VAR_1->block, VAR_6);
    VAR_2 += VAR_6;
    VAR_3 += VAR_6;
  }
}
