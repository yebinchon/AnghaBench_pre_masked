
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,long long,long long) ;
 int FUNC_1 (long,int,long long*) ;
 char* FUNC_2 (char const*,long*,long long*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (long,int,long long) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, const char *VAR_2[], int VAR_3)
{
 char *VAR_4, *VAR_5;
 long VAR_6;
 long long VAR_7;
 int VAR_8 = 0, VAR_9;

 if (VAR_1 == 1) {


  VAR_4 = FUNC_2(VAR_2[0], &VAR_6, ((void*)0));
  if (*VAR_4) {
   if (*VAR_4 != '=') {
    FUNC_3("invalid register \"%s\"", VAR_2[0]);
    return (VAR_0);
   }

   VAR_8 = 1;
   VAR_5 = VAR_4 + 1;
   VAR_4 = FUNC_2(VAR_5, ((void*)0), &VAR_7);

   if (*VAR_4) {
    FUNC_3("invalid value \"%s\"", VAR_5);
    return (VAR_0);
   }
  }

 } else if (VAR_1 == 2) {


  VAR_8 = 1;

  VAR_4 = FUNC_2(VAR_2[0], &VAR_6, ((void*)0));
  if (*VAR_4) {
   FUNC_3("invalid register \"%s\"", VAR_2[0]);
   return (VAR_0);
  }

  VAR_4 = FUNC_2(VAR_2[1], ((void*)0), &VAR_7);
  if (*VAR_4) {
   FUNC_3("invalid value \"%s\"", VAR_2[1]);
   return (VAR_0);
  }
 } else {
  FUNC_3("reg: invalid number of arguments (%d)", VAR_1);
  return (VAR_0);
 }

 if (VAR_8)
  VAR_9 = FUNC_4(VAR_6, VAR_3, VAR_7);
 else {
  VAR_9 = FUNC_1(VAR_6, VAR_3, &VAR_7);
  if (VAR_9 == 0)
   FUNC_0("0x%llx [%llu]\n", VAR_7, VAR_7);
 }

 return (VAR_9);
}
