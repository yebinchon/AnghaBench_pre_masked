
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgs_device {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct amdgpu_cgs_device {struct amdgpu_device* adev; TYPE_1__ base; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct amdgpu_cgs_device* FUNC_1 (int,int ) ;

struct cgs_device *FUNC_2(struct amdgpu_device *VAR_2)
{
 struct amdgpu_cgs_device *VAR_3 =
  FUNC_1(sizeof(*VAR_3), VAR_0);

 if (!VAR_3) {
  FUNC_0("Couldn't allocate CGS device structure\n");
  return ((void*)0);
 }

 VAR_3->base.ops = &VAR_1;
 VAR_3->adev = VAR_2;

 return (struct cgs_device *)VAR_3;
}
