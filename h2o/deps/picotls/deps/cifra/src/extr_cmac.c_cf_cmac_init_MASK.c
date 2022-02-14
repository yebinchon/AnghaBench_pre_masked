
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* prpctx; TYPE_2__ const* prp; int P; int B; } ;
typedef TYPE_1__ uint8_t ;
struct TYPE_11__ {int blocksz; int (* encrypt ) (void*,TYPE_1__*,TYPE_1__*) ;} ;
typedef TYPE_2__ cf_prp ;
typedef int cf_gf128 ;
typedef TYPE_1__ cf_cmac ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (void*,TYPE_1__*,TYPE_1__*) ;

void FUNC_6(cf_cmac *VAR_1, const cf_prp *VAR_2, void *VAR_3)
{
  uint8_t VAR_4[VAR_0];
  FUNC_0(VAR_2->blocksz == 16);

  FUNC_4(VAR_1, sizeof *VAR_1);


  FUNC_4(VAR_4, VAR_2->blocksz);
  VAR_2->encrypt(VAR_3, VAR_4, VAR_4);


  cf_gf128 VAR_5;
  FUNC_2(VAR_4, VAR_5);
  FUNC_1(VAR_5, VAR_5);
  FUNC_3(VAR_5, VAR_1->B);


  FUNC_1(VAR_5, VAR_5);
  FUNC_3(VAR_5, VAR_1->P);

  VAR_1->prp = VAR_2;
  VAR_1->prpctx = VAR_3;
}
