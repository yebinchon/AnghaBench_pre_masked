
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iop_adma_desc_slot {struct iop3xx_desc_aau* hw_desc; } ;
struct iop3xx_desc_aau {int * src; } ;



__attribute__((used)) static inline void FUNC_0(struct iop_adma_desc_slot *VAR_0,
      u32 VAR_1)
{
 struct iop3xx_desc_aau *VAR_2 = VAR_0->hw_desc;
 VAR_2->src[0] = VAR_1;
}
