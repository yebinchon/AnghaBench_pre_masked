
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stratix10_svc_sh_memory {int size; scalar_t__ addr; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gen_pool {int dummy; } ;
typedef size_t phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct gen_pool* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,void*,unsigned int,unsigned int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct gen_pool*,unsigned long,size_t,size_t,int) ;
 int VAR_4 ;
 struct gen_pool* FUNC_4 (int,int) ;
 int FUNC_5 (struct gen_pool*) ;
 int FUNC_6 (struct gen_pool*,int ,int *) ;
 void* FUNC_7 (size_t,size_t,int ) ;
 size_t FUNC_8 (scalar_t__,int) ;
 size_t FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static struct gen_pool *
FUNC_10(struct platform_device *VAR_5,
         struct stratix10_svc_sh_memory *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct gen_pool *VAR_8;
 unsigned long VAR_9;
 phys_addr_t VAR_10;
 size_t VAR_11;
 phys_addr_t VAR_12;
 phys_addr_t VAR_13;
 void *VAR_14;
 size_t VAR_15 = VAR_3 - 1;
 int VAR_16 = 3;
 int VAR_17;

 VAR_12 = FUNC_9(VAR_6->addr, VAR_3);
 VAR_13 = FUNC_8(VAR_6->addr + VAR_6->size, VAR_3);
 VAR_10 = VAR_12;
 VAR_11 = VAR_13 - VAR_12;
 VAR_14 = FUNC_7(VAR_10, VAR_11, VAR_2);
 if (!VAR_14) {
  FUNC_2(VAR_7, "fail to remap shared memory\n");
  return FUNC_0(-VAR_0);
 }
 VAR_9 = (unsigned long)VAR_14;
 FUNC_1(VAR_7,
  "reserved memory vaddr: %p, paddr: 0x%16x size: 0x%8x\n",
  VAR_14, (unsigned int)VAR_10, (unsigned int)VAR_11);
 if ((VAR_9 & VAR_15) || (VAR_10 & VAR_15) ||
     (VAR_11 & VAR_15)) {
  FUNC_2(VAR_7, "page is not aligned\n");
  return FUNC_0(-VAR_0);
 }
 VAR_8 = FUNC_4(VAR_16, -1);
 if (!VAR_8) {
  FUNC_2(VAR_7, "fail to create genpool\n");
  return FUNC_0(-VAR_1);
 }
 FUNC_6(VAR_8, VAR_4, ((void*)0));
 VAR_17 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, -1);
 if (VAR_17) {
  FUNC_2(VAR_7, "fail to add memory chunk to the pool\n");
  FUNC_5(VAR_8);
  return FUNC_0(VAR_17);
 }

 return VAR_8;
}
