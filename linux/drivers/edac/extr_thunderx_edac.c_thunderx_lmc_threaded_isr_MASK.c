
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thunderx_lmc {int ring_tail; TYPE_1__* pdev; struct lmc_err_ctx* err_ctx; int ring_head; } ;
struct mem_ctl_info {struct thunderx_lmc* pvt_info; } ;
struct lmc_err_ctx {int reg_int; int reg_fadr; int reg_nxm_fadr; int reg_scram_fadr; int reg_ecc_synd; } ;
typedef int phys_addr_t ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct lmc_err_ctx*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char*,int ,int ,int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int ,struct mem_ctl_info*,int,int ,int ,int ,int,int,int,char*,char*) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ,int ) ;
 int VAR_9 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 unsigned long FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_16 (int,struct thunderx_lmc*) ;

__attribute__((used)) static irqreturn_t FUNC_17(int VAR_10, void *VAR_11)
{
 struct mem_ctl_info *VAR_12 = VAR_11;
 struct thunderx_lmc *VAR_13 = VAR_12->pvt_info;
 phys_addr_t VAR_14;

 unsigned long VAR_15;
 struct lmc_err_ctx *VAR_16;

 irqreturn_t VAR_17 = VAR_4;

 char *VAR_18;
 char *VAR_19;

 VAR_18 = FUNC_11(VAR_7, VAR_0);
 VAR_19 = FUNC_11(VAR_8, VAR_0);

 if (!VAR_18 || !VAR_19)
  goto err_free;

 while (FUNC_1(VAR_13->ring_head, VAR_13->ring_tail,
  FUNC_0(VAR_13->err_ctx))) {
  VAR_15 = FUNC_14(VAR_13->ring_tail, FUNC_0(VAR_13->err_ctx));

  VAR_16 = &VAR_13->err_ctx[VAR_15];

  FUNC_8(&VAR_13->pdev->dev, "LMC_INT: %016llx\n",
   VAR_16->reg_int);
  FUNC_8(&VAR_13->pdev->dev, "LMC_FADR: %016llx\n",
   VAR_16->reg_fadr);
  FUNC_8(&VAR_13->pdev->dev, "LMC_NXM_FADR: %016llx\n",
   VAR_16->reg_nxm_fadr);
  FUNC_8(&VAR_13->pdev->dev, "LMC_SCRAM_FADR: %016llx\n",
   VAR_16->reg_scram_fadr);
  FUNC_8(&VAR_13->pdev->dev, "LMC_ECC_SYND: %016llx\n",
   VAR_16->reg_ecc_synd);

  FUNC_15(VAR_18, VAR_7,
    "DIMM %lld rank %lld bank %lld row %lld col %lld",
    FUNC_5(VAR_16->reg_scram_fadr),
    FUNC_3(VAR_16->reg_scram_fadr),
    FUNC_2(VAR_16->reg_scram_fadr),
    FUNC_6(VAR_16->reg_scram_fadr),
    FUNC_4(VAR_16->reg_scram_fadr));

  FUNC_7(VAR_19, VAR_8, VAR_9,
    VAR_16->reg_int);

  VAR_14 = FUNC_16(VAR_16->reg_fadr, VAR_13);

  if (VAR_16->reg_int & VAR_6)
   FUNC_9(VAR_2, VAR_12, 1,
          FUNC_13(VAR_14),
          FUNC_12(VAR_14),
          0, -1, -1, -1, VAR_18, VAR_19);
  else if (VAR_16->reg_int & VAR_5)
   FUNC_9(VAR_1, VAR_12, 1,
          FUNC_13(VAR_14),
          FUNC_12(VAR_14),
          0, -1, -1, -1, VAR_18, VAR_19);

  VAR_13->ring_tail++;
 }

 VAR_17 = VAR_3;

err_free:
 FUNC_10(VAR_18);
 FUNC_10(VAR_19);

 return VAR_17;
}
