
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int outer; TYPE_1__* hash; int inner; } ;
typedef TYPE_2__ cf_hmac_ctx ;
struct TYPE_5__ {int (* digest ) (int *,int *) ;int hashsz; int (* update ) (int *,int *,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(cf_hmac_ctx *VAR_1, uint8_t *VAR_2)
{
  FUNC_0(VAR_1 && VAR_1->hash);
  FUNC_0(*VAR_2);

  uint8_t VAR_3[VAR_0];
  VAR_1->hash->digest(&VAR_1->inner, VAR_3);

  VAR_1->hash->update(&VAR_1->outer, VAR_3, VAR_1->hash->hashsz);
  VAR_1->hash->digest(&VAR_1->outer, VAR_2);

  FUNC_1(VAR_1, sizeof *VAR_1);
}
