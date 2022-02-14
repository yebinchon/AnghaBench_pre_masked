
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < 10; ++VAR_3) {
  for (VAR_4 = 0; VAR_4 < 100; ++VAR_4) {
   uint32_t VAR_5 = FUNC_0(VAR_1);

   if (VAR_5 & 0x337f)
    return 0;
   FUNC_1(10);
  }
 }

 return -VAR_0;
}
