
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2,
       bool VAR_3)
{
 if ((VAR_2->pg_flags & VAR_0) && VAR_3) {
  FUNC_0(VAR_2, 1);
  if (VAR_2->pg_flags & VAR_1)
   FUNC_1(VAR_2, 1);
 } else {
  FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2, 0);
 }
}
