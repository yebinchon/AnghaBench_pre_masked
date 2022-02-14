
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mga_device *VAR_12, long VAR_13)
{
 unsigned int VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26, VAR_27;
 int VAR_28;
 const unsigned int VAR_29[] = { 1, 2, 4, 8 };

 VAR_24 = VAR_25 = VAR_23 = 0;
 VAR_14 = 1488000;
 VAR_15 = 1056000;
 VAR_16 = 48000;

 VAR_17 = 0xffffffff;

 for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
  if (VAR_17 == 0)
   break;
  for (VAR_20 = 5; VAR_20 < 129; VAR_20++) {
   if (VAR_17 == 0)
    break;
   for (VAR_21 = 3; VAR_21 >= 0; VAR_21--) {
    if (VAR_17 == 0)
     break;
    for (VAR_22 = 5; VAR_22 < 33; VAR_22++) {
     VAR_27 = VAR_16 * (VAR_20 + 1) /
      (VAR_19 + 1);
     if (VAR_27 < VAR_15)
      continue;
     if (VAR_27 > VAR_14)
      continue;
     VAR_26 = VAR_27 / (VAR_29[VAR_21] * (VAR_22 + 1));
     if (VAR_26 > VAR_13)
      VAR_18 = VAR_26 - VAR_13;
     else
      VAR_18 = VAR_13 - VAR_26;
     if (VAR_18 < VAR_17) {
      VAR_17 = VAR_18;
      VAR_24 = VAR_21 | (VAR_22 << 3);
      VAR_25 = VAR_20;
      VAR_23 = VAR_19 | (VAR_19 << 3);
     }
    }
   }
  }
 }

 FUNC_1(VAR_1, VAR_5);
 VAR_28 = FUNC_0(VAR_0);
 VAR_28 |= VAR_6;
 FUNC_1(VAR_0, VAR_28);

 FUNC_1(VAR_1, VAR_8);
 VAR_28 = FUNC_0(VAR_0);
 VAR_28 |= VAR_9;
 FUNC_1(VAR_0, VAR_28);

 VAR_28 = FUNC_0(VAR_10);
 VAR_28 |= (0x3<<2) | 0xc0;
 FUNC_1(VAR_11, VAR_28);

 FUNC_1(VAR_1, VAR_5);
 VAR_28 = FUNC_0(VAR_0);
 VAR_28 &= ~VAR_6;
 VAR_28 |= VAR_7;
 FUNC_1(VAR_0, VAR_28);

 FUNC_3(500);

 FUNC_2(VAR_3, VAR_25);
 FUNC_2(VAR_2, VAR_24);
 FUNC_2(VAR_4, VAR_23);

 FUNC_3(50);

 return 0;
}
