
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pdc_state {int rx_status_len; scalar_t__ pdc_resp_hdr_len; struct pdc_state* pdc_reg_vbase; struct pdc_regs* regs; void* nrxpost; void* ntxpost; void* nrxd; void* ntxd; struct dma64_regs* rxregs_64; struct dma64_regs* txregs_64; struct pdc_state* pdc_idx; struct platform_device* pdev; } ;
struct pdc_regs {struct dma64* dmaregs; struct pdc_state intmask; } ;
struct dma64_regs {int dummy; } ;
struct TYPE_4__ {struct pdc_state ptr; struct pdc_state control; } ;
struct TYPE_3__ {struct pdc_state ptr; struct pdc_state control; } ;
struct dma64 {TYPE_2__ dmarcv; TYPE_1__ dmaxmt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct device*,char*,struct pdc_state*) ;
 int FUNC_1 (scalar_t__,struct pdc_state*) ;

__attribute__((used)) static
void FUNC_2(struct pdc_state *VAR_9)
{
 struct platform_device *VAR_10;
 struct device *VAR_11;
 struct dma64 *VAR_12;
 int VAR_13 = VAR_2;

 VAR_10 = VAR_9->pdev;
 VAR_11 = &VAR_10->dev;

 FUNC_0(VAR_11, "PDC %u initial values:", VAR_9->pdc_idx);
 FUNC_0(VAR_11, "state structure:                   %p",
  VAR_9);
 FUNC_0(VAR_11, " - base virtual addr of hw regs    %p",
  VAR_9->pdc_reg_vbase);


 VAR_9->regs = (struct pdc_regs *)VAR_9->pdc_reg_vbase;
 VAR_9->txregs_64 = (struct dma64_regs *)
     (((u8 *)VAR_9->pdc_reg_vbase) +
       VAR_7 + (sizeof(struct dma64) * VAR_13));
 VAR_9->rxregs_64 = (struct dma64_regs *)
     (((u8 *)VAR_9->pdc_reg_vbase) +
       VAR_4 + (sizeof(struct dma64) * VAR_13));

 VAR_9->ntxd = VAR_3;
 VAR_9->nrxd = VAR_3;
 VAR_9->ntxpost = VAR_3 - 1;
 VAR_9->nrxpost = VAR_3 - 1;
 FUNC_1(0, &VAR_9->regs->intmask);

 VAR_12 = &VAR_9->regs->dmaregs[VAR_13];


 FUNC_1(VAR_8, &VAR_12->dmaxmt.control);

 FUNC_1(VAR_5 + (VAR_9->rx_status_len << 1),
    &VAR_12->dmarcv.control);


 FUNC_1(0, &VAR_12->dmaxmt.ptr);
 FUNC_1(0, &VAR_12->dmarcv.ptr);

 if (VAR_9->pdc_resp_hdr_len == VAR_6)
  FUNC_1(VAR_0,
     VAR_9->pdc_reg_vbase + VAR_1);
}
