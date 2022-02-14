
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mmp_pdma_phy {int idx; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mmp_pdma_phy *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2)
  return;

 VAR_3 = (VAR_2->idx << 2) + VAR_0;
 FUNC_1(FUNC_0(VAR_2->base + VAR_3) & ~VAR_1, VAR_2->base + VAR_3);
}
