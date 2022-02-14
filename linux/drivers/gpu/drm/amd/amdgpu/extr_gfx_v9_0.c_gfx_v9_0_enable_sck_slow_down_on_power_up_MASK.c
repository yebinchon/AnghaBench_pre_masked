
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_4,
      bool VAR_5)
{
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;

 VAR_7 = VAR_6 = FUNC_1(FUNC_2(VAR_0, 0, VAR_3));
 VAR_6 = FUNC_0(VAR_6, VAR_1,
        VAR_2,
        VAR_5 ? 1 : 0);
 if (VAR_7 != VAR_6)
  FUNC_3(FUNC_2(VAR_0, 0, VAR_3), VAR_6);
}
