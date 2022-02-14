
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int nvm; int vram_base_offset; } ;
struct radeon_device {int flags; TYPE_1__ vm_manager; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct radeon_device *VAR_2)
{





 VAR_2->vm_manager.nvm = 16;

 if (VAR_2->flags & VAR_1) {
  u64 VAR_3 = FUNC_0(VAR_0);
  VAR_3 <<= 22;
  VAR_2->vm_manager.vram_base_offset = VAR_3;
 } else
  VAR_2->vm_manager.vram_base_offset = 0;

 return 0;
}
