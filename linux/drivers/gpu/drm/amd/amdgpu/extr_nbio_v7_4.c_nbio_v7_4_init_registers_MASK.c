
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3)
{
 uint32_t VAR_4, VAR_5;

 VAR_4 = VAR_5 = FUNC_1(VAR_2);
 VAR_5 = FUNC_0(VAR_5, VAR_1, VAR_0, 1);

 if (VAR_4 != VAR_5)
  FUNC_2(VAR_2, VAR_5);
}
