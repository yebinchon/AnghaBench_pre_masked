
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vector ;
struct TYPE_5__ {int n; int mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int,char**,char*) ;
 int * VAR_6 ;
 int FUNC_7 (int) ;
 long long* VAR_7 ;
 int FUNC_8 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int,int *,int) ;
 void* VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 char* VAR_11 ;
 TYPE_1__* FUNC_12 (int) ;
 long long* FUNC_13 (int) ;
 int FUNC_14 () ;
 int VAR_12 ;
 int FUNC_15 () ;
 int VAR_13 ;
 char* VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (scalar_t__,long long*,int) ;

int FUNC_19 (int VAR_16, char *VAR_17[]) {
  int VAR_18;

  FUNC_14 ();
  VAR_11 = VAR_17[0];

  if (VAR_16 == 1) {
    FUNC_15();
    return 2;
  }

  while ((VAR_18 = FUNC_6 (VAR_16, VAR_17, "hi:o:U:E:u:")) != -1) {
    switch (VAR_18) {
    case 'h':
      FUNC_15 ();
      return 2;
    case 'i':
      VAR_6 = VAR_8;
      break;
    case 'o':
      VAR_10 = VAR_8;
      break;
    case 'U':
      VAR_13 = FUNC_1 (VAR_8);
      break;
    case 'E':
      VAR_3 = FUNC_1 (VAR_8);
      break;
    case 'u':
      VAR_14 = VAR_8;
      break;
    }
  }
  if (VAR_16 != VAR_9) {
    FUNC_15();
    return 2;
  }

  if (FUNC_2 (VAR_14) < 0) {
    FUNC_5 (VAR_12, "fatal: cannot change user to %s\n", VAR_14 ? VAR_14 : "(none)");
    FUNC_3 (1);
  }

  FUNC_0 (VAR_13 >= 0);
  FUNC_0 (VAR_3 >= 0);

  FUNC_7 (VAR_3 + 1);

  int VAR_19 = VAR_13 / VAR_3;
  VAR_15 = FUNC_12 (sizeof (vector) * (VAR_19 + 2));
  FUNC_0 (VAR_15 != ((void*)0));

  for (VAR_18 = 0; VAR_18 <= VAR_19; VAR_18++) {
    FUNC_17 (&VAR_15[VAR_18]);
  }

  if (VAR_6 != ((void*)0)) {
    FUNC_11 (0, VAR_6, 0);
  } else {
    VAR_5[0] = 0;
  }
  VAR_4[0] = 0;

  FUNC_11 (1, VAR_10, 2);

  long long VAR_20 = -1;
  FUNC_18 (VAR_5[1], &VAR_20, sizeof (long long));

  while (FUNC_9()) {

    int VAR_21 = VAR_0 / VAR_3;
    FUNC_16 (&VAR_15[VAR_21], VAR_1);
  }


  int VAR_22 = sizeof (int) * (VAR_19 + 2) + sizeof (long long);
  VAR_20 = VAR_22;
  VAR_7 = FUNC_13 (VAR_22);
  VAR_7[0] = VAR_19 + 1;

  FUNC_0 (FUNC_8 (VAR_5[1], VAR_22, VAR_2) == VAR_22);

  for (VAR_18 = 0; VAR_18 <= VAR_19; VAR_18++) {
    VAR_7[VAR_18 + 1] = VAR_15[VAR_18].n * sizeof (int);
    VAR_20 += VAR_15[VAR_18].n * sizeof (int);
    FUNC_10 (VAR_15[VAR_18].mem, VAR_15[VAR_18].n * sizeof (int));
  }
  FUNC_4();

  FUNC_0 (FUNC_8 (VAR_5[1], 0, VAR_2) == 0);
  FUNC_18 (VAR_5[1], &VAR_20, sizeof (long long));
  FUNC_18 (VAR_5[1], VAR_7, VAR_22 - sizeof (long long));

  return 0;
}
