
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (void*,char*) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 void* VAR_7 ;
 int FUNC_11 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (void*,char*,...) ;
 char* FUNC_13 (char*,char) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_16 (int VAR_14, char *VAR_15[]) {
  int VAR_16;
  int VAR_17 = 1;
  FUNC_11();
  VAR_6 = FUNC_13 (VAR_15[0], '/');
  VAR_6 = (VAR_6 == ((void*)0)) ? VAR_15[0] : VAR_6 + 1;
  int VAR_18 = 0;
  while ((VAR_16 = FUNC_6 (VAR_14, VAR_15, "m:vu:Ip:g:V:TP:S")) != -1) {
    switch (VAR_16) {
    case 'S':
      VAR_10 = 1;
      break;
    case 'P':
      if (VAR_5) {
        FUNC_4 (VAR_5);
      }
      VAR_5 = FUNC_5 (VAR_3, "a");
      break;
    case 'T':
      VAR_17 = 0;
      break;
    case 'V':
      FUNC_12 (VAR_3, "%lld", &VAR_13);
      break;
    case 'm':
      FUNC_1 (FUNC_12 (VAR_3, "%d,%d", &VAR_9, &VAR_8) == 2);
      FUNC_1 (VAR_8 > 0 && VAR_8 <= 1000 && VAR_9 >= 0 && VAR_9 < VAR_8);
      break;
    case 'v':
      VAR_12++;
      break;
    case 'u':
      VAR_11 = VAR_3;
      break;
    case 'I':
      VAR_2 = 1;
      break;
    case 'p':
      VAR_7 = VAR_3;
      break;
    case 'g':
      FUNC_1 (VAR_18 < VAR_1);
      VAR_0[VAR_18++] = VAR_3;
    }
  }

  if (VAR_13 < 0) {
    FUNC_15 ();
    FUNC_10 ("volume_id is not given\n");
    FUNC_3 (1);
  }

  if (!VAR_8) {
    FUNC_15 ();
    FUNC_10 ("-m option is not given\n");
    FUNC_3 (1);
  }

  if (10000 % VAR_8) {
    FUNC_10 ("split_modulo should divides 10000\n");
    FUNC_3 (1);
  }

  if (FUNC_2 (VAR_11) < 0) {
    FUNC_10 ("fatal: cannot change user to %s\n", VAR_11 ? VAR_11 : "(none)");
    FUNC_3(1);
  }

  for (VAR_16 = VAR_4; VAR_16 < VAR_14; VAR_16++) {
    FUNC_14 (VAR_15[VAR_16]);
  }
  for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
    FUNC_14 (VAR_0[VAR_16]);
  }

  FUNC_9 ();
  FUNC_0 (((void*)0));
  if (VAR_17) {
    FUNC_7 ();
  }

  for (VAR_16 = VAR_4; VAR_16 < VAR_14; VAR_16++) {
    FUNC_8 (VAR_15[VAR_16], 1);
  }
  for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
    FUNC_8 (VAR_0[VAR_16], -1);
  }




  if (VAR_5) {
    FUNC_4 (VAR_5);
  }

  return 0;
}
