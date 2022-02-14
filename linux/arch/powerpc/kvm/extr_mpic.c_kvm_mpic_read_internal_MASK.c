
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct openpic {int num_mmio_regions; struct mem_reg** mmio_regions; } ;
struct mem_reg {scalar_t__ start_addr; scalar_t__ size; int (* read ) (struct openpic*,scalar_t__,int *) ;} ;
typedef scalar_t__ gpa_t ;


 int VAR_0 ;
 int FUNC_0 (struct openpic*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct openpic *VAR_1, gpa_t VAR_2, u32 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_mmio_regions; VAR_4++) {
  const struct mem_reg *VAR_5 = VAR_1->mmio_regions[VAR_4];

  if (VAR_5->start_addr > VAR_2 || VAR_2 >= VAR_5->start_addr + VAR_5->size)
   continue;

  return VAR_5->read(VAR_1, VAR_2 - VAR_5->start_addr, VAR_3);
 }

 return -VAR_0;
}
