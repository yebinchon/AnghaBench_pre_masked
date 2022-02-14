
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_mn {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_mn *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_0(&VAR_1->lock);
 else if (!FUNC_1(&VAR_1->lock))
  return -VAR_0;

 return 0;
}
