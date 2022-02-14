
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tcd; scalar_t__ inth; scalar_t__ errh; scalar_t__ eeih; scalar_t__ erqh; scalar_t__ errl; scalar_t__ intl; scalar_t__ cdne; scalar_t__ ssrt; scalar_t__ cerr; scalar_t__ cint; scalar_t__ ceei; scalar_t__ seei; scalar_t__ cerq; scalar_t__ serq; scalar_t__ eeil; scalar_t__ erql; scalar_t__ es; scalar_t__ cr; } ;
struct fsl_edma_engine {scalar_t__ membase; TYPE_2__ regs; TYPE_1__* drvdata; } ;
struct TYPE_3__ {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;

void FUNC_0(struct fsl_edma_engine *VAR_30)
{
 VAR_30->regs.cr = VAR_30->membase + VAR_19;
 VAR_30->regs.es = VAR_30->membase + VAR_23;
 VAR_30->regs.erql = VAR_30->membase + VAR_21;
 VAR_30->regs.eeil = VAR_30->membase + VAR_20;

 VAR_30->regs.serq = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_12 : VAR_26);
 VAR_30->regs.cerq = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_2 : VAR_16);
 VAR_30->regs.seei = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_11 : VAR_25);
 VAR_30->regs.ceei = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_1 : VAR_15);
 VAR_30->regs.cint = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_4 : VAR_18);
 VAR_30->regs.cerr = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_3 : VAR_17);
 VAR_30->regs.ssrt = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_13 : VAR_27);
 VAR_30->regs.cdne = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_0 : VAR_14);
 VAR_30->regs.intl = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_10 : VAR_24);
 VAR_30->regs.errl = VAR_30->membase + ((VAR_30->drvdata->version == VAR_29) ?
   VAR_8 : VAR_22);

 if (VAR_30->drvdata->version == VAR_29) {
  VAR_30->regs.erqh = VAR_30->membase + VAR_6;
  VAR_30->regs.eeih = VAR_30->membase + VAR_5;
  VAR_30->regs.errh = VAR_30->membase + VAR_7;
  VAR_30->regs.inth = VAR_30->membase + VAR_9;
 }

 VAR_30->regs.tcd = VAR_30->membase + VAR_28;
}
