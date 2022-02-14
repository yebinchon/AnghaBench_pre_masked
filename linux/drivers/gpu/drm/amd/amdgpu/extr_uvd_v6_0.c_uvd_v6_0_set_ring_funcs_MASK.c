
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* inst; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ uvd; } ;
struct TYPE_4__ {int * funcs; } ;
struct TYPE_5__ {TYPE_1__ ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_3)
{
 if (VAR_3->asic_type >= VAR_0) {
  VAR_3->uvd.inst->ring.funcs = &VAR_2;
  FUNC_0("UVD is enabled in VM mode\n");
 } else {
  VAR_3->uvd.inst->ring.funcs = &VAR_1;
  FUNC_0("UVD is enabled in physical mode\n");
 }
}
