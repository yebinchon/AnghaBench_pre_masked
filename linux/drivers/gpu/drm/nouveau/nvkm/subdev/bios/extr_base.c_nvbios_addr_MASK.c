
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {scalar_t__ image0_size; scalar_t__ size; int subdev; scalar_t__ imaged_addr; } ;


 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(struct nvkm_bios *VAR_0, u32 *VAR_1, u8 VAR_2)
{
 u32 VAR_3 = *VAR_1;

 if (*VAR_1 > VAR_0->image0_size && VAR_0->imaged_addr) {
  *VAR_1 -= VAR_0->image0_size;
  *VAR_1 += VAR_0->imaged_addr;
 }

 if (FUNC_1(*VAR_1 + VAR_2 >= VAR_0->size)) {
  FUNC_0(&VAR_0->subdev, "OOB %d %08x %08x\n", VAR_2, VAR_3, *VAR_1);
  return 0;
 }

 return 1;
}
