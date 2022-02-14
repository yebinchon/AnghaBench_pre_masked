
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char**,size_t*,int *) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*,char const*,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,char*,char const*,char**,size_t*) ;
 int FUNC_11 (char*,char*) ;
 char** VAR_3 ;
 int FUNC_12 () ;
 int FUNC_13 (int *,int *) ;

int
FUNC_14(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 FILE *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16, *VAR_17;
 size_t VAR_18, VAR_19;
 char *VAR_20, *VAR_21;
 ssize_t VAR_22, VAR_23;
 wchar_t *VAR_24, *VAR_25;
 const char **VAR_26;

 (void) FUNC_9(VAR_0, "");

 VAR_10 = VAR_11 = VAR_12 = 1;

 while ((VAR_9 = FUNC_7(VAR_4, VAR_5, "123i")) != -1)
  switch(VAR_9) {
  case '1':
   VAR_10 = 0;
   break;
  case '2':
   VAR_11 = 0;
   break;
  case '3':
   VAR_12 = 0;
   break;
  case 'i':
   VAR_1 = 1;
   break;
  case '?':
  default:
   FUNC_12();
  }
 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 if (VAR_4 != 2)
  FUNC_12();

 VAR_13 = FUNC_4(VAR_5[0]);
 VAR_14 = FUNC_4(VAR_5[1]);


 VAR_26 = VAR_3;
 VAR_15 = VAR_16 = VAR_17 = ((void*)0);
 if (VAR_10)
  VAR_15 = *VAR_26++;
 if (VAR_11)
  VAR_16 = *VAR_26++;
 if (VAR_12)
  VAR_17 = *VAR_26;

 VAR_18 = VAR_19 = 0;
 VAR_20 = VAR_21 = ((void*)0);
 VAR_22 = VAR_23 = -1;

 for (VAR_7 = VAR_8 = 1;;) {

  if (VAR_7) {
   VAR_22 = FUNC_6(&VAR_20, &VAR_18, VAR_13);
   if (VAR_22 < 0 && FUNC_3(VAR_13))
    FUNC_1(1, "%s", VAR_5[0]);
   if (VAR_22 > 0 && VAR_20[VAR_22 - 1] == '\n')
    VAR_20[VAR_22 - 1] = '\0';

  }
  if (VAR_8) {
   VAR_23 = FUNC_6(&VAR_21, &VAR_19, VAR_14);
   if (VAR_23 < 0 && FUNC_3(VAR_14))
    FUNC_1(1, "%s", VAR_5[1]);
   if (VAR_23 > 0 && VAR_21[VAR_23 - 1] == '\n')
    VAR_21[VAR_23 - 1] = '\0';
  }


  if (VAR_22 < 0) {
   if (VAR_23 >= 0 && VAR_16 != ((void*)0))
    FUNC_10(VAR_14, VAR_5[1], VAR_16, &VAR_21, &VAR_19);
   break;
  }
  if (VAR_23 < 0) {
   if (VAR_22 >= 0 && VAR_15 != ((void*)0))
    FUNC_10(VAR_13, VAR_5[0], VAR_15, &VAR_20, &VAR_18);
   break;
  }

  VAR_25 = ((void*)0);
  if ((VAR_24 = FUNC_0(VAR_20)) != ((void*)0))
   VAR_25 = FUNC_0(VAR_21);
  if (VAR_24 == ((void*)0) || VAR_25 == ((void*)0))
   VAR_6 = FUNC_11(VAR_20, VAR_21);
  else
   VAR_6 = FUNC_13(VAR_24, VAR_25);
  if (VAR_24 != ((void*)0))
   FUNC_5(VAR_24);
  if (VAR_25 != ((void*)0))
   FUNC_5(VAR_25);


  if (!VAR_6) {
   VAR_7 = VAR_8 = 1;
   if (VAR_17 != ((void*)0))
    (void)FUNC_8("%s%s\n", VAR_17, VAR_20);
   continue;
  }


  if (VAR_6 < 0) {
   VAR_7 = 1;
   VAR_8 = 0;
   if (VAR_15 != ((void*)0))
    (void)FUNC_8("%s%s\n", VAR_15, VAR_20);
  } else {
   VAR_7 = 0;
   VAR_8 = 1;
   if (VAR_16 != ((void*)0))
    (void)FUNC_8("%s%s\n", VAR_16, VAR_21);
  }
 }
 FUNC_2(0);
}
