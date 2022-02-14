
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 char* VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int,int,long long,int ) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (char const*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 long long VAR_8 ;
 int FUNC_12 () ;
 void* VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_13 (int ,int ) ;
 int VAR_15 ;
 int FUNC_14 (void*,char*,long long*,char*) ;
 int FUNC_15 (char*,int ,int ) ;
 int VAR_16 ;
 int FUNC_16 () ;
 void* VAR_17 ;
 int VAR_18 ;

int FUNC_17 (int VAR_19, char **VAR_20) {
  VAR_11 = VAR_20[0];

  int VAR_21;
  long long VAR_22 = 0;
  char VAR_23 = 0;
  bool VAR_24 = VAR_1;
  char const *VAR_25 = 0;
  while ((VAR_21 = FUNC_10 (VAR_19, VAR_20, "hvu:B:p:c")) != -1) {
    switch (VAR_21) {
    case 'h':
      FUNC_16();
      return 2;
    case 'v':
      VAR_18++;
      break;
    case 'u':
      VAR_17 = VAR_9;
      break;
    case 'B':
      FUNC_3 (FUNC_14 (VAR_9, "%lld%c", &VAR_22, &VAR_23) >= 1);
      switch (VAR_23 | 0x20) {
      case 'k': VAR_22 <<= 10; break;
      case 'm': VAR_22 <<= 20; break;
      case 'g': VAR_22 <<= 30; break;
      case 't': VAR_22 <<= 40; break;
      default: FUNC_3 (VAR_23 == 0x20);
      }
      if (VAR_22 >= 1024 && VAR_22 < (1LL << 60)) {
        VAR_8 = VAR_22;
      }
      break;
    case 'p':
      VAR_25 = VAR_9;
      break;
    case 'c':
      VAR_24 = VAR_4;
      break;
    }
  }

  if (VAR_19 != VAR_10 + 1) {
    FUNC_16();
    return 2;
  }

  FUNC_0 ();

  VAR_5 = VAR_20[VAR_10];
  if (VAR_24) {
    FUNC_4 ();
  }
  FUNC_1 ("" );

  FUNC_3 (FUNC_2 (VAR_0) == VAR_7);

  FUNC_13 (VAR_2, VAR_14);
  FUNC_13 (VAR_3, VAR_15);


  if (VAR_25) {
    FUNC_11 (VAR_25);
  }

  FUNC_8 (1);



  if (VAR_18 > 0) {
    FUNC_9 (VAR_16, "read: %d records read, %d processed\nwritten: log_pos=%lld, used_z_memory=%d\n",
             VAR_13, VAR_12, (long long)VAR_6, FUNC_6 ());
  }

  FUNC_7 ();

  if (VAR_18 > 2) {
    FUNC_15 ("Memory lost: z_malloc = $3%ld$^, dl_malloc = $3%lld$^\n", FUNC_6 (), FUNC_5 ());
  }

  FUNC_12();
  return 0;
}
