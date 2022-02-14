
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ reseed_counter; } ;
typedef TYPE_1__ cf_hmac_drbg ;



uint32_t FUNC_0(const cf_hmac_drbg *VAR_0)
{
  return VAR_0->reseed_counter == 0;
}
