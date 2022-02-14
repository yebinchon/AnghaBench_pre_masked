
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ used; scalar_t__ buffer; TYPE_1__* prp; } ;
typedef TYPE_2__ cf_cbcmac_stream ;
struct TYPE_5__ {scalar_t__ blocksz; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

void FUNC_2(cf_cbcmac_stream *VAR_0)
{
  if (VAR_0->used == 0)
    return;

  FUNC_1(VAR_0->buffer + VAR_0->used, 0, VAR_0->prp->blocksz - VAR_0->used);
  FUNC_0(VAR_0, VAR_0->buffer);
  VAR_0->used = 0;
}
