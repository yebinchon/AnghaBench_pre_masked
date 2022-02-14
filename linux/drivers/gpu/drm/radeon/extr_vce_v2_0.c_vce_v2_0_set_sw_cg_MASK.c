
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_1);
  VAR_6 |= 0xe70000;
  FUNC_1(VAR_1, VAR_6);

  VAR_6 = FUNC_0(VAR_2);
  VAR_6 |= 0xff000000;
  FUNC_1(VAR_2, VAR_6);

  VAR_6 = FUNC_0(VAR_3);
  VAR_6 &= ~0x3fc;
  FUNC_1(VAR_3, VAR_6);

  FUNC_1(VAR_0, 0);
 } else {
  VAR_6 = FUNC_0(VAR_1);
  VAR_6 |= 0xe7;
  VAR_6 &= ~0xe70000;
  FUNC_1(VAR_1, VAR_6);

  VAR_6 = FUNC_0(VAR_2);
  VAR_6 |= 0x1fe000;
  VAR_6 &= ~0xff000000;
  FUNC_1(VAR_2, VAR_6);

  VAR_6 = FUNC_0(VAR_3);
  VAR_6 |= 0x3fc;
  FUNC_1(VAR_3, VAR_6);
 }
}
