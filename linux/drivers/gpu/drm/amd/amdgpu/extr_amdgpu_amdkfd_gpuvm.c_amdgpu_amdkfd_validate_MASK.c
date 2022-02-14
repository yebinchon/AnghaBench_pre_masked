
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_vm_parser {int wait; int domain; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_bo*,int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct amdgpu_bo *VAR_1)
{
 struct amdgpu_vm_parser *VAR_2 = VAR_0;

 return FUNC_0(VAR_1, VAR_2->domain, VAR_2->wait);
}
