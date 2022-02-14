
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mga_device *VAR_13, long VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;
 unsigned int VAR_26;
 u8 VAR_27;

 VAR_24 = VAR_25 = VAR_23 = 0;
 VAR_15 = 550000;
 VAR_16 = 150000;
 VAR_17 = 50000;

 VAR_18 = 0xffffffff;

 for (VAR_20 = 16; VAR_20 > 0; VAR_20--) {
  if (VAR_14 * VAR_20 > VAR_15)
   continue;
  if (VAR_14 * VAR_20 < VAR_16)
   continue;

  for (VAR_22 = 1; VAR_22 < 257; VAR_22++) {
   for (VAR_21 = 1; VAR_21 < 17; VAR_21++) {
    VAR_26 = (VAR_17 * VAR_22) /
     (VAR_21 * VAR_20);
    if (VAR_26 > VAR_14)
     VAR_19 = VAR_26 - VAR_14;
    else
     VAR_19 = VAR_14 - VAR_26;
    if (VAR_19 < VAR_18) {
     VAR_18 = VAR_19;
     VAR_25 = VAR_22 - 1;
     VAR_24 = VAR_21 - 1;
     VAR_23 = VAR_20 - 1;
    }
   }
  }
 }

 FUNC_1(VAR_1, VAR_5);
 VAR_27 = FUNC_0(VAR_0);
 VAR_27 |= VAR_6;
 FUNC_1(VAR_0, VAR_27);

 VAR_27 = FUNC_0(VAR_11);
 VAR_27 |= 0x3 << 2;
 FUNC_1(VAR_12, VAR_27);

 FUNC_1(VAR_1, VAR_10);
 VAR_27 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_27 & ~0x40);

 FUNC_1(VAR_1, VAR_5);
 VAR_27 = FUNC_0(VAR_0);
 VAR_27 |= VAR_7;
 FUNC_1(VAR_0, VAR_27);

 FUNC_2(VAR_2, VAR_24);
 FUNC_2(VAR_3, VAR_25);
 FUNC_2(VAR_4, VAR_23);

 FUNC_3(50);

 FUNC_1(VAR_1, VAR_5);
 VAR_27 = FUNC_0(VAR_0);
 VAR_27 &= ~VAR_7;
 FUNC_1(VAR_0, VAR_27);

 FUNC_3(500);

 FUNC_1(VAR_1, VAR_5);
 VAR_27 = FUNC_0(VAR_0);
 VAR_27 &= ~VAR_8;
 VAR_27 |= VAR_9;
 FUNC_1(VAR_0, VAR_27);

 FUNC_1(VAR_1, VAR_10);
 VAR_27 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_27 | 0x40);

 VAR_27 = FUNC_0(VAR_11);
 VAR_27 |= (0x3 << 2);
 FUNC_1(VAR_12, VAR_27);

 FUNC_1(VAR_1, VAR_5);
 VAR_27 = FUNC_0(VAR_0);
 VAR_27 &= ~VAR_6;
 FUNC_1(VAR_0, VAR_27);

 return 0;
}
