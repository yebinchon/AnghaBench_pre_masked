
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RichString ;


 int* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int,char*,int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int,char*,unsigned long long) ;

void FUNC_3(RichString* VAR_5, unsigned long long VAR_6, bool VAR_7) {
   char VAR_8[14];

   int VAR_9 = VAR_0[VAR_1];
   int VAR_10 = VAR_0[VAR_3];
   int VAR_11 = VAR_0[VAR_2];
   int VAR_12 = VAR_0[VAR_4];
   if (!VAR_7) {
      VAR_9 = VAR_0[VAR_2];
      VAR_10 = VAR_0[VAR_2];
      VAR_12 = VAR_0[VAR_2];
   }

   if ((long long) VAR_6 == -1LL) {
      int VAR_13 = FUNC_1(VAR_8, 13, "    no perm ");
      FUNC_0(VAR_5, VAR_0[VAR_4], VAR_8, VAR_13);
   } else if (VAR_6 > 10000000000) {
      FUNC_2(VAR_8, 13, "%11llu ", VAR_6 / 1000);
      FUNC_0(VAR_5, VAR_9, VAR_8, 5);
      FUNC_0(VAR_5, VAR_10, VAR_8+5, 3);
      FUNC_0(VAR_5, VAR_11, VAR_8+8, 4);
   } else {
      FUNC_2(VAR_8, 13, "%11llu ", VAR_6);
      FUNC_0(VAR_5, VAR_9, VAR_8, 2);
      FUNC_0(VAR_5, VAR_10, VAR_8+2, 3);
      FUNC_0(VAR_5, VAR_11, VAR_8+5, 3);
      FUNC_0(VAR_5, VAR_12, VAR_8+8, 4);
   }
}
