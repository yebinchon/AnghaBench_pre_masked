
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_3,
     uint32_t VAR_4, uint32_t VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->adev;
 uint32_t VAR_7 = (VAR_4 << 2);

 FUNC_2(VAR_3,
  FUNC_0(FUNC_1(VAR_1, 0, VAR_2), 0, 0, VAR_0));
 if (((VAR_7 >= 0x1f800) && (VAR_7 <= 0x21fff)) ||
   ((VAR_7 >= 0x1e000) && (VAR_7 <= 0x1e1ff))) {
  FUNC_2(VAR_3, 0);
  FUNC_2(VAR_3,
   FUNC_0((VAR_7 >> 2), 0, 0, VAR_0));
 } else {
  FUNC_2(VAR_3, VAR_7);
  FUNC_2(VAR_3,
   FUNC_0(0, 0, 0, VAR_0));
 }
 FUNC_2(VAR_3, VAR_5);
}
