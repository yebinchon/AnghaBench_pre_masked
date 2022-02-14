
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {struct amdgpu_irq_src* irq_source; struct amdgpu_device* adev; } ;
struct amdgpu_irq_src {int * funcs; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,struct amdgpu_irq_src*) ;
 struct amdgpu_irq_src* FUNC_1 (int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_6->adev;
 struct amdgpu_irq_src *VAR_8 = VAR_6->irq_source;
 int VAR_9 = 0;


 if (VAR_8)
  return 0;

 VAR_8 = FUNC_1(sizeof(struct amdgpu_irq_src), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_6->irq_source = VAR_8;

 VAR_8->funcs = &VAR_5;

 VAR_9 = FUNC_0(VAR_7, VAR_2,
    VAR_4,
    VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7, VAR_2,
    VAR_3,
    VAR_8);
 if (VAR_9)
  return VAR_9;

 return VAR_9;
}
