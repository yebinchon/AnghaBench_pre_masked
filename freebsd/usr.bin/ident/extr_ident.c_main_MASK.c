
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,char*) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int* FUNC_9 (int) ;
 int FUNC_10 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (char*,char*) ;

int
FUNC_13(int VAR_6, char **VAR_7)
{
 bool VAR_8 = 0;
 int VAR_9, VAR_10, *VAR_11, VAR_12;
 int VAR_13 = VAR_2;
 size_t VAR_14;
 FILE *VAR_15;

 while ((VAR_9 = FUNC_7(VAR_6, VAR_7, "qV")) != -1) {
  switch (VAR_9) {
  case 'q':
   VAR_8 = 1;
   break;
  case 'V':

   return (VAR_2);
  default:
   FUNC_4(VAR_1, "usage: %s [-q] [-V] [file...]",
       FUNC_8());
  }
 }

 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;

 if (FUNC_1() < 0)
  FUNC_3(VAR_1, "unable to limit stdio");

 if (VAR_6 == 0) {
  VAR_14 = 1;
  VAR_11 = FUNC_9(sizeof(*VAR_11));
  if (VAR_11 == ((void*)0))
   FUNC_3(VAR_1, "unable to allocate fds array");
  VAR_11[0] = VAR_4;
 } else {
  VAR_14 = VAR_6;
  VAR_11 = FUNC_9(sizeof(*VAR_11) * VAR_14);
  if (VAR_11 == ((void*)0))
   FUNC_3(VAR_1, "unable to allocate fds array");

  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
   VAR_11[VAR_10] = VAR_12 = FUNC_10(VAR_7[VAR_10], VAR_3);
   if (VAR_12 < 0) {
    FUNC_12("%s", VAR_7[VAR_10]);
    VAR_13 = VAR_1;
    continue;
   }
   if (FUNC_2(VAR_12, VAR_0) < 0)
    FUNC_3(VAR_1,
        "unable to limit fcntls/rights for %s",
        VAR_7[VAR_10]);
  }
 }


 if (FUNC_0() < 0)
  FUNC_3(VAR_1, "unable to enter capability mode");

 for (VAR_10 = 0; VAR_10 < (int)VAR_14; VAR_10++) {
  if (VAR_11[VAR_10] < 0)
   continue;

  VAR_15 = FUNC_6(VAR_11[VAR_10], "r");
  if (VAR_15 == ((void*)0)) {
   FUNC_12("%s", VAR_7[VAR_10]);
   VAR_13 = VAR_1;
   continue;
  }
  if (FUNC_11(VAR_15, VAR_6 == 0 ? ((void*)0) : VAR_7[VAR_10], VAR_8) != VAR_2)
   VAR_13 = VAR_1;
  FUNC_5(VAR_15);
 }

 return (VAR_13);
}
