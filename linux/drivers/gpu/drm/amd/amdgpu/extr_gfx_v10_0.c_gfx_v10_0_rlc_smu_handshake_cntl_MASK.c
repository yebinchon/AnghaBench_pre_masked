
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2,
          bool VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_0, 0, VAR_1);

 if (!VAR_3) {
  VAR_4 |= 0x800000;
 } else
  VAR_4 &= ~0x800000;
 FUNC_1(VAR_0, 0, VAR_1, VAR_4);
}
