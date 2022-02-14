
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inner; TYPE_1__* hash; } ;
typedef TYPE_2__ cf_hmac_ctx ;
struct TYPE_4__ {int (* update ) (int *,void const*,size_t) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,size_t) ;

void FUNC_2(cf_hmac_ctx *VAR_0, const void *VAR_1, size_t VAR_2)
{
  FUNC_0(VAR_0 && VAR_0->hash);

  VAR_0->hash->update(&VAR_0->inner, VAR_1, VAR_2);
}
