
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_dma_phy {scalar_t__ base; } ;
struct zx_desc_hw {int ctr; int lli; int src_x; int daddr; int saddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct zx_dma_phy *VAR_8, struct zx_desc_hw *VAR_9)
{
 FUNC_0(VAR_9->saddr, VAR_8->base + VAR_4);
 FUNC_0(VAR_9->daddr, VAR_8->base + VAR_1);
 FUNC_0(VAR_9->src_x, VAR_8->base + VAR_6);
 FUNC_0(0, VAR_8->base + VAR_7);
 FUNC_0(0, VAR_8->base + VAR_5);
 FUNC_0(0, VAR_8->base + VAR_2);
 FUNC_0(VAR_9->lli, VAR_8->base + VAR_3);
 FUNC_0(VAR_9->ctr, VAR_8->base + VAR_0);
}
