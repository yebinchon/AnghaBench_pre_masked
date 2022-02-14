
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int,int) ;

void FUNC_2(int VAR_7) {
   VAR_2 = VAR_7;

   for (int VAR_8 = 0; VAR_8 < 8; VAR_8++) {
      for (int VAR_9 = 0; VAR_9 < 8; VAR_9++) {
         if (FUNC_0(VAR_8,VAR_9) != VAR_6) {
            int VAR_10 = (VAR_7 != VAR_1)
                     ? (VAR_9==0 ? -1 : VAR_9)
                     : VAR_9;
            FUNC_1(FUNC_0(VAR_8,VAR_9), VAR_8, VAR_10);
         }
      }
   }

   int VAR_11 = VAR_0 > 8 ? 8 : 0;
   int VAR_12 = (VAR_7 != VAR_1)
                     ? -1
                     : 0;
   FUNC_1(VAR_5, VAR_11, VAR_12);

   VAR_4 = VAR_3[VAR_7];
}
