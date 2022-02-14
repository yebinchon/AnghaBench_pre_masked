
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* prp; int nkeymat; int keymat; } ;
typedef TYPE_2__ cf_ctr ;
struct TYPE_5__ {int blocksz; } ;


 int FUNC_0 (int ,int *,int ,int const*,int *,size_t,int ,TYPE_2__*) ;
 int VAR_0 ;

void FUNC_1(cf_ctr *VAR_1, const uint8_t *VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
  FUNC_0(VAR_1->keymat, &VAR_1->nkeymat,
                   VAR_1->prp->blocksz,
                   VAR_2, VAR_3, VAR_4,
                   VAR_0,
                   VAR_1);
}
