
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zone_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (void*) ;
 int VAR_2 ;
 int * FUNC_3 (char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 char* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 char* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_13 (int *,int *) ;

int FUNC_14 (int VAR_15, char *VAR_16[]) {
  int VAR_17;

  VAR_10 = VAR_16[0];

  while ((VAR_17 = FUNC_8 (VAR_15, VAR_16, "c:l:u:v")) != -1) {
    switch (VAR_17) {
    case 'c':
      VAR_7 = FUNC_2 (VAR_8);
      break;
    case 'l':
      VAR_6 = VAR_8;
      break;
    case 'u':
      VAR_13 = VAR_8;
      break;
    case 'v':
      VAR_14++;
      break;
    default:
      FUNC_7 (VAR_11, "Unimplemented option %c\n", VAR_17);
      FUNC_12 ();
    }
  }
  if (VAR_15 != VAR_9 + 2) {
    FUNC_12 ();
    return 2;
  }

  if (FUNC_10 (VAR_7 + 16) < 0) {
    FUNC_9 ("fatal: cannot raise open file limit to %d\n", VAR_7 + 16);
    FUNC_5 (1);
  }

  if (FUNC_4 (VAR_13) < 0) {
    FUNC_9 ("fatal: cannot change user to %s\n", VAR_13 ? VAR_13 : "(none)");
    FUNC_5 (1);
  }



  zone_t *VAR_18 = FUNC_3 (VAR_16[VAR_9], 1);
  FUNC_1 (*VAR_18);
  zone_t *VAR_19 = FUNC_3 (VAR_16[VAR_9+1], 0);
  FUNC_1 (*VAR_19);

  FUNC_1 (VAR_3);
  FUNC_1 (!VAR_2);
  FUNC_1 (FUNC_0 (VAR_0) == VAR_5);

  FUNC_13 (VAR_18, VAR_19);
  FUNC_6 ();
  FUNC_11 (2);
  if (VAR_14) {
    FUNC_7 (VAR_12, "%d add record logevents.\n", VAR_1);
    FUNC_7 (VAR_12, "%d delete record logevents.\n", VAR_4);
  }

  return 0;
}
