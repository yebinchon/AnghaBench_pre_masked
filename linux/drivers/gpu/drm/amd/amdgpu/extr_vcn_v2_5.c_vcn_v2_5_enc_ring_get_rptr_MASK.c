
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_ring {size_t me; struct amdgpu_device* adev; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {struct amdgpu_ring* ring_enc; } ;


 int FUNC_0 (int ,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;

 if (VAR_3 == &VAR_4->vcn.inst[VAR_3->me].ring_enc[0])
  return FUNC_0(VAR_0, VAR_3->me, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_3->me, VAR_2);
}
