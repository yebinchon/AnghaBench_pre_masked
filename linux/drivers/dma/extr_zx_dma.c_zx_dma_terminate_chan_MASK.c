
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zx_dma_phy {int idx; scalar_t__ base; } ;
struct zx_dma_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct zx_dma_phy *VAR_7, struct zx_dma_dev *VAR_8)
{
 u32 VAR_9 = 0;

 VAR_9 = FUNC_0(VAR_7->base + VAR_1);
 VAR_9 &= ~VAR_5;
 VAR_9 |= VAR_6;
 FUNC_1(VAR_9, VAR_7->base + VAR_1);

 VAR_9 = 0x1 << VAR_7->idx;
 FUNC_1(VAR_9, VAR_8->base + VAR_4);
 FUNC_1(VAR_9, VAR_8->base + VAR_3);
 FUNC_1(VAR_9, VAR_8->base + VAR_2);
 FUNC_1(VAR_9, VAR_8->base + VAR_0);
}
