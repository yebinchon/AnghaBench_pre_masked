
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_1__* hash; } ;
struct TYPE_10__ {int reseed_counter; int V; TYPE_3__ hmac; } ;
typedef TYPE_2__ cf_hmac_drbg ;
typedef TYPE_3__ cf_hmac_ctx ;
struct TYPE_9__ {int hashsz; } ;


 size_t FUNC_0 (int ,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*,void const*,size_t,int *,int ,int *,int ) ;
 int FUNC_6 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_7(cf_hmac_drbg *VAR_0,
                               const void *VAR_1, size_t VAR_2,
                               void *VAR_3, size_t VAR_4)
{


  FUNC_1(!FUNC_2(VAR_0));




  if (VAR_2)
    FUNC_5(VAR_0, VAR_1, VAR_2, ((void*)0), 0, ((void*)0), 0);
  uint8_t *VAR_5 = VAR_3;
  cf_hmac_ctx VAR_6;

  while (VAR_4)
  {
    VAR_6 = VAR_0->hmac;
    FUNC_4(&VAR_6, VAR_0->V, VAR_0->hmac.hash->hashsz);
    FUNC_3(&VAR_6, VAR_0->V);

    size_t VAR_7 = FUNC_0(VAR_0->hmac.hash->hashsz, VAR_4);
    FUNC_6(VAR_5, VAR_0->V, VAR_7);
    VAR_5 += VAR_7;
    VAR_4 -= VAR_7;
  }


  FUNC_5(VAR_0, VAR_1, VAR_2, ((void*)0), 0, ((void*)0), 0);


  VAR_0->reseed_counter++;
}
