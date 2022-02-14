
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_dig; int ** afmt; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->mode_info.num_dig; VAR_1++) {
  FUNC_0(VAR_0->mode_info.afmt[VAR_1]);
  VAR_0->mode_info.afmt[VAR_1] = ((void*)0);
 }
}
