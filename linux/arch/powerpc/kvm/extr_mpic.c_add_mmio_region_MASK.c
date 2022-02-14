
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpic {scalar_t__ num_mmio_regions; struct mem_reg const** mmio_regions; } ;
struct mem_reg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void FUNC_1(struct openpic *VAR_1, const struct mem_reg *VAR_2)
{
 if (VAR_1->num_mmio_regions >= VAR_0) {
  FUNC_0(1, "kvm mpic: too many mmio regions\n");
  return;
 }

 VAR_1->mmio_regions[VAR_1->num_mmio_regions++] = VAR_2;
}
