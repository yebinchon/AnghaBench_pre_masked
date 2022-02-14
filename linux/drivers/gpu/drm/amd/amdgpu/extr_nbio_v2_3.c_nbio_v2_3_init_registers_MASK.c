
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = VAR_6 = FUNC_1(VAR_3);
 VAR_6 = FUNC_0(VAR_6, VAR_2, VAR_0, 1);
 VAR_6 = FUNC_0(VAR_6, VAR_2, VAR_1, 1);

 if (VAR_5 != VAR_6)
  FUNC_2(VAR_3, VAR_6);
}
