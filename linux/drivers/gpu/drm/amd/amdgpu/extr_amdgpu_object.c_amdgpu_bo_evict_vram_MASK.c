
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bdev; } ;
struct amdgpu_device {int flags; TYPE_1__ mman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct amdgpu_device *VAR_2)
{


 if (VAR_2->flags & VAR_0) {

  return 0;
 }

 return FUNC_0(&VAR_2->mman.bdev, VAR_1);
}
