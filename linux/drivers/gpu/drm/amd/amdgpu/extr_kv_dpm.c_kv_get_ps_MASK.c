
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kv_ps {int dummy; } ;
struct amdgpu_ps {struct kv_ps* ps_priv; } ;



__attribute__((used)) static struct kv_ps *FUNC_0(struct amdgpu_ps *VAR_0)
{
 struct kv_ps *VAR_1 = VAR_0->ps_priv;

 return VAR_1;
}
