
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct omap_desc {size_t dev_addr; int sglen; int ccr; int cicr; int polled; int csdp; int vd; TYPE_1__* sg; scalar_t__ es; scalar_t__ fi; int dir; } ;
struct omap_chan {int ccr; int vc; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef size_t dma_addr_t ;
struct TYPE_2__ {size_t en; int fn; size_t addr; } ;


 size_t FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 () ;
 struct omap_desc* FUNC_3 (int,int ) ;
 struct omap_chan* FUNC_4 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_5 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_6(
 struct dma_chan *VAR_16, dma_addr_t VAR_17, dma_addr_t VAR_18,
 size_t VAR_19, unsigned long VAR_20)
{
 struct omap_chan *VAR_21 = FUNC_4(VAR_16);
 struct omap_desc *VAR_22;
 uint8_t VAR_23;

 VAR_22 = FUNC_3(sizeof(*VAR_22) + sizeof(VAR_22->sg[0]), VAR_15);
 if (!VAR_22)
  return ((void*)0);

 VAR_23 = FUNC_1((VAR_18 | VAR_17 | VAR_19));
 if (VAR_23 > VAR_6)
  VAR_23 = VAR_6;

 VAR_22->dir = VAR_13;
 VAR_22->dev_addr = VAR_18;
 VAR_22->fi = 0;
 VAR_22->es = VAR_23;
 VAR_22->sg[0].en = VAR_19 / FUNC_0(VAR_23);
 VAR_22->sg[0].fn = 1;
 VAR_22->sg[0].addr = VAR_17;
 VAR_22->sglen = 1;
 VAR_22->ccr = VAR_21->ccr;
 VAR_22->ccr |= VAR_0 | VAR_1;

 if (VAR_20 & VAR_14)
  VAR_22->cicr |= VAR_2;
 else
  VAR_22->polled = 1;

 VAR_22->csdp = VAR_23;

 if (FUNC_2()) {
  VAR_22->cicr |= VAR_4;
  VAR_22->csdp |= VAR_9 | VAR_12;
 } else {
  VAR_22->csdp |= VAR_8 | VAR_11;
  VAR_22->cicr |= VAR_3 | VAR_5;
  VAR_22->csdp |= VAR_7 | VAR_10;
 }

 return FUNC_5(&VAR_21->vc, &VAR_22->vd, VAR_20);
}
