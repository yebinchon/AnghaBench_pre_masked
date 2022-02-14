
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->pg_flags & VAR_0)
  VAR_2 = FUNC_0(VAR_1);
 else
  VAR_2 = FUNC_1(VAR_1);
 return VAR_2;
}
