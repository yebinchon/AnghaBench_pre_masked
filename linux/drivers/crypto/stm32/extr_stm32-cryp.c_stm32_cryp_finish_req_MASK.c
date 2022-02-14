
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_cryp {TYPE_1__* ctx; int req; int engine; int areq; int dev; int hw_blocksize; int total_out_save; int total_in_save; int out_sg_save; int out_sgl; int in_sgl; scalar_t__ sgs_copied; } ;
struct TYPE_2__ {int keylen; int key; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct stm32_cryp*) ;
 scalar_t__ FUNC_6 (struct stm32_cryp*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*,int ,int ,int ,int) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (struct stm32_cryp*) ;
 int FUNC_13 (struct stm32_cryp*) ;

__attribute__((used)) static void FUNC_14(struct stm32_cryp *VAR_0, int VAR_1)
{
 if (!VAR_1 && (FUNC_6(VAR_0) || FUNC_5(VAR_0)))

  VAR_1 = FUNC_13(VAR_0);

 if (!VAR_1 && (!(FUNC_6(VAR_0) || FUNC_5(VAR_0))))
  FUNC_12(VAR_0);

 if (VAR_0->sgs_copied) {
  void *VAR_2, *VAR_3;
  int VAR_4, VAR_5;

  VAR_2 = FUNC_11(&VAR_0->in_sgl);
  VAR_3 = FUNC_11(&VAR_0->out_sgl);

  FUNC_10(VAR_3, VAR_0->out_sg_save, 0,
       VAR_0->total_out_save, 1);

  VAR_5 = FUNC_0(VAR_0->total_in_save, VAR_0->hw_blocksize);
  VAR_4 = VAR_5 ? FUNC_4(VAR_5) : 1;
  FUNC_3((unsigned long)VAR_2, VAR_4);

  VAR_5 = FUNC_0(VAR_0->total_out_save, VAR_0->hw_blocksize);
  VAR_4 = VAR_5 ? FUNC_4(VAR_5) : 1;
  FUNC_3((unsigned long)VAR_3, VAR_4);
 }

 FUNC_8(VAR_0->dev);
 FUNC_9(VAR_0->dev);

 if (FUNC_6(VAR_0) || FUNC_5(VAR_0))
  FUNC_2(VAR_0->engine, VAR_0->areq, VAR_1);
 else
  FUNC_1(VAR_0->engine, VAR_0->req,
         VAR_1);

 FUNC_7(VAR_0->ctx->key, 0, VAR_0->ctx->keylen);
}
