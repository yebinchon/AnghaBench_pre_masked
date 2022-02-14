
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_7, bool VAR_8)
{
 if (VAR_8) {
  u32 VAR_9 = FUNC_2(VAR_0);
  u32 VAR_10 = FUNC_2(VAR_1);
  u32 VAR_11 = 1;

  VAR_9 &= ~VAR_6;
  VAR_9 &= ~VAR_3;
  VAR_9 |= FUNC_0(VAR_11 > 4095 ? 4095 : VAR_11);

  VAR_10 |= VAR_5;
  VAR_10 &= VAR_4;
  VAR_10 |= FUNC_1(0xf);

  FUNC_3(VAR_1, VAR_10);
  FUNC_3(VAR_0, VAR_9);
 } else
  FUNC_4(VAR_0, 0, ~VAR_2);
}
