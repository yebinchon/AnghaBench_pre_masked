
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,scalar_t__*) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 () ;
 int VAR_8 ;

int
FUNC_12(int VAR_9, char *VAR_10[])
{
 int VAR_11;
 gid_t VAR_12, VAR_13[VAR_0];
 int VAR_14, VAR_15, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

 while ((VAR_15 = FUNC_5(VAR_9, VAR_10, "f:ghlrquv")) != -1) {
  switch(VAR_15) {
  case 'f':
   VAR_1 = VAR_4;
   break;
  case 'g':
   VAR_16++;
   break;
  case 'h':
   VAR_2++;
   break;
  case 'l':
   VAR_3++;
   break;
  case 'q':
   VAR_6++;
   break;
  case 'r':
   VAR_7++;
   break;
  case 'u':
   VAR_17++;
   break;
  case 'v':
   VAR_8++;
   break;
  default:
   FUNC_11();
  }
 }
 VAR_9 -= VAR_5;
 VAR_10 += VAR_5;
 if (!VAR_17 && !VAR_16)
  VAR_17++;
 if (VAR_9 == 0) {
  if (VAR_17)
   VAR_18 += FUNC_9(FUNC_6());
  if (VAR_16) {
   VAR_12 = FUNC_3();
   VAR_11 = FUNC_4(VAR_0, VAR_13);
   if (VAR_11 < 0)
    FUNC_2(1, "getgroups");
   VAR_18 += FUNC_7(VAR_12);
   for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
    if (VAR_13[VAR_14] != VAR_12)
     VAR_18 += FUNC_7(VAR_13[VAR_14]);
  }
  return(VAR_18);
 }
 if (VAR_17 && VAR_16)
  FUNC_11();
 if (VAR_17) {
  for (; VAR_9 > 0; VAR_9--, VAR_10++) {
   if (FUNC_0(*VAR_10))
    VAR_18 += FUNC_9(FUNC_1(*VAR_10));
   else
    VAR_18 += FUNC_10(*VAR_10);
  }
  return(VAR_18);
 }
 if (VAR_16) {
  for (; VAR_9 > 0; VAR_9--, VAR_10++) {
   if (FUNC_0(*VAR_10))
    VAR_18 += FUNC_7(FUNC_1(*VAR_10));
   else
    VAR_18 += FUNC_8(*VAR_10);
  }
 }
 return(VAR_18);
}
