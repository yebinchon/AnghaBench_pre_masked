
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct xgene_dma_desc_hw {int m3; int m1; int m0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct xgene_dma_desc_hw *VAR_5,
    u16 VAR_6)
{
 VAR_5->m0 |= FUNC_0(VAR_2);
 VAR_5->m0 |= FUNC_0((u64)VAR_4 <<
    VAR_3);
 VAR_5->m1 |= FUNC_0(VAR_0);
 VAR_5->m3 |= FUNC_0((u64)VAR_6 <<
    VAR_1);
}
