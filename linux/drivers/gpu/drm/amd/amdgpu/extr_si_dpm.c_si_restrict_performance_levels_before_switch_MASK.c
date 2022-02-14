
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_1) != VAR_3)
  return -VAR_0;

 return (FUNC_1(VAR_4, VAR_2, 1) == VAR_3) ?
  0 : -VAR_0;
}
