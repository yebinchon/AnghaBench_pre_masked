
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int VAR_6 ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int,int ) ;
 int VAR_8 ;
 int FUNC_8 (char**) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (char*,int ) ;

u_char *
FUNC_11(void)
{
 static int VAR_13 = 1;
 static u_char *VAR_14, *VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = 0;
 u_char *VAR_20;

 if (!VAR_14) {
  if ((VAR_14 = FUNC_3(1, VAR_6)) == ((void*)0))
   FUNC_4(1, ((void*)0));
  if ((VAR_15 = FUNC_3(1, VAR_6)) == ((void*)0))
   FUNC_4(1, ((void*)0));
 } else {
  VAR_20 = VAR_14;
  VAR_14 = VAR_15;
  VAR_15 = VAR_20;
  VAR_5 += VAR_6;
  VAR_19 = 1;
 }
 for (VAR_17 = VAR_6, VAR_18 = 0;;) {





  if (!VAR_8 || (VAR_13 && !FUNC_8((char **)((void*)0)))) {
   if (VAR_9 && VAR_5 < VAR_10)
    FUNC_5(1, "cannot skip past end of input");
   if (VAR_17 == VAR_6)
    return((u_char *)((void*)0));




   if (VAR_12 != VAR_0 &&
       VAR_19 &&
       FUNC_1(VAR_14, VAR_15, VAR_18) == 0) {
    if (VAR_12 != VAR_1)
     (void)FUNC_9("*\n");
    return((u_char *)((void*)0));
   }
   FUNC_2((char *)VAR_14 + VAR_18, VAR_17);
   VAR_7 = VAR_5 + VAR_18;
   return(VAR_14);
  }
  VAR_16 = FUNC_7((char *)VAR_14 + VAR_18, sizeof(u_char),
      VAR_8 == -1 ? VAR_17 : FUNC_0(VAR_8, VAR_17), VAR_11);
  if (!VAR_16) {
   if (FUNC_6(VAR_11))
    FUNC_10("%s", VAR_4[-1]);
   VAR_13 = 1;
   continue;
  }
  VAR_13 = 0;
  if (VAR_8 != -1)
   VAR_8 -= VAR_16;
  if (!(VAR_17 -= VAR_16)) {




   if (VAR_12 == VAR_0 || VAR_12 == VAR_2 ||
       VAR_19 == 0 ||
       FUNC_1(VAR_14, VAR_15, VAR_6) != 0) {
    if (VAR_12 == VAR_1 || VAR_12 == VAR_2)
     VAR_12 = VAR_3;
    return(VAR_14);
   }
   if (VAR_12 == VAR_3)
    (void)FUNC_9("*\n");
   VAR_12 = VAR_1;
   VAR_5 += VAR_6;
   VAR_17 = VAR_6;
   VAR_18 = 0;
  }
  else
   VAR_18 += VAR_16;
 }
}
