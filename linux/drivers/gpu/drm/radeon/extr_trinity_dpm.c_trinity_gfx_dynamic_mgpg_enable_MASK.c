
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_4,
         bool VAR_5)
{
 u32 VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_2);
  VAR_6 &= ~VAR_0;
  VAR_6 |= FUNC_0(1);
  FUNC_3(VAR_2, VAR_6);

  VAR_6 = FUNC_2(VAR_3);
  VAR_6 &= ~VAR_1;
  VAR_6 |= FUNC_1(1);
  FUNC_3(VAR_3, VAR_6);
 } else {
  VAR_6 = FUNC_2(VAR_3);
  VAR_6 &= ~VAR_1;
  FUNC_3(VAR_3, VAR_6);

  VAR_6 = FUNC_2(VAR_2);
  VAR_6 &= ~VAR_0;
  FUNC_3(VAR_2, VAR_6);
 }

 FUNC_4(VAR_4);

}
