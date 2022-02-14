
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_ps {int num_levels; int * levels; } ;
struct amdgpu_ps {scalar_t__ vclk; scalar_t__ dclk; scalar_t__ evclk; scalar_t__ ecclk; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct kv_ps* FUNC_1 (struct amdgpu_ps*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1,
    void *VAR_2,
    void *VAR_3,
    bool *VAR_4)
{
 struct kv_ps *VAR_5;
 struct kv_ps *VAR_6;
 int VAR_7;
 struct amdgpu_ps *VAR_8 = (struct amdgpu_ps *)VAR_2;
 struct amdgpu_ps *VAR_9 = (struct amdgpu_ps *)VAR_3;
 struct amdgpu_device *VAR_10 = (struct amdgpu_device *)VAR_1;

 if (VAR_10 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_8);
 VAR_6 = FUNC_1(VAR_9);

 if (VAR_5 == ((void*)0)) {
  *VAR_4 = 0;
  return 0;
 }

 if (VAR_5->num_levels != VAR_6->num_levels) {
  *VAR_4 = 0;
  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_levels; VAR_7++) {
  if (!FUNC_0(&(VAR_5->levels[VAR_7]),
     &(VAR_6->levels[VAR_7]))) {
   *VAR_4 = 0;
   return 0;
  }
 }


 *VAR_4 = ((VAR_8->vclk == VAR_9->vclk) && (VAR_8->dclk == VAR_9->dclk));
 *VAR_4 &= ((VAR_8->evclk == VAR_9->evclk) && (VAR_8->ecclk == VAR_9->ecclk));

 return 0;
}
