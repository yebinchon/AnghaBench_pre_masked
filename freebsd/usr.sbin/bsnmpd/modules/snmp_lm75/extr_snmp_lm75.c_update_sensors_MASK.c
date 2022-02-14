
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int*,int*,size_t) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int*,size_t,int*,size_t*) ;
 scalar_t__ FUNC_9 (int*,size_t,char*,int) ;
 int FUNC_10 (char*,int*,size_t*) ;
 int FUNC_11 (int ,char*,size_t) ;

__attribute__((used)) static int
FUNC_12(void)
{
 char VAR_5[VAR_0];
 int VAR_6, VAR_7[5], *VAR_8, *VAR_9;
 size_t VAR_10, VAR_11, VAR_12;
 static uint64_t VAR_13;

 VAR_13 = FUNC_3();
 if (VAR_13 - VAR_3 < VAR_2)
  return (0);

 VAR_3 = VAR_13;


 FUNC_2();
 VAR_4 = 0;


 VAR_12 = 2;
 if (FUNC_10("dev.lm75", VAR_7, &VAR_12) == -1)
  return (0);

 VAR_9 = (int *)FUNC_4(sizeof(int) * VAR_12);
 if (VAR_9 == ((void*)0)) {
  FUNC_6("malloc");
  return (-1);
 }
 FUNC_5(VAR_9, VAR_7, VAR_12 * sizeof(int));
 VAR_10 = VAR_12;


 for (;;) {


  VAR_11 = 0;
  if (FUNC_8(VAR_9, VAR_10, ((void*)0), &VAR_11) == -1) {
   FUNC_1(VAR_9);
   return (0);
  }

  VAR_8 = (int *)FUNC_4(VAR_11);
  if (VAR_8 == ((void*)0)) {
   FUNC_11(VAR_1,
       "Unable to allocate %zu bytes for resource",
       VAR_11);
   FUNC_1(VAR_9);
   return (-1);
  }
  if (FUNC_8(VAR_9, VAR_10, VAR_8, &VAR_11) == -1) {
   FUNC_1(VAR_9);
   FUNC_1(VAR_8);
   return (0);
  }
  FUNC_1(VAR_9);

  for (VAR_6 = 0; VAR_6 < (int)VAR_12; VAR_6++)
   if (VAR_8[VAR_6] != VAR_7[VAR_6]) {
    FUNC_1(VAR_8);
    return (0);
   }
  VAR_9 = (int *)FUNC_4(VAR_11);
  if (VAR_9 == ((void*)0)) {
   FUNC_11(VAR_1,
       "Unable to allocate %zu bytes for resource",
       VAR_11);
   FUNC_1(VAR_8);
   return (-1);
  }
  FUNC_5(VAR_9, VAR_8, VAR_11);
  FUNC_1(VAR_8);
  VAR_10 = VAR_11 / sizeof(int);


  if (FUNC_9(VAR_9, VAR_10, VAR_5, sizeof(VAR_5)) != 0)
   continue;

  if (FUNC_7(VAR_5, "temperature"))
   if (FUNC_0(VAR_5) != 0) {
    FUNC_1(VAR_9);
    return (-1);
   }
 }

 return (0);
}
