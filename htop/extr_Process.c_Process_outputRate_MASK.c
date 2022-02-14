
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RichString ;


 int* VAR_0 ;
 size_t VAR_1 ;
 double VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,int,char*,int) ;
 int FUNC_1 (char*,int,char*,...) ;

void FUNC_2(RichString* VAR_6, char* VAR_7, int VAR_8, double VAR_9, int VAR_10) {
   int VAR_11 = VAR_0[VAR_1];
   int VAR_12 = VAR_0[VAR_4];
   int VAR_13 = VAR_0[VAR_3];
   if (!VAR_10) {
      VAR_11 = VAR_0[VAR_3];
      VAR_12 = VAR_0[VAR_3];
   }
   if (VAR_9 == -1) {
      int VAR_14 = FUNC_1(VAR_7, VAR_8, "    no perm ");
      FUNC_0(VAR_6, VAR_0[VAR_5], VAR_7, VAR_14);
   } else if (VAR_9 < VAR_2) {
      int VAR_15 = FUNC_1(VAR_7, VAR_8, "%7.2f B/s ", VAR_9);
      FUNC_0(VAR_6, VAR_13, VAR_7, VAR_15);
   } else if (VAR_9 < VAR_2 * VAR_2) {
      int VAR_16 = FUNC_1(VAR_7, VAR_8, "%7.2f K/s ", VAR_9 / VAR_2);
      FUNC_0(VAR_6, VAR_13, VAR_7, VAR_16);
   } else if (VAR_9 < VAR_2 * VAR_2 * VAR_2) {
      int VAR_17 = FUNC_1(VAR_7, VAR_8, "%7.2f M/s ", VAR_9 / VAR_2 / VAR_2);
      FUNC_0(VAR_6, VAR_12, VAR_7, VAR_17);
   } else {
      int VAR_18 = FUNC_1(VAR_7, VAR_8, "%7.2f G/s ", VAR_9 / VAR_2 / VAR_2 / VAR_2);
      FUNC_0(VAR_6, VAR_11, VAR_7, VAR_18);
   }
}
