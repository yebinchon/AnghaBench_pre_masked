
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_adma_desc_slot {int slot_cnt; int slots_per_op; struct iop3xx_desc_aau* hw_desc; } ;
struct iop3xx_desc_aau {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iop3xx_desc_aau*,int,int ) ;
 struct iop3xx_desc_aau* FUNC_1 (struct iop3xx_desc_aau*,int) ;

__attribute__((used)) static inline void FUNC_2(struct iop_adma_desc_slot *VAR_1,
     int VAR_2, dma_addr_t VAR_3)
{

 struct iop3xx_desc_aau *VAR_4 = VAR_1->hw_desc, *VAR_5;
 int VAR_6 = VAR_1->slot_cnt, VAR_7 = VAR_1->slots_per_op;
 int VAR_8;

 for (VAR_8 = 0; (VAR_6 -= VAR_7) >= 0;
  VAR_8 += VAR_7, VAR_3 += VAR_0) {
  VAR_5 = FUNC_1(VAR_4, VAR_8);
  FUNC_0(VAR_5, VAR_2, VAR_3);
 }
}
