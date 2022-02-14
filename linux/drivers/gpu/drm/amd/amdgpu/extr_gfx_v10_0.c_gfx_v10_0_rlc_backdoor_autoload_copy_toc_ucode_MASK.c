
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {void* rlc_toc_buf; } ;
struct TYPE_5__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_6__ {int size; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,size_t,void*,int ) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_2)
{
 void *VAR_3;
 uint32_t VAR_4;

 VAR_3 = VAR_2->gfx.rlc.rlc_toc_buf;
 VAR_4 = VAR_1[VAR_0].size;

 FUNC_0(VAR_2,
         VAR_0,
         VAR_3, VAR_4);
}
