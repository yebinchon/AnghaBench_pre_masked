
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < 10; ++VAR_7) {
  for (VAR_8 = 0; VAR_8 < 100; ++VAR_8) {
   uint32_t VAR_9 =
    FUNC_1(FUNC_2(VAR_1, 0, VAR_5));

   if (VAR_9 & VAR_3)
    return 0;
   FUNC_4(10);
  }

  FUNC_0("VCE not responding, trying to reset the ECPU!!!\n");
  FUNC_3(FUNC_2(VAR_1, 0, VAR_4),
    VAR_2,
    ~VAR_2);
  FUNC_4(10);
  FUNC_3(FUNC_2(VAR_1, 0, VAR_4), 0,
    ~VAR_2);
  FUNC_4(10);

 }

 return -VAR_0;
}
