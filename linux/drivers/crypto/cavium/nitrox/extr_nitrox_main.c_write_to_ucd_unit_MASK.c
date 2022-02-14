
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct nitrox_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nitrox_device*,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct nitrox_device *VAR_1, u32 VAR_2,
         u64 *VAR_3, int VAR_4)
{
 u32 VAR_5;
 u64 VAR_6, VAR_7;
 int VAR_8 = 0;
 VAR_6 = VAR_0;
 FUNC_1(VAR_1, VAR_6, VAR_4);

 VAR_5 = VAR_2;
 VAR_5 = FUNC_2(VAR_5, 8);
 while (VAR_5) {
  VAR_7 = VAR_3[VAR_8];

  VAR_6 = FUNC_0(VAR_8);
  FUNC_1(VAR_1, VAR_6, VAR_7);
  VAR_5 -= 8;
  VAR_8++;
 }

 FUNC_3(300, 400);
}
