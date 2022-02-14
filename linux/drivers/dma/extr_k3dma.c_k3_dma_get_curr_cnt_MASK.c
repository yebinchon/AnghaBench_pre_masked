
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct k3_dma_phy {int idx; } ;
struct k3_dma_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct k3_dma_dev *VAR_1, struct k3_dma_phy *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_1->base + VAR_0 + VAR_2->idx * 0x10);
 VAR_3 &= 0xffff;
 return VAR_3;
}
