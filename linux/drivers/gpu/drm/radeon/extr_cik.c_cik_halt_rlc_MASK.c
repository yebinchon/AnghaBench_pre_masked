
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32 FUNC_4(struct radeon_device *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_6 = VAR_5 = FUNC_0(VAR_0);

 if (VAR_5 & VAR_1) {
  u32 VAR_7;

  VAR_5 &= ~VAR_1;
  FUNC_1(VAR_0, VAR_5);

  for (VAR_7 = 0; VAR_7 < VAR_4->usec_timeout; VAR_7++) {
   if ((FUNC_0(VAR_3) & VAR_2) == 0)
    break;
   FUNC_3(1);
  }

  FUNC_2(VAR_4);
 }

 return VAR_6;
}
