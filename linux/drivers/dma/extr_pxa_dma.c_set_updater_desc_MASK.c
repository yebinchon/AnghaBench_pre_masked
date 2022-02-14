
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxad_desc_sw {int nb_desc; void* first; struct pxad_desc_hw** hw_desc; scalar_t__ cyclic; } ;
struct pxad_desc_hw {int dcmd; void* ddadr; void* dtadr; void* dsadr; } ;
typedef void* dma_addr_t ;


 void* VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct pxad_desc_sw *VAR_6,
        unsigned long VAR_7)
{
 struct pxad_desc_hw *VAR_8 =
  VAR_6->hw_desc[VAR_6->nb_desc - 1];
 dma_addr_t VAR_9 = VAR_6->hw_desc[VAR_6->nb_desc - 2]->ddadr;

 VAR_8->ddadr = VAR_0;
 VAR_8->dsadr = VAR_9;
 VAR_8->dtadr = VAR_9 + 8;
 VAR_8->dcmd = VAR_5 | VAR_2 |
  (VAR_4 & sizeof(u32));
 if (VAR_7 & VAR_1)
  VAR_8->dcmd |= VAR_3;
 if (VAR_6->cyclic)
  VAR_6->hw_desc[VAR_6->nb_desc - 2]->ddadr = VAR_6->first;
}
