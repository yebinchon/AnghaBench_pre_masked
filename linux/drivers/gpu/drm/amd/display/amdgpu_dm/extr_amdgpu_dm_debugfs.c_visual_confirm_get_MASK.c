
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {TYPE_2__* dc; } ;
struct amdgpu_device {TYPE_3__ dm; } ;
struct TYPE_4__ {int visual_confirm; } ;
struct TYPE_5__ {TYPE_1__ debug; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, u64 *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0;

 *VAR_1 = VAR_2->dm.dc->debug.visual_confirm;

 return 0;
}
