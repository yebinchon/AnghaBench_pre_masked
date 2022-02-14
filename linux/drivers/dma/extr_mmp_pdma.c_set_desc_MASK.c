
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmp_pdma_phy {int idx; scalar_t__ base; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mmp_pdma_phy *VAR_1, dma_addr_t VAR_2)
{
 u32 VAR_3 = (VAR_1->idx << 4) + VAR_0;

 FUNC_0(VAR_2, VAR_1->base + VAR_3);
}
