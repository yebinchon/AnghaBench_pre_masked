
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* iconfigfile; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int*,scalar_t__*,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 () ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,size_t) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (int *,int ,char*,char*) ;
 int FUNC_10 (char*,char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char*,char*) ;
 size_t FUNC_13 (char*) ;
 char* FUNC_14 (char*,char*) ;
 size_t FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*) ;
 char* FUNC_17 (scalar_t__) ;
 char* FUNC_18 (char*) ;

int
FUNC_19 (int *VAR_5, char ***VAR_6)
{
  char VAR_7[VAR_1 + 1];
  char *VAR_8 = ((void*)0), *VAR_9, *VAR_10, *VAR_11;
  FILE *VAR_12;
  int VAR_13, VAR_14 = 0;
  size_t VAR_15;


  FUNC_1 (&VAR_3, &VAR_4, FUNC_18 ((char *) *VAR_6[0]));


  VAR_8 = FUNC_6 ();
  if (VAR_8 == ((void*)0))
    return VAR_0;


  if ((VAR_12 = FUNC_4 (VAR_8, "r")) == ((void*)0)) {
    FUNC_5 (VAR_8);
    return VAR_0;
  }

  while (FUNC_3 (VAR_7, sizeof VAR_7, VAR_12) != ((void*)0)) {
    while (VAR_7[0] == ' ' || VAR_7[0] == '\t')
      FUNC_8 (VAR_7, VAR_7 + 1, FUNC_13 (VAR_7));
    VAR_14++;
    if (VAR_7[0] == '\n' || VAR_7[0] == '\r' || VAR_7[0] == '#')
      continue;


    VAR_15 = FUNC_12 (VAR_7, " \t");
    if (FUNC_13 (VAR_7) == VAR_15)
      FUNC_0 ("Malformed config key at line: %d", VAR_14);

    VAR_7[VAR_15] = '\0';



    while ((VAR_11 = FUNC_14 (VAR_7, "_")) != ((void*)0))
      *VAR_11 = '-';


    if (FUNC_7 (VAR_7))
      continue;


    VAR_9 = VAR_7 + (VAR_15 + 1);
    VAR_15 = FUNC_15 (VAR_9, " \t");
    if (FUNC_13 (VAR_7) == VAR_15)
      FUNC_0 ("Malformed config value at line: %d", VAR_14);
    VAR_9 = VAR_9 + VAR_15;
    VAR_9 = FUNC_16 (VAR_9);

    if (FUNC_11 ("false", VAR_9) == 0)
      continue;


    VAR_10 = FUNC_17 (FUNC_9 (((void*)0), 0, "--%s", VAR_7) + 1);
    FUNC_10 (VAR_10, "--%s", VAR_7);

    FUNC_1 (&VAR_3, &VAR_4, VAR_10);
    if (FUNC_11 ("true", VAR_9) != 0)
      FUNC_1 (&VAR_3, &VAR_4, FUNC_18 (VAR_9));
  }


  for (VAR_13 = 1; VAR_13 < *VAR_5; VAR_13++)
    FUNC_1 (&VAR_3, &VAR_4, FUNC_18 ((char *) (*VAR_6)[VAR_13]));

  *VAR_5 = VAR_3;
  *VAR_6 = (char **) VAR_4;

  FUNC_2 (VAR_12);

  if (VAR_2.iconfigfile == ((void*)0))
    VAR_2.iconfigfile = FUNC_18 (VAR_8);

  FUNC_5 (VAR_8);
  return 0;
}
