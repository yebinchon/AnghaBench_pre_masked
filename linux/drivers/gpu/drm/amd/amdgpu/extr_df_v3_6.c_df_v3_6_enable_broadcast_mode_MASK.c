
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4,
       bool VAR_5)
{
 u32 VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_0, 0, VAR_2);
  VAR_6 &= ~VAR_1;
  FUNC_1(VAR_0, 0, VAR_2, VAR_6);
 } else
  FUNC_1(VAR_0, 0, VAR_2,
        VAR_3);
}
