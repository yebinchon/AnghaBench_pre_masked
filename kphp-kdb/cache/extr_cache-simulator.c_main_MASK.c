
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long long disk_size; long long default_file_size; long long download_speed; char* amortization_counters_initialization_string; int init_using_greedy_strategy; int delay_between_priority_lists_requests; void* optimization; } ;
struct TYPE_3__ {int log_readto_pos; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*) ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int VAR_15 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int VAR_16 ;
 int FUNC_16 () ;
 TYPE_2__ VAR_17 ;
 TYPE_1__ VAR_18 ;
 int FUNC_17 (void*,char*,long long*,char*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 char* VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (int,char*) ;

int FUNC_21 (int VAR_21, char *VAR_22[]) {
  int VAR_23;
  char VAR_24;
  long long VAR_25;

  FUNC_16 ();
  VAR_4 = 1;

  while ((VAR_23 = FUNC_10 (VAR_21, VAR_22, "D:F:O:R:S:T:Ua:b:c:dghl:u:v")) != -1) {
    switch (VAR_23) {
     case 'D':
     case 'F':
     case 'S':
       VAR_24 = 0;
       FUNC_1 (FUNC_17 (VAR_13, "%lld%c", &VAR_25, &VAR_24) >= 1);
       switch (VAR_24 | 0x20) {
         case 'k': VAR_25 <<= 10; break;
         case 'm': VAR_25 <<= 20; break;
         case 'g': VAR_25 <<= 30; break;
         case 't': VAR_25 <<= 40; break;
         default: FUNC_1 (VAR_24 == 0x20);
       }
       FUNC_1 (VAR_25 >= 0);
       if (VAR_23 == 'D') {
         VAR_17.disk_size = VAR_25;
       }
       if (VAR_23 == 'F') {
         VAR_17.default_file_size = VAR_25;
       }
       if (VAR_23 == 'S') {
         VAR_17.download_speed = VAR_25;
       }
       break;
    case 'O':
      VAR_17.optimization = FUNC_2 (VAR_13);
      break;
    case 'R':
      VAR_17.delay_between_priority_lists_requests = FUNC_3 (VAR_13);
      break;
    case 'T':
      VAR_17.amortization_counters_initialization_string = VAR_13;
      break;
    case 'U':
      VAR_15 = 1;
      break;
    case 'a':
      VAR_5 = VAR_13;
      break;
    case 'b':
      VAR_3 = FUNC_2 (VAR_13);
      if (VAR_3 <= 0) {
        VAR_3 = VAR_0;
      }
      break;
    case 'c':
      VAR_12 = FUNC_2 (VAR_13);
      if (VAR_12 <= 0 || VAR_12 > VAR_2) {
       VAR_12 = VAR_2;
      }
      break;
    case 'd':
      VAR_9 ^= 1;
      break;
    case 'g':
      VAR_17.init_using_greedy_strategy = 1;
      break;
    case 'h':
      FUNC_19 ();
      return 2;
    case 'l':
      VAR_11 = VAR_13;
      break;
    case 'u':
      VAR_19 = VAR_13;
      break;
    case 'v':
      VAR_20++;
      break;
    }
  }
  if (VAR_21 != VAR_14 + 1) {
    FUNC_19();
    return 2;
  }

  if (FUNC_15 (VAR_12 + 16) < 0) {
    FUNC_12 ("fatal: cannot raise open file limit to %d\n", VAR_12 + 16);
    FUNC_9 (1);
  }

  FUNC_0 (0);

  if (FUNC_7 (VAR_19) < 0) {
    FUNC_12 ("fatal: cannot change user to %s\n", VAR_19 ? VAR_19 : "(none)");
    FUNC_9 (1);
  }

  FUNC_11 ();
  FUNC_5 (2000000);

  if (FUNC_6 (VAR_17.amortization_counters_initialization_string) < 0) {
    FUNC_12 ("cache_set_amortization_tables_initialization_string (\"%s\") failed.\n", VAR_17.amortization_counters_initialization_string);
    FUNC_9 (1);
  }

  if (FUNC_8 (VAR_22[VAR_14], VAR_5) < 0) {
    FUNC_12 ("cannot open binlog files for %s\n", VAR_5 ? VAR_5 : VAR_22[VAR_14]);
    FUNC_9 (1);
  }

  FUNC_20 (3, "engine_preload_filelist done\n");

  VAR_6 &= ~VAR_1;

  FUNC_14 ("Init URLs size field");
  VAR_18.log_readto_pos = VAR_10;
  FUNC_4 ();

  if (VAR_17.init_using_greedy_strategy) {
    VAR_16 = VAR_7;
    FUNC_14 ("Init cache using greedy strategy");
  }

  VAR_16 = VAR_8;
  FUNC_14 ("Simulation");
  FUNC_13 ();
  FUNC_18 ();
  return 0;
}
