
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_1, bool VAR_2,
        bool VAR_3)
{
 if (VAR_2 && (VAR_1->cg_flags & VAR_0)) {
  if (VAR_3)
   FUNC_2(VAR_1, 1);
  else
   FUNC_1(VAR_1, 1);
 } else {
  FUNC_0(VAR_1);

  if (VAR_3)
   FUNC_2(VAR_1, 0);
  else
   FUNC_1(VAR_1, 0);
 }
}
