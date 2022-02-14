
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chan; } ;
struct TYPE_3__ {int chan; } ;
struct atmel_tdes_dev {TYPE_2__ dma_lch_out; TYPE_1__ dma_lch_in; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct atmel_tdes_dev *VAR_0)
{
 FUNC_0(VAR_0->dma_lch_in.chan);
 FUNC_0(VAR_0->dma_lch_out.chan);
}
