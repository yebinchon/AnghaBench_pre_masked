
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cc_hw_desc {int* word; } ;
typedef enum cc_dma_mode { ____Placeholder_cc_dma_mode } cc_dma_mode ;
typedef enum cc_axi_sec { ____Placeholder_cc_axi_sec } cc_axi_sec ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_1(struct cc_hw_desc *VAR_4,
    enum cc_dma_mode VAR_5, dma_addr_t VAR_6,
    u32 VAR_7, enum cc_axi_sec VAR_8)
{
 VAR_4->word[0] = (u32)VAR_6;



 VAR_4->word[1] |= FUNC_0(VAR_0, VAR_5) |
    FUNC_0(VAR_1, VAR_7) |
    FUNC_0(VAR_2, VAR_8);
}
