
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_type2_desc {int next_desc; int fn; int en; int csfi; int cdfi; int csei; int cdei; int cicr; int addr; } ;
struct omap_sg {int t2_desc_paddr; int fn; int fi; int ei; int addr; int en; struct omap_type2_desc* t2_desc; } ;
struct omap_desc {int fi; int ei; int cicr; struct omap_sg* sg; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



__attribute__((used)) static void FUNC_0(struct omap_desc *VAR_6, int VAR_7,
         enum dma_transfer_direction VAR_8, bool VAR_9)
{
 struct omap_sg *VAR_10 = &VAR_6->sg[VAR_7];
 struct omap_type2_desc *VAR_11 = VAR_10->t2_desc;

 if (VAR_7)
  VAR_6->sg[VAR_7 - 1].t2_desc->next_desc = VAR_10->t2_desc_paddr;
 if (VAR_9)
  VAR_11->next_desc = 0xfffffffc;

 VAR_11->en = VAR_10->en;
 VAR_11->addr = VAR_10->addr;
 VAR_11->fn = VAR_10->fn & 0xffff;
 VAR_11->cicr = VAR_6->cicr;
 if (!VAR_9)
  VAR_11->cicr &= ~VAR_0;

 switch (VAR_8) {
 case 129:
  VAR_11->cdei = VAR_10->ei;
  VAR_11->csei = VAR_6->ei;
  VAR_11->cdfi = VAR_10->fi;
  VAR_11->csfi = VAR_6->fi;

  VAR_11->en |= VAR_2;
  VAR_11->en |= VAR_5;
  break;
 case 128:
  VAR_11->cdei = VAR_6->ei;
  VAR_11->csei = VAR_10->ei;
  VAR_11->cdfi = VAR_6->fi;
  VAR_11->csfi = VAR_10->fi;

  VAR_11->en |= VAR_4;
  VAR_11->en |= VAR_3;
  break;
 default:
  return;
 }

 VAR_11->en |= VAR_1;
}
