
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dram_dimm_info {int size; int ranks; int width; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dram_dimm_info*) ;

__attribute__((used)) static void FUNC_4(struct dram_dimm_info *VAR_0,
         u32 VAR_1)
{
 VAR_0->width = FUNC_2(VAR_1);
 VAR_0->ranks = FUNC_0(VAR_1);





 VAR_0->size = FUNC_1(VAR_1) * FUNC_3(VAR_0) / 8;
}
