
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reseed_counter; } ;
typedef TYPE_1__ cf_hmac_drbg ;


 int FUNC_0 (TYPE_1__*,void const*,size_t,void const*,size_t,int *,int ) ;

void FUNC_1(cf_hmac_drbg *VAR_0,
                         const void *VAR_1, size_t VAR_2,
                         const void *VAR_3, size_t VAR_4)
{


  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), 0);


  VAR_0->reseed_counter = 1;
}
