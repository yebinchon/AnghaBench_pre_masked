
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_cryp {TYPE_1__* ctx; } ;
struct TYPE_2__ {int keylen; int * key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 int FUNC_2 (struct stm32_cryp*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct stm32_cryp *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_3)) {
  FUNC_2(VAR_3, VAR_0, FUNC_0(VAR_3->ctx->key[0]));
  FUNC_2(VAR_3, VAR_1, FUNC_0(VAR_3->ctx->key[1]));
 } else {
  VAR_5 = VAR_2;
  for (VAR_4 = VAR_3->ctx->keylen / sizeof(u32); VAR_4 > 0; VAR_4--, VAR_5 -= 4)
   FUNC_2(VAR_3, VAR_5,
      FUNC_0(VAR_3->ctx->key[VAR_4 - 1]));
 }
}
