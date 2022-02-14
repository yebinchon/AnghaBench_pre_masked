
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_bo_list_entry {int dummy; } ;
struct amdgpu_bo_list {int dummy; } ;



__attribute__((used)) static inline struct amdgpu_bo_list_entry *
FUNC_0(struct amdgpu_bo_list *VAR_0, unsigned VAR_1)
{
 struct amdgpu_bo_list_entry *VAR_2 = (void *)&VAR_0[1];

 return &VAR_2[VAR_1];
}
