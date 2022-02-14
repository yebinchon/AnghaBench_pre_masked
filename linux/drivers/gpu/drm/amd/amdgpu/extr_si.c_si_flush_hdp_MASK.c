
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {TYPE_1__* funcs; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int emit_wreg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_ring*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_1, struct amdgpu_ring *VAR_2)
{
 if (!VAR_2 || !VAR_2->funcs->emit_wreg) {
  FUNC_1(VAR_0, 1);
  FUNC_0(VAR_0);
 } else {
  FUNC_2(VAR_2, VAR_0, 1);
 }
}
