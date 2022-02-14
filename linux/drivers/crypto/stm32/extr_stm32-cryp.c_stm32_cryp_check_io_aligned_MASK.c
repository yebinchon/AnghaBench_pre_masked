
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cryp {int hw_blocksize; int total_out; int out_sg; int total_in; int in_sg; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct stm32_cryp *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->in_sg, VAR_0->total_in,
           VAR_0->hw_blocksize);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0->out_sg, VAR_0->total_out,
           VAR_0->hw_blocksize);

 return VAR_1;
}
