
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* prp; int used; int buffer; } ;
typedef TYPE_2__ cf_cbcmac_stream ;
struct TYPE_5__ {int blocksz; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int const*,size_t,int ,TYPE_2__*) ;

void FUNC_1(cf_cbcmac_stream *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
  FUNC_0(VAR_1->buffer, &VAR_1->used, VAR_1->prp->blocksz,
                          VAR_2, VAR_3,
                          VAR_0,
                          VAR_1);
}
