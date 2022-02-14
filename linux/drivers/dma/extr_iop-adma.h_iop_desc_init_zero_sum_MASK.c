
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ phys; } ;
struct iop_adma_desc_slot {int slot_cnt; int slots_per_op; TYPE_1__ async_tx; struct iop3xx_desc_aau* hw_desc; } ;
struct iop3xx_desc_aau {scalar_t__ next_desc; scalar_t__ desc_ctrl; } ;
struct iop3xx_aau_desc_ctrl {int zero_result_en; unsigned long int_en; scalar_t__ dest_write_en; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct iop3xx_desc_aau*,int,unsigned long) ;
 struct iop3xx_desc_aau* FUNC_1 (struct iop3xx_desc_aau*,int) ;

__attribute__((used)) static inline int
FUNC_2(struct iop_adma_desc_slot *VAR_1, int VAR_2,
         unsigned long VAR_3)
{
 int VAR_4 = VAR_1->slot_cnt, VAR_5 = VAR_1->slots_per_op;
 struct iop3xx_desc_aau *VAR_6, *VAR_7, *VAR_8;
 union {
  u32 value;
  struct iop3xx_aau_desc_ctrl field;
 } VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = VAR_1->hw_desc;

 for (VAR_10 = 0, VAR_11 = 0; (VAR_4 -= VAR_5) >= 0;
  VAR_10 += VAR_5, VAR_11++) {
  VAR_8 = FUNC_1(VAR_6, VAR_10);
  VAR_9.value = FUNC_0(VAR_8, VAR_2, VAR_3);
  VAR_9.field.dest_write_en = 0;
  VAR_9.field.zero_result_en = 1;
  VAR_9.field.int_en = VAR_3 & VAR_0;
  VAR_8->desc_ctrl = VAR_9.value;




  if (VAR_10) {
   VAR_7 =
    FUNC_1(VAR_6, VAR_10 - VAR_5);
   VAR_7->next_desc =
    (u32) (VAR_1->async_tx.phys + (VAR_10 << 5));
  }
 }

 return VAR_11;
}
