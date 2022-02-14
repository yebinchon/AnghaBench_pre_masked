
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;


 int FUNC_0 (int) ;
 char FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char VAR_5 ;
 char VAR_6 ;
 int FUNC_4 (int ,char) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_7, VAR_8;
 char VAR_9;
 char VAR_10;
 char VAR_11;

 VAR_1 = VAR_0;
 VAR_3 = VAR_2;
 VAR_2 = 0;


 VAR_9 = FUNC_2(VAR_4) | VAR_6;

 FUNC_4(VAR_4, VAR_9 & ~VAR_6);


 VAR_10 = FUNC_1(FUNC_3(VAR_4)) & VAR_5;

 FUNC_4(VAR_4, VAR_9);






 VAR_11 = FUNC_1(FUNC_3(VAR_4)) & VAR_5;


 VAR_2 |= (__u64)VAR_11 << 40;

 if (VAR_10 != VAR_11) {





  for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
   VAR_8 = FUNC_0(VAR_7);

   if (!(VAR_6 & VAR_8))
    continue;

   FUNC_4(VAR_4, VAR_9 & ~VAR_8);
   VAR_10 = FUNC_1(FUNC_3(VAR_4)) & ~VAR_11;
   VAR_2 |= (__u64)VAR_10 << (5 * VAR_7);
  }
  FUNC_4(VAR_4, VAR_9);
 }




 VAR_0 = (VAR_1 & (VAR_2 ^ VAR_3)) |
      (VAR_2 & ~(VAR_2 ^ VAR_3));
}
