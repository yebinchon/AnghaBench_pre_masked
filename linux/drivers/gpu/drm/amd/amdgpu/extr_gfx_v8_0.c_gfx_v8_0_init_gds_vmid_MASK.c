
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int oa; int gws; int mem_size; int mem_base; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1)
{
 int VAR_2;







 for (VAR_2 = 1; VAR_2 < 16; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].mem_base, 0);
  FUNC_0(VAR_0[VAR_2].mem_size, 0);
  FUNC_0(VAR_0[VAR_2].gws, 0);
  FUNC_0(VAR_0[VAR_2].oa, 0);
 }
}
