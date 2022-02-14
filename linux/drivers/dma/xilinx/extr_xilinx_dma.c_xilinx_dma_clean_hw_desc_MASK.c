
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct xilinx_axidma_desc_hw {void* next_desc_msb; void* next_desc; } ;


 int FUNC_0 (struct xilinx_axidma_desc_hw*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xilinx_axidma_desc_hw *VAR_0)
{
 u32 VAR_1 = VAR_0->next_desc;
 u32 VAR_2 = VAR_0->next_desc_msb;

 FUNC_0(VAR_0, 0, sizeof(struct xilinx_axidma_desc_hw));

 VAR_0->next_desc = VAR_1;
 VAR_0->next_desc_msb = VAR_2;
}
