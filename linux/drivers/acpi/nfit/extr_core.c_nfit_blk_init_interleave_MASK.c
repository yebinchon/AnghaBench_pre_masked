
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfit_blk_mmio {int num_lines; int line_size; int table_size; } ;
struct acpi_nfit_interleave {int line_count; int line_size; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct nfit_blk_mmio *VAR_1,
  struct acpi_nfit_interleave *VAR_2, u16 VAR_3)
{
 if (VAR_2) {
  VAR_1->num_lines = VAR_2->line_count;
  VAR_1->line_size = VAR_2->line_size;
  if (VAR_3 == 0)
   return -VAR_0;
  VAR_1->table_size = VAR_1->num_lines * VAR_3
   * VAR_1->line_size;
 }

 return 0;
}
