
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int caption; } ;
typedef TYPE_1__ Meter ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,char) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,char*,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 size_t VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,char) ;
 int FUNC_9 (int,int,int ) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(Meter* VAR_9, int VAR_10, int VAR_11, int VAR_12) {
   (void) VAR_12;






      VAR_2 = VAR_3;

   char VAR_13[VAR_6];
   FUNC_2(VAR_9, VAR_13, VAR_6 - 1);

   FUNC_3(VAR_8);
   FUNC_1(VAR_9, VAR_13, &VAR_8);

   int VAR_14 =



      VAR_11+2;
   FUNC_7(VAR_0[VAR_5]);
   FUNC_9(VAR_14, VAR_10, VAR_9->caption);
   int VAR_15 = VAR_10 + FUNC_10(VAR_9->caption);
   int VAR_16 = FUNC_6(VAR_8);
   for (int VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
      char VAR_18 = FUNC_5(VAR_8, VAR_17);
      if (VAR_18 >= '0' && VAR_18 <= '9') {
         FUNC_0(VAR_15, VAR_11, VAR_18-48);
         VAR_15 += 4;
      } else {
         FUNC_8(VAR_14, VAR_15, VAR_18);
         VAR_15 += 1;
      }
   }
   FUNC_7(VAR_0[VAR_7]);
   FUNC_4(VAR_8);
}
