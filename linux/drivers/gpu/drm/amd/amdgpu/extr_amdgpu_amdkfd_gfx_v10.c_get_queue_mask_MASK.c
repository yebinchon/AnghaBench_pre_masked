
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int num_queue_per_pipe; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;



__attribute__((used)) static uint32_t FUNC_0(struct amdgpu_device *VAR_0,
          uint32_t VAR_1, uint32_t VAR_2)
{
 unsigned int VAR_3 = (VAR_1 * VAR_0->gfx.mec.num_queue_per_pipe +
       VAR_2) & 31;

 return ((uint32_t)1) << VAR_3;
}
