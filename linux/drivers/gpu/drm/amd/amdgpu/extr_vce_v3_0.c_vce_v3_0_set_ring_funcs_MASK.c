
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_rings; TYPE_1__* ring; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ vce; } ;
struct TYPE_3__ {int me; int * funcs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_3)
{
 int VAR_4;

 if (VAR_3->asic_type >= VAR_0) {
  for (VAR_4 = 0; VAR_4 < VAR_3->vce.num_rings; VAR_4++) {
   VAR_3->vce.ring[VAR_4].funcs = &VAR_2;
   VAR_3->vce.ring[VAR_4].me = VAR_4;
  }
  FUNC_0("VCE enabled in VM mode\n");
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_3->vce.num_rings; VAR_4++) {
   VAR_3->vce.ring[VAR_4].funcs = &VAR_1;
   VAR_3->vce.ring[VAR_4].me = VAR_4;
  }
  FUNC_0("VCE enabled in physical mode\n");
 }
}
