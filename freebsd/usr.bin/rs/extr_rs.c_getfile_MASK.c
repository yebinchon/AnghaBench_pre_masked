
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 char* VAR_8 ;
 char** VAR_9 ;
 int VAR_10 ;
 int FUNC_1 () ;
 char** FUNC_2 (char**) ;
 int VAR_11 ;
 int VAR_12 ;
 char VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (char*) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_4(void)
{
 char *VAR_18;
 char *VAR_19;
 char **VAR_20;
 int VAR_21;
 int VAR_22 = (VAR_10 & VAR_3 ? 0 : 1);
 int VAR_23 = VAR_10 & VAR_2;
 char **VAR_24;

 while (VAR_17--) {
  VAR_21 = FUNC_1();
  if (VAR_10 & VAR_5)
   FUNC_3(VAR_8);
  if (VAR_21 == VAR_0)
   return;
 }
 FUNC_1();
 if (VAR_10 & VAR_1 && VAR_7 < VAR_16)
  VAR_10 |= VAR_4;
 if (VAR_10 & VAR_4)
  VAR_11 = 1;
 else
  for (VAR_18 = VAR_8, VAR_19 = VAR_8 + VAR_7; VAR_18 < VAR_19; VAR_18++) {
   if (*VAR_18 == VAR_13 && VAR_22)
    continue;
   VAR_11++;
   while (*VAR_18 && *VAR_18 != VAR_13)
    VAR_18++;
  }
 VAR_20 = FUNC_2(VAR_9);
 do {
  if (VAR_10 & VAR_4) {
   *VAR_20 = VAR_8;
   FUNC_0(VAR_20);
   if (VAR_14 < VAR_7)
    VAR_14 = VAR_7;
   VAR_12++;
   continue;
  }
  for (VAR_18 = VAR_8, VAR_19 = VAR_8 + VAR_7; VAR_18 < VAR_19; VAR_18++) {
   if (*VAR_18 == VAR_13 && VAR_22)
    continue;
   if (*VAR_18 == VAR_13)
    *VAR_20 = VAR_6;
   else
    *VAR_20 = VAR_18;
   while (VAR_18 < VAR_19 && *VAR_18 != VAR_13)
    VAR_18++;
   *VAR_18 = '\0';
   if (VAR_14 < VAR_18 - *VAR_20)
    VAR_14 = VAR_18 - *VAR_20;
   FUNC_0(VAR_20);
  }
  VAR_12++;
  if (VAR_23) {
   VAR_24 = VAR_9 + VAR_12 * VAR_11;
   while (VAR_20 < VAR_24) {
    *VAR_20 = VAR_6;
    FUNC_0(VAR_20);
   }
  }
 } while (FUNC_1() != VAR_0);
 *VAR_20 = 0;
 VAR_15 = VAR_20 - VAR_9;
}
