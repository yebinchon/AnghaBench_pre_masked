
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int byte_count; int phy_dest_addr; int desc_command; scalar_t__ phy_next_desc; int status; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mv_xor_desc_slot *VAR_3,
    dma_addr_t VAR_4, u32 VAR_5,
    enum dma_ctrl_flags VAR_6)
{
 struct mv_xor_desc *VAR_7 = VAR_3->hw_desc;

 VAR_7->status = VAR_1;
 VAR_7->phy_next_desc = 0;

 VAR_7->desc_command = (VAR_6 & VAR_0) ?
    VAR_2 : 0;
 VAR_7->phy_dest_addr = VAR_4;
 VAR_7->byte_count = VAR_5;
}
