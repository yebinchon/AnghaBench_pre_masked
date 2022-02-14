
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vector ;
struct TYPE_4__ {int n; int mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int * VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 void* VAR_8 ;
 long long* VAR_9 ;
 int FUNC_10 (int ,int,int ) ;
 int VAR_10 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int) ;
 void* VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 char* VAR_14 ;
 TYPE_1__* FUNC_13 (int) ;
 long long* FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int VAR_15 ;
 int FUNC_17 (int *) ;
 int VAR_16 ;
 int FUNC_18 () ;
 int VAR_17 ;
 char* VAR_18 ;
 TYPE_1__* VAR_19 ;
 int FUNC_19 (TYPE_1__*) ;
 scalar_t__ VAR_20 ;
 int FUNC_20 (int ,long long*,int) ;

int FUNC_21 (int VAR_21, char *VAR_22[]) {
  int VAR_23;

  FUNC_15();
  VAR_14 = VAR_22[0];
  FUNC_16 (FUNC_17 (((void*)0)));

  if (VAR_21 == 1) {
    FUNC_18();
    return 2;
  }

  while ((VAR_23 = FUNC_7 (VAR_21, VAR_22, "i:o:hvU:E:u:T:m:")) != -1) {
    switch (VAR_23) {
    case 'v':
      VAR_20++;
      break;
    case 'h':
      FUNC_18();
      return 2;
    case 'i':
      VAR_8 = VAR_11;
      break;
    case 'o':
      VAR_13 = VAR_11;
      break;
    case 'U':
      VAR_17 = FUNC_1 (VAR_11);
      break;
    case 'E':
      VAR_3 = FUNC_1 (VAR_11);
      break;
    case 'T':
      FUNC_0 (VAR_16 == -1);
      VAR_16 = FUNC_1 (VAR_11);
      break;
    case 'u':
      VAR_18 = VAR_11;
      break;
    case 'm':
      VAR_10 = FUNC_1 (VAR_11);
      FUNC_0 (1 <= VAR_10 && VAR_10 <= 10000000);
      break;
    }
  }

  FUNC_0 (VAR_16 >= 0);

  if (VAR_21 != VAR_12) {
    FUNC_18();
    return 2;
  }

  if (VAR_20) {
    FUNC_5 (VAR_15, "userN = %d, engineN = %d\n", VAR_17, VAR_3);
  }

  if (FUNC_2 (VAR_18) < 0) {
    FUNC_5 (VAR_15, "fatal: cannot change user to %s\n", VAR_18 ? VAR_18 : "(none)");
    FUNC_3 (1);
  }

  FUNC_0 (0 < VAR_3);

  FUNC_9 (2);

  FUNC_8();

  int VAR_24 = VAR_17 / VAR_3;
  VAR_19 = FUNC_13 (sizeof (vector) * (VAR_24 + 2));

  for (VAR_23 = 0; VAR_23 <= VAR_24; VAR_23++) {
    FUNC_19 (&VAR_19[VAR_23]);
  }

  FUNC_0 (VAR_7[0] % 8 == 0);

  long long VAR_25 = VAR_7[0] / 8;

  FUNC_0 (VAR_25 > 0);

  int VAR_26 = -1;
  while (VAR_25--) {
    FUNC_11();
    if (VAR_0 != VAR_26) {
      VAR_26 = VAR_0;
      FUNC_6 (VAR_5, VAR_6);
      VAR_6 = 0;
    }

    VAR_5[VAR_6++] = VAR_1;
  }
  FUNC_6 (VAR_5, VAR_6);

  long long VAR_27 = -1;
  FUNC_20 (VAR_4[1], &VAR_27, sizeof (long long));


  int VAR_28 = sizeof (int) * (VAR_24 + 2) + sizeof (long long);
  VAR_27 = VAR_28;
  VAR_9 = FUNC_14 (VAR_28);
  VAR_9[0] = VAR_24 + 1;

  FUNC_0 (FUNC_10 (VAR_4[1], VAR_28, VAR_2) == VAR_28);

  for (VAR_23 = 0; VAR_23 <= VAR_24; VAR_23++) {
    VAR_9[VAR_23 + 1] = VAR_19[VAR_23].n * sizeof (int);
    VAR_27 += VAR_19[VAR_23].n * sizeof (int);
    FUNC_12 (VAR_19[VAR_23].mem, VAR_19[VAR_23].n * sizeof (int));
  }
  FUNC_4();

  FUNC_0 (FUNC_10 (VAR_4[1], 0, VAR_2) == 0);
  FUNC_20 (VAR_4[1], &VAR_27, sizeof (long long));
  FUNC_20 (VAR_4[1], VAR_9, VAR_28 - sizeof (long long));

  return 0;
}
