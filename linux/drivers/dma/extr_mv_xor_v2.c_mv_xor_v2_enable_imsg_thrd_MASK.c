
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_v2_device {scalar_t__ dma_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline
void FUNC_2(struct mv_xor_v2_device *VAR_7)
{
 u32 VAR_8;


 VAR_8 = FUNC_0(VAR_7->dma_base + VAR_1);
 VAR_8 &= ~VAR_0;
 VAR_8 |= VAR_5;
 VAR_8 |= VAR_2;
 FUNC_1(VAR_8, VAR_7->dma_base + VAR_1);


 VAR_8 = FUNC_0(VAR_7->dma_base + VAR_4);
 VAR_8 &= ~VAR_3;
 VAR_8 |= VAR_6;
 FUNC_1(VAR_8, VAR_7->dma_base + VAR_4);
}
