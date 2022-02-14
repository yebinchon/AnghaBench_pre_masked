
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(void)
{
 u32 VAR_17;
 int VAR_18;

 FUNC_3(&VAR_16);

 VAR_17 = FUNC_1(VAR_15 + VAR_0);
 if (VAR_17 & VAR_2) {
  if (!(VAR_17 & VAR_10)) {
   VAR_18 = FUNC_2();
   if (VAR_18 < 0) {
    FUNC_0(1);
    return VAR_18;
   }
  }

  VAR_17 = FUNC_1(VAR_15 + VAR_0);
  VAR_17 &= ~VAR_2;
  FUNC_6(VAR_17, VAR_15 + VAR_0);

  VAR_17 = FUNC_1(VAR_15 + VAR_3);
  VAR_17 |= VAR_6 |
         VAR_9 |
         VAR_8;
  VAR_17 &= ~(VAR_4 |
   VAR_5);
  FUNC_7(VAR_17, VAR_15 + VAR_3);

  VAR_17 = FUNC_1(VAR_15 + VAR_13);
  VAR_17 &= ~VAR_14;
  FUNC_7(VAR_17, VAR_15 + VAR_13);
  FUNC_5(1);

  VAR_17 = FUNC_1(VAR_15 + VAR_3);
  VAR_17 |= VAR_7;
  FUNC_7(VAR_17, VAR_15 + VAR_3);
  FUNC_5(1);

  VAR_17 = FUNC_1(VAR_15 + VAR_0);
  VAR_17 &= ~VAR_1;
  FUNC_7(VAR_17, VAR_15 + VAR_0);
 }


 VAR_17 = FUNC_1(VAR_15 + VAR_11);
 if (!(VAR_17 & VAR_12))
  FUNC_4();

 return 0;
}
