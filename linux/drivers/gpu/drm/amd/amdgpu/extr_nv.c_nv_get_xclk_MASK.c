
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct amdgpu_device {TYPE_2__ clock; } ;



__attribute__((used)) static u32 FUNC_0(struct amdgpu_device *VAR_0)
{
 return VAR_0->clock.spll.reference_freq;
}
