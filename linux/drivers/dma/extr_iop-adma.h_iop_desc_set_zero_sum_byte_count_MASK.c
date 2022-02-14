
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iop_adma_desc_slot {int slots_per_op; struct iop3xx_desc_aau* hw_desc; } ;
struct iop3xx_desc_aau {scalar_t__ byte_count; } ;


 scalar_t__ VAR_0 ;
 struct iop3xx_desc_aau* FUNC_0 (struct iop3xx_desc_aau*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct iop_adma_desc_slot *VAR_1, u32 VAR_2)
{
 int VAR_3 = VAR_1->slots_per_op;
 struct iop3xx_desc_aau *VAR_4 = VAR_1->hw_desc, *VAR_5;
 int VAR_6 = 0;

 if (VAR_2 <= VAR_0) {
  VAR_4->byte_count = VAR_2;
 } else {
  do {
   VAR_5 = FUNC_0(VAR_4, VAR_6);
   VAR_5->byte_count = VAR_0;
   VAR_2 -= VAR_0;
   VAR_6 += VAR_3;
  } while (VAR_2 > VAR_0);

  VAR_5 = FUNC_0(VAR_4, VAR_6);
  VAR_5->byte_count = VAR_2;
 }
}
