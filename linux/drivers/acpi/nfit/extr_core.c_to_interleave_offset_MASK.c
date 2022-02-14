
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef size_t u32 ;
struct nfit_blk_mmio {size_t line_size; size_t num_lines; size_t table_size; size_t base_offset; struct acpi_nfit_interleave* idt; } ;
struct acpi_nfit_interleave {size_t* line_offset; } ;


 size_t FUNC_0 (size_t,size_t,size_t*) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_0, struct nfit_blk_mmio *VAR_1)
{
 struct acpi_nfit_interleave *VAR_2 = VAR_1->idt;
 u32 VAR_3, VAR_4, VAR_5;
 u64 VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_0, VAR_1->line_size, &VAR_3);
 VAR_7 = FUNC_0(VAR_6, VAR_1->num_lines, &VAR_4);
 VAR_5 = VAR_2->line_offset[VAR_4]
  * VAR_1->line_size;
 VAR_8 = VAR_7 * VAR_1->table_size;

 return VAR_1->base_offset + VAR_5 + VAR_8 + VAR_3;
}
