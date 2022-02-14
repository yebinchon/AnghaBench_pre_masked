
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k3_dma_phy {scalar_t__ base; } ;
struct k3_desc_hw {int config; int daddr; int saddr; int count; int lli; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct k3_dma_phy *VAR_5, struct k3_desc_hw *VAR_6)
{
 FUNC_0(VAR_6->lli, VAR_5->base + VAR_3);
 FUNC_0(VAR_6->count, VAR_5->base + VAR_1);
 FUNC_0(VAR_6->saddr, VAR_5->base + VAR_4);
 FUNC_0(VAR_6->daddr, VAR_5->base + VAR_2);
 FUNC_0(VAR_6->config, VAR_5->base + VAR_0);
}
