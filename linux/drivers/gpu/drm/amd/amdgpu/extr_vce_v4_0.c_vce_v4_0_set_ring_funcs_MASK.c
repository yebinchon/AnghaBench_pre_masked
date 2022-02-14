
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_rings; TYPE_1__* ring; } ;
struct amdgpu_device {TYPE_2__ vce; } ;
struct TYPE_3__ {int me; int * funcs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->vce.num_rings; VAR_2++) {
  VAR_1->vce.ring[VAR_2].funcs = &VAR_0;
  VAR_1->vce.ring[VAR_2].me = VAR_2;
 }
 FUNC_0("VCE enabled in VM mode\n");
}
