
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_5, int VAR_6)
{
 u32 VAR_7;

 if (FUNC_1(VAR_5)) {
  switch (VAR_6) {
  case 130:
   VAR_7 = FUNC_2(VAR_2);
   VAR_7 &= ~VAR_4;
   FUNC_3(VAR_2, VAR_7);
   break;
  case 129:
   VAR_7 = FUNC_2(VAR_3);
   VAR_7 &= ~VAR_4;
   FUNC_3(VAR_3, VAR_7);
   break;
  case 131:
  case 128:
   return;
  }
 } else if (FUNC_0(VAR_5)) {
  switch (VAR_6) {
  case 130:
   VAR_7 = FUNC_2(VAR_0);
   VAR_7 &= ~1;
   FUNC_3(VAR_0, VAR_7);
   break;
  case 129:
   VAR_7 = FUNC_2(VAR_1);
   VAR_7 &= ~1;
   FUNC_3(VAR_1, VAR_7);
   break;
  case 131:
  case 128:
   return;
  }
 }
}
