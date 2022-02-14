
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct k3_dma_phy {int idx; } ;
struct k3_dma_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct k3_dma_phy*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct k3_dma_phy *VAR_4, struct k3_dma_dev *VAR_5)
{
 u32 VAR_6 = 0;

 FUNC_0(VAR_4, 0);

 VAR_6 = 0x1 << VAR_4->idx;
 FUNC_1(VAR_6, VAR_5->base + VAR_2);
 FUNC_1(VAR_6, VAR_5->base + VAR_3);
 FUNC_1(VAR_6, VAR_5->base + VAR_0);
 FUNC_1(VAR_6, VAR_5->base + VAR_1);
}
