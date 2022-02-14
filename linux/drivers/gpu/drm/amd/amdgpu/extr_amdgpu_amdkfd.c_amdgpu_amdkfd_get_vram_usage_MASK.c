
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_3__ {int * man; } ;
struct TYPE_4__ {TYPE_1__ bdev; } ;
struct amdgpu_device {TYPE_2__ mman; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

uint64_t FUNC_1(struct kgd_dev *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;

 return FUNC_0(&VAR_2->mman.bdev.man[VAR_0]);
}
