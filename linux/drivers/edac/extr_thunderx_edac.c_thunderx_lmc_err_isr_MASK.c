
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunderx_lmc {scalar_t__ regs; int ecc_int; int ring_head; struct lmc_err_ctx* err_ctx; } ;
struct mem_ctl_info {struct thunderx_lmc* pvt_info; } ;
struct lmc_err_ctx {int reg_int; void* reg_ecc_synd; void* reg_scram_fadr; void* reg_nxm_fadr; void* reg_fadr; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct lmc_err_ctx*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct mem_ctl_info *VAR_11 = VAR_10;
 struct thunderx_lmc *VAR_12 = VAR_11->pvt_info;

 unsigned long VAR_13 = FUNC_3(VAR_12->ring_head, FUNC_0(VAR_12->err_ctx));
 struct lmc_err_ctx *VAR_14 = &VAR_12->err_ctx[VAR_13];

 FUNC_4(0, VAR_12->regs + VAR_1);
 FUNC_4(0, VAR_12->regs + VAR_2);
 FUNC_4(0x2, VAR_12->regs + VAR_3);

 VAR_14->reg_int = FUNC_2(VAR_12->regs + VAR_6);
 VAR_14->reg_fadr = FUNC_2(VAR_12->regs + VAR_5);
 VAR_14->reg_nxm_fadr = FUNC_2(VAR_12->regs + VAR_7);
 VAR_14->reg_scram_fadr = FUNC_2(VAR_12->regs + VAR_8);
 VAR_14->reg_ecc_synd = FUNC_2(VAR_12->regs + VAR_4);

 VAR_12->ring_head++;

 FUNC_1(&VAR_12->ecc_int, 1);


 FUNC_4(VAR_14->reg_int, VAR_12->regs + VAR_6);

 return VAR_0;
}
