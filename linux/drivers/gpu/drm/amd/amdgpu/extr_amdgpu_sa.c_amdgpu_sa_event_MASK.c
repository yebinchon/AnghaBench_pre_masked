
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_sa_manager {int * flist; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct amdgpu_sa_manager*) ;
 unsigned int FUNC_1 (struct amdgpu_sa_manager*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct amdgpu_sa_manager *VAR_1,
       unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
  if (!FUNC_2(&VAR_1->flist[VAR_7]))
   return 1;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = (VAR_3 - (VAR_4 % VAR_3)) % VAR_3;

 if ((VAR_5 - VAR_4) >= (VAR_2 + VAR_6)) {
  return 1;
 }

 return 0;
}
