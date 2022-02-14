
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cryp {int sgs_copied; int in_sg_len; int out_sg_len; int out_sgl; int * out_sg; int * out_sg_save; int in_sgl; int * in_sg; int total_in; int dev; int hw_blocksize; int total_out; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,int *,int ,int ,int ) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (struct stm32_cryp*) ;

__attribute__((used)) static int FUNC_7(struct stm32_cryp *VAR_2)
{
 void *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_6(VAR_2)) {
  VAR_2->sgs_copied = 0;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_2->total_in, VAR_2->hw_blocksize);
 VAR_5 = VAR_6 ? FUNC_3(VAR_6) : 1;
 VAR_3 = (void *)FUNC_1(VAR_1, VAR_5);

 VAR_7 = FUNC_0(VAR_2->total_out, VAR_2->hw_blocksize);
 VAR_5 = VAR_7 ? FUNC_3(VAR_7) : 1;
 VAR_4 = (void *)FUNC_1(VAR_1, VAR_5);

 if (!VAR_3 || !VAR_4) {
  FUNC_2(VAR_2->dev, "Can't allocate pages when unaligned\n");
  VAR_2->sgs_copied = 0;
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_2->in_sg, 0, VAR_2->total_in, 0);

 FUNC_5(&VAR_2->in_sgl, VAR_3, VAR_6);
 VAR_2->in_sg = &VAR_2->in_sgl;
 VAR_2->in_sg_len = 1;

 FUNC_5(&VAR_2->out_sgl, VAR_4, VAR_7);
 VAR_2->out_sg_save = VAR_2->out_sg;
 VAR_2->out_sg = &VAR_2->out_sgl;
 VAR_2->out_sg_len = 1;

 VAR_2->sgs_copied = 1;

 return 0;
}
