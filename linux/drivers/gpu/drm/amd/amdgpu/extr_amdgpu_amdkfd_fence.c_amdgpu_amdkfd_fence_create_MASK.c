
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mm_struct {int dummy; } ;
struct amdgpu_amdkfd_fence {int lock; int base; int timeline_name; struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 struct amdgpu_amdkfd_fence* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (int *) ;

struct amdgpu_amdkfd_fence *FUNC_6(u64 VAR_4,
             struct mm_struct *VAR_5)
{
 struct amdgpu_amdkfd_fence *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);


 FUNC_4(VAR_5);
 VAR_6->mm = VAR_5;
 FUNC_2(VAR_6->timeline_name, VAR_2);
 FUNC_5(&VAR_6->lock);

 FUNC_1(&VAR_6->base, &VAR_1, &VAR_6->lock,
     VAR_4, FUNC_0(&VAR_3));

 return VAR_6;
}
