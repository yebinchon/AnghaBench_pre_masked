
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int igp_sideport_enabled; } ;
struct radeon_device {int flags; TYPE_2__ mman; TYPE_1__ mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct radeon_device *VAR_2)
{


 if (VAR_2->flags & VAR_0) {
  if (VAR_2->mc.igp_sideport_enabled == 0)

   return 0;
 }

 return FUNC_0(&VAR_2->mman.bdev, VAR_1);
}
