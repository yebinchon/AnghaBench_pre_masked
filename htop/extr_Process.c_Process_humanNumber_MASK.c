
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RichString ;


 int* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *,int,char*,int) ;
 int FUNC_1 (char*,int,char*,unsigned long) ;

void FUNC_2(RichString* VAR_9, unsigned long VAR_10, bool VAR_11) {
   char VAR_12[11];
   int VAR_13;

   int VAR_14 = VAR_0[VAR_1];
   int VAR_15 = VAR_0[VAR_8];
   int VAR_16 = VAR_0[VAR_7];
   if (!VAR_11) {
      VAR_14 = VAR_0[VAR_7];
      VAR_15 = VAR_0[VAR_7];
   }

   if(VAR_10 >= (10 * VAR_3)) {

      if(VAR_10 >= (100 * VAR_2)) {
         VAR_13 = FUNC_1(VAR_12, 10, "%4luT ", VAR_10 / VAR_4);
         FUNC_0(VAR_9, VAR_14, VAR_12, VAR_13);
         return;
      } else if (VAR_10 >= (1000 * VAR_3)) {
         VAR_13 = FUNC_1(VAR_12, 10, "%4.1lfT ", (double)VAR_10 / VAR_4);
         FUNC_0(VAR_9, VAR_14, VAR_12, VAR_13);
         return;
      }

      if(VAR_10 >= (100 * VAR_3)) {
         VAR_13 = FUNC_1(VAR_12, 10, "%4luG ", VAR_10 / VAR_6);
         FUNC_0(VAR_9, VAR_14, VAR_12, VAR_13);
         return;
      }
      VAR_13 = FUNC_1(VAR_12, 10, "%4.1lfG ", (double)VAR_10 / VAR_6);
      FUNC_0(VAR_9, VAR_14, VAR_12, VAR_13);
      return;
   } else if (VAR_10 >= 100000) {
      VAR_13 = FUNC_1(VAR_12, 10, "%4luM ", VAR_10 / VAR_5);
      FUNC_0(VAR_9, VAR_15, VAR_12, VAR_13);
      return;
   } else if (VAR_10 >= 1000) {
      VAR_13 = FUNC_1(VAR_12, 10, "%2lu", VAR_10/1000);
      FUNC_0(VAR_9, VAR_15, VAR_12, VAR_13);
      VAR_10 %= 1000;
      VAR_13 = FUNC_1(VAR_12, 10, "%03lu ", VAR_10);
      FUNC_0(VAR_9, VAR_16, VAR_12, VAR_13);
      return;
   }
   VAR_13 = FUNC_1(VAR_12, 10, "%5lu ", VAR_10);
   FUNC_0(VAR_9, VAR_16, VAR_12, VAR_13);
}
