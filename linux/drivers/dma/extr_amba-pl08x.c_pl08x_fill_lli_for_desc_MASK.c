
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct pl08x_lli_build_data {int lli_bus; int remainder; TYPE_4__ dstbus; TYPE_3__ srcbus; TYPE_1__* txd; } ;
struct pl08x_driver_data {int lli_words; TYPE_2__* vd; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {scalar_t__ ftdmac020; scalar_t__ pl080s; } ;
struct TYPE_5__ {int* llis_va; int llis_bus; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static void FUNC_1(struct pl08x_driver_data *VAR_8,
        struct pl08x_lli_build_data *VAR_9,
        int VAR_10, int VAR_11, u32 VAR_12, u32 VAR_13)
{
 u32 VAR_14 = VAR_10 * VAR_8->lli_words;
 u32 *VAR_15 = VAR_9->txd->llis_va + VAR_14;
 dma_addr_t VAR_16 = VAR_9->txd->llis_bus;

 FUNC_0(VAR_10 >= VAR_0);


 VAR_14 += VAR_8->lli_words;

 VAR_15[VAR_7] = VAR_9->srcbus.addr;
 VAR_15[VAR_5] = VAR_9->dstbus.addr;
 VAR_15[VAR_6] = (VAR_16 + sizeof(u32) * VAR_14);
 VAR_15[VAR_6] |= VAR_9->lli_bus;
 VAR_15[VAR_4] = VAR_12;
 if (VAR_8->vd->pl080s)
  VAR_15[VAR_1] = VAR_13;

 if (VAR_8->vd->ftdmac020) {

  VAR_9->srcbus.addr += VAR_11;
  VAR_9->dstbus.addr += VAR_11;
 } else {
  if (VAR_12 & VAR_3)
   VAR_9->srcbus.addr += VAR_11;
  if (VAR_12 & VAR_2)
   VAR_9->dstbus.addr += VAR_11;
 }

 FUNC_0(VAR_9->remainder < VAR_11);

 VAR_9->remainder -= VAR_11;
}
