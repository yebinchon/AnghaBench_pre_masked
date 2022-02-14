
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct sysinfo {int mem_unit; scalar_t__ totalram; } ;
struct TYPE_2__ {int max_pfn; int num_level; int block_size; int fragment_size; int root_level; } ;
struct amdgpu_device {TYPE_1__ vm_manager; int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,unsigned int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 unsigned int FUNC_6 (unsigned int,int) ;
 void* FUNC_7 (unsigned int,unsigned int) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 (struct sysinfo*) ;

void FUNC_10(struct amdgpu_device *VAR_7, uint32_t VAR_8,
      uint32_t VAR_9, unsigned VAR_10,
      unsigned VAR_11)
{
 unsigned int VAR_12 = 1 << (VAR_11 - 30);
 unsigned int VAR_13;
 uint64_t VAR_14;


 if (VAR_6 != -1) {
  VAR_13 = VAR_6;
  if (VAR_13 > VAR_12) {
   FUNC_4(VAR_7->dev, "VM size (%d) too large, max is %u GB\n",
     VAR_6, VAR_12);
   VAR_13 = VAR_12;
  }
 } else {
  struct sysinfo VAR_15;
  unsigned int VAR_16;
  FUNC_9(&VAR_15);
  VAR_16 = ((uint64_t)VAR_15.totalram * VAR_15.mem_unit +
          (1 << 30) - 1) >> 30;
  VAR_13 = FUNC_8(
   FUNC_7(FUNC_6(VAR_16 * 3, VAR_8), VAR_12));
 }

 VAR_7->vm_manager.max_pfn = (uint64_t)VAR_13 << 18;

 VAR_14 = FUNC_8(VAR_7->vm_manager.max_pfn);
 if (VAR_4 != -1)
  VAR_14 >>= VAR_4 - 9;
 VAR_14 = FUNC_0(FUNC_5(VAR_14) - 1, 9) - 1;
 VAR_7->vm_manager.num_level = FUNC_7(VAR_10, (unsigned)VAR_14);
 switch (VAR_7->vm_manager.num_level) {
 case 3:
  VAR_7->vm_manager.root_level = VAR_3;
  break;
 case 2:
  VAR_7->vm_manager.root_level = VAR_2;
  break;
 case 1:
  VAR_7->vm_manager.root_level = VAR_1;
  break;
 default:
  FUNC_3(VAR_7->dev, "VMPT only supports 2~4+1 levels\n");
 }

 if (VAR_4 != -1)
  VAR_7->vm_manager.block_size =
   FUNC_7((unsigned)VAR_4, VAR_11
       - VAR_0
       - 9 * VAR_7->vm_manager.num_level);
 else if (VAR_7->vm_manager.num_level > 1)
  VAR_7->vm_manager.block_size = 9;
 else
  VAR_7->vm_manager.block_size = FUNC_2(VAR_14);

 if (VAR_5 == -1)
  VAR_7->vm_manager.fragment_size = VAR_9;
 else
  VAR_7->vm_manager.fragment_size = VAR_5;

 FUNC_1("vm size is %u GB, %u levels, block size is %u-bit, fragment size is %u-bit\n",
   VAR_13, VAR_7->vm_manager.num_level + 1,
   VAR_7->vm_manager.block_size,
   VAR_7->vm_manager.fragment_size);
}
