
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_6,
         uint32_t VAR_7, uint32_t VAR_8,
         uint32_t VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_6->adev;
 uint32_t VAR_11 = (VAR_7 << 2);

 FUNC_2(VAR_6,
  FUNC_0(FUNC_1(VAR_2, 0, VAR_4), 0, 0, VAR_0));
 FUNC_2(VAR_6, 0x01400200);

 FUNC_2(VAR_6,
  FUNC_0(FUNC_1(VAR_2, 0, VAR_5), 0, 0, VAR_0));
 FUNC_2(VAR_6, VAR_8);

 FUNC_2(VAR_6,
  FUNC_0(FUNC_1(VAR_2, 0, VAR_3), 0, 0, VAR_0));
 if (((VAR_11 >= 0x1f800) && (VAR_11 <= 0x21fff)) ||
  ((VAR_11 >= 0x1e000) && (VAR_11 <= 0x1e1ff))) {
  FUNC_2(VAR_6, 0);
  FUNC_2(VAR_6,
   FUNC_0((VAR_11 >> 2), 0, 0, VAR_1));
 } else {
  FUNC_2(VAR_6, VAR_11);
  FUNC_2(VAR_6,
   FUNC_0(0, 0, 0, VAR_1));
 }
 FUNC_2(VAR_6, VAR_9);
}
