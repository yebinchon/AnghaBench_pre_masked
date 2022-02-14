
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iop_adma_desc_slot {struct iop3xx_desc_aau* hw_desc; } ;
struct iop3xx_desc_aau {scalar_t__ desc_ctrl; } ;
struct iop3xx_aau_desc_ctrl {int blk1_cmd_ctrl; int dest_write_en; unsigned long int_en; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct iop_adma_desc_slot *VAR_1, unsigned long VAR_2)
{
 struct iop3xx_desc_aau *VAR_3 = VAR_1->hw_desc;
 union {
  u32 value;
  struct iop3xx_aau_desc_ctrl field;
 } VAR_4;

 VAR_4.value = 0;
 VAR_4.field.blk1_cmd_ctrl = 0x2;
 VAR_4.field.dest_write_en = 1;
 VAR_4.field.int_en = VAR_2 & VAR_0;
 VAR_3->desc_ctrl = VAR_4.value;
}
