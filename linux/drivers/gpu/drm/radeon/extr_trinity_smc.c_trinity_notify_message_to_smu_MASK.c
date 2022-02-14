
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int usec_timeout; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;

 FUNC_2(VAR_1, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  if (FUNC_1(VAR_2) != 0)
   break;
  FUNC_3(1);
 }
 VAR_6 = FUNC_1(VAR_2);

 if (VAR_6 != 1) {
  if (VAR_6 == 0xFF) {
   FUNC_0("SMC failed to handle the message!\n");
   return -VAR_0;
  } else if (VAR_6 == 0xFE) {
   FUNC_0("Unknown SMC message!\n");
   return -VAR_0;
  }
 }

 return 0;
}
