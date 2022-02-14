
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cc_hw_desc {int * word; } ;
typedef enum cc_axi_sec { ____Placeholder_cc_axi_sec } cc_axi_sec ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (struct cc_hw_desc*,int ,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct cc_hw_desc *VAR_2, dma_addr_t VAR_3,
     u32 VAR_4, enum cc_axi_sec VAR_5,
     bool VAR_6)
{
 FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4, VAR_5);
 VAR_2->word[3] |= FUNC_0(VAR_1, VAR_6);
}
