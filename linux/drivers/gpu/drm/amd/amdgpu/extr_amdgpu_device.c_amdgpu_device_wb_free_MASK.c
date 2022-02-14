
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_wb; int used; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int FUNC_0 (int,int ) ;

void FUNC_1(struct amdgpu_device *VAR_0, u32 VAR_1)
{
 VAR_1 >>= 3;
 if (VAR_1 < VAR_0->wb.num_wb)
  FUNC_0(VAR_1, VAR_0->wb.used);
}
