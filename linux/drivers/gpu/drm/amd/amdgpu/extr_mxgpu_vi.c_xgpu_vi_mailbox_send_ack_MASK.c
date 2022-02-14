
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = VAR_3;
 u32 VAR_8 = FUNC_0(VAR_0, VAR_2);

 VAR_6 = FUNC_2(VAR_4);
 VAR_6 = FUNC_1(VAR_6, VAR_0, VAR_1, 1);
 FUNC_3(VAR_4, VAR_6);


 VAR_6 = FUNC_2(VAR_4);
 while (VAR_6 & VAR_8) {
  if (VAR_7 <= 0) {
   FUNC_5("RCV_MSG_VALID is not cleared\n");
   break;
  }
  FUNC_4(1);
  VAR_7 -=1;

  VAR_6 = FUNC_2(VAR_4);
 }
}
