
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_ps {int num_levels; struct kv_pl* levels; } ;
struct kv_pl {int vddc_index; int sclk; } ;
struct amdgpu_ps {int dclk; int vclk; int caps; int class2; int class; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;
 struct kv_ps* FUNC_4 (struct amdgpu_ps*) ;
 int FUNC_5 (char*,int,int ,...) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct amdgpu_ps *VAR_3 = (struct amdgpu_ps *)VAR_1;
 struct kv_ps *VAR_4 = FUNC_4(VAR_3);
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_0;

 FUNC_1(VAR_3->class, VAR_3->class2);
 FUNC_0(VAR_3->caps);
 FUNC_5("\tuvd    vclk: %d dclk: %d\n", VAR_3->vclk, VAR_3->dclk);
 for (VAR_2 = 0; VAR_2 < VAR_4->num_levels; VAR_2++) {
  struct kv_pl *VAR_6 = &VAR_4->levels[VAR_2];
  FUNC_5("\t\tpower level %d    sclk: %u vddc: %u\n",
         VAR_2, VAR_6->sclk,
         FUNC_3(VAR_5, VAR_6->vddc_index));
 }
 FUNC_2(VAR_5, VAR_3);
}
