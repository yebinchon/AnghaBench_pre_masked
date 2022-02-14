
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int phys; } ;
struct TYPE_9__ {TYPE_3__ tx; } ;
struct axi_dma_desc {TYPE_4__ vd; } ;
struct axi_dma_chan {size_t id; TYPE_5__* chip; } ;
struct TYPE_10__ {TYPE_2__* dw; } ;
struct TYPE_7__ {TYPE_1__* hdata; } ;
struct TYPE_6__ {int* priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct axi_dma_chan*) ;
 int FUNC_1 (struct axi_dma_chan*,int ,int) ;
 int FUNC_2 (struct axi_dma_chan*,int) ;
 int FUNC_3 (struct axi_dma_chan*,int) ;
 int FUNC_4 (struct axi_dma_chan*) ;
 int FUNC_5 (struct axi_dma_chan*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct axi_dma_chan*) ;
 int FUNC_8 (int ,char*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct axi_dma_chan*,int) ;

__attribute__((used)) static void FUNC_11(struct axi_dma_chan *VAR_14,
          struct axi_dma_desc *VAR_15)
{
 u32 VAR_16 = VAR_14->chip->dw->hdata->priority[VAR_14->id];
 u32 VAR_17, VAR_18;
 u8 VAR_19 = 0;

 if (FUNC_9(FUNC_4(VAR_14))) {
  FUNC_8(FUNC_7(VAR_14), "%s is non-idle!\n",
   FUNC_5(VAR_14));

  return;
 }

 FUNC_6(VAR_14->chip);

 VAR_17 = (VAR_12 << VAR_6 |
        VAR_12 << VAR_7);
 FUNC_1(VAR_14, VAR_5, VAR_17);

 VAR_17 = (VAR_13 << VAR_4 |
        VAR_16 << VAR_3 |
        VAR_8 << VAR_1 |
        VAR_8 << VAR_2);
 FUNC_1(VAR_14, VAR_0, VAR_17);

 FUNC_10(VAR_14, VAR_15->vd.tx.phys | VAR_19);

 VAR_18 = VAR_10 | VAR_9;
 FUNC_3(VAR_14, VAR_18);


 VAR_18 |= VAR_11;
 FUNC_2(VAR_14, VAR_18);

 FUNC_0(VAR_14);
}
