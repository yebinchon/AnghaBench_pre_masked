
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 char* FUNC_5 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int * VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (char*,int *,int) ;
 int * VAR_11 ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(char *VAR_12, char *VAR_13) {
 int VAR_14 = 0;
 static char *VAR_15, *VAR_16;

 if (VAR_13 == 0)
  VAR_13 = FUNC_1(VAR_12);
 switch (FUNC_8(VAR_12, VAR_11, 4)) {
 case 0:
  FUNC_4(VAR_6, VAR_10, FUNC_0(VAR_12, 0), 0);
  if (VAR_0) {
   VAR_14 = FUNC_2(VAR_4);
   break;
  }
  if (VAR_16 == ((void*)0))
   VAR_16 = FUNC_9(FUNC_7(VAR_11[1]));
  FUNC_4(VAR_6, VAR_10, FUNC_0(VAR_12, 0), FUNC_0(VAR_16, 0));
  VAR_14 = FUNC_2(VAR_4);
  if (VAR_14 == 0)
   return FUNC_10(VAR_16, VAR_13);
  break;
 case 1:
  if (VAR_0)
   break;
  if (VAR_1)
   VAR_14 = FUNC_3(VAR_12, VAR_9 ? VAR_9 : FUNC_5(VAR_13, FUNC_7(VAR_11[2])));
  else if ((VAR_14 = FUNC_3(VAR_12, VAR_15?VAR_15:(VAR_15=FUNC_9(FUNC_7(VAR_11[2]))))) == 0)
   return FUNC_10(VAR_15, VAR_13);
  break;
 case 2:
  if (VAR_0)
   break;
  if (!VAR_1) {
   char *VAR_17;
   if (VAR_5 && VAR_9)
    VAR_17 = VAR_9;
   else if (VAR_5)
    VAR_17 = FUNC_5(VAR_13, FUNC_7(VAR_11[3]));
   else
    VAR_17 = FUNC_9(FUNC_7(VAR_11[3]));
   FUNC_4(VAR_3, VAR_2, FUNC_0(VAR_12, 0), FUNC_0(VAR_17, 0));
   VAR_14 = FUNC_2(VAR_4);
   if (!FUNC_6(VAR_17, VAR_8[1]))
    VAR_8[1] = FUNC_0(VAR_17, VAR_8[1]);
  }
  break;
 case 3:
  if (!FUNC_6(VAR_12, VAR_8[1]))
   VAR_8[1] = FUNC_0(VAR_12, VAR_8[1]);
  break;
 default:
  if (VAR_0) {
   FUNC_4(VAR_6, VAR_10, FUNC_0(VAR_12, 0), 0);
   VAR_14 = FUNC_2(VAR_4);
  }
  VAR_8[1] = FUNC_0(VAR_12, VAR_8[1]);
  break;
 }
 if (VAR_14)
  VAR_7++;
 return VAR_14;
}
