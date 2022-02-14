
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct amdgpu_device*,int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_9)
{
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;

 FUNC_1(VAR_5, 0x11010101);

 for (VAR_10 = 0; VAR_10 < 10; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < 100; ++VAR_11) {
   VAR_12 = FUNC_0(VAR_7);
   if (VAR_12 & 2)
    break;
   FUNC_3(1);
  }
  if (VAR_12 & 2)
   break;
 }

 for (VAR_10 = 0; VAR_10 < 10; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < 100; ++VAR_11) {
   VAR_12 = FUNC_0(VAR_4);
   if (VAR_12 & 0xf)
    break;
   FUNC_3(1);
  }
  if (VAR_12 & 0xf)
   break;
 }


 FUNC_2(VAR_3, 1 << 8, ~(1 << 8));

 for (VAR_10 = 0; VAR_10 < 10; ++VAR_10) {
  for (VAR_11 = 0; VAR_11 < 100; ++VAR_11) {
   VAR_12 = FUNC_0(VAR_4);
   if (VAR_12 & 0x240)
    break;
   FUNC_3(1);
  }
  if (VAR_12 & 0x240)
   break;
 }

 FUNC_2(0x3D49, 0, ~(1 << 2));

 FUNC_2(VAR_8, 0, ~(1 << 9));


 FUNC_1(VAR_6, VAR_0 |
  VAR_2 |
  VAR_1);

 FUNC_1(VAR_7, 0);

 FUNC_4(VAR_9, 0);
}
