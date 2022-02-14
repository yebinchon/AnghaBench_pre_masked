
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < 10; ++VAR_6) {
  for (VAR_7 = 0; VAR_7 < 100; ++VAR_7) {
   uint32_t VAR_8 = FUNC_1(VAR_4);

   if (VAR_8 & VAR_2)
    return 0;
   FUNC_3(10);
  }

  FUNC_0("VCE not responding, trying to reset the ECPU!!!\n");
  FUNC_2(VAR_3,
   VAR_1,
   ~VAR_1);
  FUNC_3(10);
  FUNC_2(VAR_3, 0,
   ~VAR_1);
  FUNC_3(10);
 }

 return -VAR_0;
}
