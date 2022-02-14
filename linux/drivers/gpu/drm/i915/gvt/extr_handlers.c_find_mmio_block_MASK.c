
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_mmio_block; struct gvt_mmio_block* mmio_block; } ;
struct intel_gvt {TYPE_1__ mmio; } ;
struct gvt_mmio_block {unsigned long device; unsigned int size; int offset; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct intel_gvt*) ;

__attribute__((used)) static struct gvt_mmio_block *FUNC_2(struct intel_gvt *VAR_0,
           unsigned int VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_0);
 struct gvt_mmio_block *VAR_3 = VAR_0->mmio.mmio_block;
 int VAR_4 = VAR_0->mmio.num_mmio_block;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_3++) {
  if (!(VAR_2 & VAR_3->device))
   continue;
  if (VAR_1 >= FUNC_0(VAR_3->offset) &&
      VAR_1 < FUNC_0(VAR_3->offset) + VAR_3->size)
   return VAR_3;
 }
 return ((void*)0);
}
