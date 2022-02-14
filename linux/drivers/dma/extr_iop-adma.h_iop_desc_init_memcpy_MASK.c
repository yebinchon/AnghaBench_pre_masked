
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iop_adma_desc_slot {struct iop3xx_desc_dma* hw_desc; } ;
struct iop3xx_dma_desc_ctrl {int mem_to_mem_en; int pci_transaction; unsigned long int_en; } ;
struct iop3xx_desc_dma {scalar_t__ crc_addr; scalar_t__ upper_pci_src_addr; scalar_t__ desc_ctrl; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct iop_adma_desc_slot *VAR_1, unsigned long VAR_2)
{
 struct iop3xx_desc_dma *VAR_3 = VAR_1->hw_desc;
 union {
  u32 value;
  struct iop3xx_dma_desc_ctrl field;
 } VAR_4;

 VAR_4.value = 0;
 VAR_4.field.mem_to_mem_en = 1;
 VAR_4.field.pci_transaction = 0xe;
 VAR_4.field.int_en = VAR_2 & VAR_0;
 VAR_3->desc_ctrl = VAR_4.value;
 VAR_3->upper_pci_src_addr = 0;
 VAR_3->crc_addr = 0;
}
