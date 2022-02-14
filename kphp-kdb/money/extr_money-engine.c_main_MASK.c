
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int replica_prefix; } ;
struct TYPE_13__ {TYPE_2__* info; } ;
struct TYPE_12__ {TYPE_1__* info; } ;
struct TYPE_11__ {char* filename; int file_size; } ;
struct TYPE_10__ {char* filename; scalar_t__ file_size; } ;


 void* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 long long VAR_16 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 TYPE_5__* VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,int,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,char**,char*) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_15 (char*,scalar_t__,...) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 long long VAR_32 ;
 scalar_t__ VAR_33 ;
 TYPE_4__* FUNC_17 (TYPE_5__*,scalar_t__) ;
 TYPE_3__* FUNC_18 (int ) ;
 char* VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 char* VAR_37 ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (scalar_t__,int ,void*,int ) ;
 int FUNC_22 () ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_23 (char*,char*,...) ;
 int FUNC_24 () ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_25 (int *) ;
 int FUNC_26 () ;
 int VAR_46 ;
 char* VAR_47 ;
 int VAR_48 ;
 int FUNC_27 (int,char*,...) ;
 int FUNC_28 (int ) ;

int FUNC_29 (int VAR_49, char *VAR_50[]) {
  int VAR_51, VAR_52 = 0;
  long long VAR_53;
  char VAR_54;

  FUNC_22 ();

  VAR_37 = VAR_50[0];
  VAR_32 = (1LL << 62);

  while ((VAR_51 = FUNC_12 (VAR_49, VAR_50, "a:b:c:dhi:l:p:rt:u:vB:H:MS:")) != -1) {
    switch (VAR_51) {
    case 'v':
      VAR_48++;
      break;
    case 'r':
      VAR_8 = 1;
      break;
    case 'h':
      FUNC_26 ();
      return 2;
    case 'b':
      VAR_6 = FUNC_2 (VAR_34);
      if (VAR_6 <= 0) {
 VAR_6 = VAR_0;
      }
      break;
    case 'c':
      VAR_33 = FUNC_2 (VAR_34);
      if (VAR_33 <= 0 || VAR_33 > VAR_3) {
 VAR_33 = VAR_3;
      }
      break;
    case 'p':
      VAR_36 = FUNC_2 (VAR_34);
      break;
    case 'u':
      VAR_47 = VAR_34;
      break;
    case 'i':
      VAR_40 = FUNC_3 (VAR_34);
      break;
    case 'a':
      VAR_11 = VAR_34;
      break;
    case 'M':
      FUNC_1 (!VAR_31);
      VAR_31 = 1;
      break;
    case 'S':
      FUNC_1 (!VAR_31);
      VAR_31 = -1;
      VAR_51 = -1;
      FUNC_1 (FUNC_23 (VAR_34, "%d,%d,%127[^:]:%d%n", &VAR_42, &VAR_43, VAR_29, &VAR_30, &VAR_51) >= 4);
      FUNC_1 (VAR_51 >= 0 && !VAR_34[VAR_51]);
      FUNC_1 (VAR_42 >= 0 && VAR_42 < VAR_43 && VAR_43 <= 10000);
      VAR_41 = VAR_42 + 1;
      FUNC_1 (VAR_30 > 0 && VAR_30 < 65535);
      break;
    case 'l':
      VAR_28 = VAR_34;
      break;
    case 't':
      VAR_52 = FUNC_2 (VAR_34);
      break;
    case 'B': case 'H':
      VAR_54 = 0;
      FUNC_1 (FUNC_23 (VAR_34, "%lld%c", &VAR_53, &VAR_54) >= 1);
      switch (VAR_54 | 0x20) {
      case 'k': VAR_53 <<= 10; break;
      case 'm': VAR_53 <<= 20; break;
      case 'g': VAR_53 <<= 30; break;
      case 't': VAR_53 <<= 40; break;
      default: FUNC_1 (VAR_54 == 0x20);
      }
      if (VAR_51 == 'B' && VAR_53 >= 1024 && VAR_53 < (1LL << 60)) {
        VAR_32 = VAR_53;
      } else if (VAR_51 == 'H' && VAR_53 >= (1LL << 20) && VAR_53 <= (sizeof(long) == 4 ? (3LL << 30) : (200LL << 30))) {
 VAR_16 = VAR_53;
      }
      break;
    case 'd':
      VAR_12 ^= 1;
      break;
    }
  }
  FUNC_1 (!VAR_31 || VAR_32 == (1LL << 62));
  if (VAR_49 != VAR_35 + 1 && VAR_49 != VAR_35 + 2) {
    FUNC_26 ();
    return 2;
  }

  if (VAR_31 < 0) {
    FUNC_27 (1, "slave mode enabled: slice %d out of %d, master is at %s port %d\n", VAR_42, VAR_43, VAR_29, VAR_30);
  }

  if (FUNC_19 (VAR_33 + 16) < 0) {
    FUNC_15 ("fatal: cannot raise open file limit to %d\n", VAR_33+16);
    FUNC_9 (1);
  }

  if (VAR_36 < VAR_4 && !VAR_22) {
    VAR_39 = FUNC_21 (VAR_36, VAR_38, VAR_6, 0);
    if (VAR_39 < 0) {
      FUNC_15 ("cannot open server socket at port %d: %m\n", VAR_36);
      FUNC_9 (1);
    }
  }

  FUNC_0 (0);

  if (FUNC_4 (VAR_47) < 0) {
    FUNC_15 ("fatal: cannot change user to %s\n", VAR_47 ? VAR_47 : "(none)");
    FUNC_9 (1);
  }

  FUNC_13 ();
  VAR_27 = 0;

  if (FUNC_8 (VAR_50[VAR_35], VAR_11) < 0) {
    FUNC_15 ("cannot open binlog files for %s\n", VAR_11 ? VAR_11 : VAR_50[VAR_35]);
    FUNC_9 (1);
  }


  VAR_5 = FUNC_18 (VAR_19);

  if (VAR_5) {
    VAR_18 = VAR_5->info->filename;
    VAR_20 = VAR_5->info->file_size;

    FUNC_27 (1, "load index file %s (size %lld)\n", VAR_18, VAR_20);
    VAR_21 = -FUNC_11 (VAR_2);

    VAR_51 = FUNC_16 (VAR_5);

    VAR_21 += FUNC_11 (VAR_2);

    if (VAR_51 < 0) {
      FUNC_10 (VAR_45, "fatal: error %d while loading index file %s\n", VAR_51, VAR_18);
      FUNC_9(1);
    }

    FUNC_27 (1, "load index: done, jump_log_pos=%lld, alloc_mem=%ld out of %ld, time %.06lfs\n",
       VAR_24, (long) (VAR_13 - VAR_14), (long) (VAR_15 - VAR_14), VAR_21);


  } else {
    VAR_18 = ((void*)0);
    VAR_20 = 0;
  }


  FUNC_27 (2, "starting reading binlog\n");

  VAR_1 = FUNC_17 (VAR_17, VAR_24);
  if (!VAR_1) {
    FUNC_15 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_17->replica_prefix, VAR_24);
    FUNC_9 (1);
  }

  VAR_11 = VAR_1->info->filename;

  FUNC_27 (1, "replaying binlog file %s (size %lld)\n", VAR_11, VAR_1->info->file_size);
  VAR_9 = -FUNC_11 (VAR_2);

  FUNC_5 ();

  FUNC_14 (VAR_24, VAR_25, VAR_23);
  VAR_46 = -VAR_46;

  FUNC_27 (1, "replay log events started\n");
  VAR_51 = FUNC_20 (0, 1);

  VAR_46 = -VAR_46;
  FUNC_27 (1, "replay log events finished\n");

  VAR_9 += FUNC_11 (VAR_2);
  VAR_10 = VAR_26 - VAR_24;

  if (!VAR_8) {
    FUNC_6();
  }

  FUNC_7 ();
  VAR_44 = FUNC_25 (((void*)0));

  if (VAR_22) {
    return FUNC_28 (0);
  }

  VAR_7 = 6;
  FUNC_24();

  return 0;
}
