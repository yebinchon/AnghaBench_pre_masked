
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int reseed_counter; int hmac; int * V; } ;
typedef TYPE_1__ cf_hmac_drbg ;
struct TYPE_9__ {int hashsz; } ;
typedef TYPE_2__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__ const*,int *,int) ;
 int FUNC_2 (TYPE_1__*,void const*,size_t,void const*,size_t,void const*,size_t) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int,int) ;

void FUNC_5(cf_hmac_drbg *VAR_1,
                       const cf_chash *VAR_2,
                       const void *VAR_3, size_t VAR_4,
                       const void *VAR_5, size_t VAR_6,
                       const void *VAR_7, size_t VAR_8)
{
  FUNC_3(VAR_1, sizeof *VAR_1);

  FUNC_0(VAR_2->hashsz <= VAR_0);



  uint8_t VAR_9[VAR_0];
  FUNC_4(VAR_9, 0x00, VAR_2->hashsz);
  FUNC_4(VAR_1->V, 0x01, VAR_2->hashsz);
  FUNC_1(&VAR_1->hmac, VAR_2, VAR_9, VAR_2->hashsz);



  FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);


  VAR_1->reseed_counter = 1;
}
