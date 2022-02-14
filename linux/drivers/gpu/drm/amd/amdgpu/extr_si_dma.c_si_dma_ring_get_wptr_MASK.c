
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t u32 ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_4__ {TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;
 u32 VAR_4 = (VAR_2 == &VAR_3->sdma.instance[0].ring) ? 0 : 1;

 return (FUNC_0(VAR_0 + VAR_1[VAR_4]) & 0x3fffc) >> 2;
}
