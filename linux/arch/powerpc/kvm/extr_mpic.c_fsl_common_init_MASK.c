
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct openpic {int vector_mask; int idr_reset; int max_irq; int irq_ipi0; int irq_tim0; int irq_msi; TYPE_2__* src; TYPE_1__* fsl; int ivpr_reset; scalar_t__ tfrr_reset; int vir; int vid; } ;
struct TYPE_4__ {int level; int type; } ;
struct TYPE_3__ {int max_ext; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct openpic*,int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_2(struct openpic *VAR_11)
{
 int VAR_12;
 int VAR_13 = VAR_5;

 FUNC_1(VAR_11, &VAR_9);
 FUNC_1(VAR_11, &VAR_10);

 VAR_11->vid = VAR_7;
 VAR_11->vir = VAR_8;
 VAR_11->vector_mask = 0xFFFF;
 VAR_11->tfrr_reset = 0;
 VAR_11->ivpr_reset = VAR_2;
 VAR_11->idr_reset = 1 << 0;
 VAR_11->max_irq = VAR_4;

 VAR_11->irq_ipi0 = VAR_13;
 VAR_13 += VAR_3;
 VAR_11->irq_tim0 = VAR_13;
 VAR_13 += VAR_6;

 FUNC_0(VAR_13 > VAR_4);

 VAR_11->irq_msi = 224;

 for (VAR_12 = 0; VAR_12 < VAR_11->fsl->max_ext; VAR_12++)
  VAR_11->src[VAR_12].level = 0;


 for (VAR_12 = 16; VAR_12 < VAR_5; VAR_12++) {
  VAR_11->src[VAR_12].type = VAR_0;
  VAR_11->src[VAR_12].level = 1;
 }


 for (VAR_12 = VAR_5; VAR_12 < VAR_13; VAR_12++) {
  VAR_11->src[VAR_12].type = VAR_1;
  VAR_11->src[VAR_12].level = 0;
 }
}
