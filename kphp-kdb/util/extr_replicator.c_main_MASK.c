
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct worker_stats {int dummy; } ;
struct related_binlog_status {int dummy; } ;
struct related_binlog {int dummy; } ;
struct TYPE_10__ {scalar_t__ port; } ;
struct TYPE_9__ {scalar_t__ port; } ;
struct TYPE_8__ {int status; TYPE_1__* binlog; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (void*) ;
 void* VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_16 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 char* VAR_17 ;
 int VAR_18 ;
 TYPE_4__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_7 () ;
 int VAR_21 ;
 long long VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (int) ;
 int * VAR_24 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 () ;
 char* VAR_25 ;
 int VAR_26 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int VAR_27 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 void* VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 void* FUNC_18 () ;
 scalar_t__ VAR_32 ;
 int FUNC_19 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_20 (int ,int,int,int,int,int ) ;
 int VAR_33 ;
 int FUNC_21 (int ,char*,int ) ;
 void* VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_22 (int ) ;
 int* VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 char* VAR_41 ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 scalar_t__ FUNC_26 (scalar_t__,int ,int,int ) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int FUNC_29 (int ) ;
 int FUNC_30 (void*,char*,long long*,char*) ;
 int FUNC_31 () ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_32 (char*) ;
 int FUNC_33 (int ) ;
 int FUNC_34 () ;
 char* VAR_47 ;
 scalar_t__ VAR_48 ;
 int FUNC_35 (int ,char*,int) ;
 int VAR_49 ;
 int VAR_50 ;

int FUNC_36 (int VAR_51, char *VAR_52[]) {
  int VAR_53, VAR_54 = 0;
  long long VAR_55;
  char VAR_56;

  FUNC_27 ();
  FUNC_29 (FUNC_24());

  VAR_41 = VAR_52[0];
  while ((VAR_53 = FUNC_11 (VAR_51, VAR_52, "6CDH:LM:P:T:Z:b:c:dhl:p:q:ru:v")) != -1) {
    switch (VAR_53) {
    case 'v':
      VAR_48++;
      break;
    case 'h':
      FUNC_34();
      return 2;
    case 'C':
      VAR_54 = 1;
      break;
    case 'D':
      VAR_21 = 1;
      break;
    case 'L':
      VAR_16 = 1;
      break;
    case 'b':
      VAR_14 = FUNC_3 (VAR_34);
      if (VAR_14 <= 0) {
 VAR_14 = VAR_0;
      }
      break;
    case 'c':
      VAR_32 = FUNC_3 (VAR_34);
      if (VAR_32 <= 0 || VAR_32 > VAR_4) {
        VAR_32 = VAR_4;
      }
      break;
    case 'p':
      VAR_40 = FUNC_3(VAR_34);
      break;
    case 'u':
      VAR_47 = VAR_34;
      break;
    case 'l':
      VAR_31 = VAR_34;
      break;
    case 'r':
      VAR_15++;
      break;
    case 'd':
      VAR_18 ^= 1;
      break;
    case 'P':
      VAR_13 = VAR_34;
      break;
    case 'H':
      VAR_25 = VAR_34;
      break;
    case 'M':
      VAR_50 = FUNC_3 (VAR_34);
      FUNC_1 (VAR_50 >= 0);
      break;
    case 'Z':
      VAR_56 = 0;
      FUNC_1 (FUNC_30 (VAR_34, "%lld%c", &VAR_55, &VAR_56) >= 1);
      switch (VAR_56 | 0x20) {
      case 'k': VAR_55 <<= 10; break;
      case 'm': VAR_55 <<= 20; break;
      case 'g': VAR_55 <<= 30; break;
      case 't': VAR_55 <<= 40; break;
      default: FUNC_1 (VAR_56 == 0x20);
      }
      if (VAR_55 >= (1LL << 20) && VAR_55 <= (sizeof(long) == 4 ? (3LL << 30) : (100LL << 30))) {
        VAR_22 = VAR_55;
      }
      break;
    case '6':
      VAR_23 = VAR_11;
      break;
    case 'q':
      VAR_33 = FUNC_3 (VAR_34) & 3;
      break;
    case 'T':
      VAR_39 = FUNC_2 (VAR_34);
      if (VAR_39 <= 0) {
        VAR_39 = VAR_6;
      }
      break;
    default:
      FUNC_1 (0);
    }
  }
  if (VAR_51 != VAR_35 + 1) {
    FUNC_34();
    return 2;
  }

  VAR_5.port = VAR_40;
  VAR_19.port = VAR_40;
  VAR_20 = VAR_40;

  FUNC_7 ();
  VAR_26 = FUNC_32 (VAR_25);

  if (FUNC_23 (VAR_32 + 16) < 0) {
    FUNC_10 (VAR_46, "fatal: cannot raise open file limit to %ld\n", VAR_32+16);
    FUNC_8 (1);
  }

  if (VAR_40 < VAR_7) {
    VAR_43 = FUNC_26 (VAR_40, VAR_42, VAR_14, VAR_23);
    if (VAR_43 < 0) {
      FUNC_10 (VAR_46, "cannot open server socket at port %ld: %m\n", VAR_40);
      FUNC_8 (1);
    }
  }

  FUNC_14();

  VAR_17 = VAR_52[VAR_35];

  FUNC_21 (0, VAR_17, 0);
  VAR_53 = FUNC_22 (0);

  FUNC_6 (VAR_24[0]);

  if (VAR_53 < 0) {
    FUNC_10 (VAR_46, "config check failed!\n");
    return -VAR_53;
  }

  if (VAR_48 > 0) {
    FUNC_10 (VAR_46, "config loaded!\n");
  }

  if (VAR_50 > VAR_30) {
    VAR_50 = VAR_30;
  }

  if (VAR_54) {
    return 0;
  }

  if (!VAR_30) {
    FUNC_10 (VAR_46, "nothing to do: no related binlogs found in %s for hostname %s, exiting\n", VAR_17, VAR_25);
    FUNC_8 (0);
  }

  if (VAR_18 && !VAR_50) {
    FUNC_28();
  }

  VAR_36 = VAR_30;

  VAR_10 = FUNC_20 (0, 2 * VAR_30 * sizeof (struct related_binlog_status), VAR_8 | VAR_9, VAR_3 | VAR_2, -1, 0);
  FUNC_1 (VAR_10);

  for (VAR_53 = 0; VAR_53 < VAR_30; VAR_53++) {
    VAR_1[VAR_53].status = VAR_10 + 2 * VAR_53;
  }

  if (VAR_50) {
    if (!VAR_27) {
      FUNC_16 ();
    }
    for (VAR_53 = 0; VAR_53 < VAR_30; VAR_53++) {
      FUNC_1 (!(VAR_1[VAR_53].binlog->flags & 4));
    }
    VAR_12 = FUNC_20 (0, 2 * VAR_50 * sizeof (struct worker_stats), VAR_8 | VAR_9, VAR_3 | VAR_2, -1, 0);
    FUNC_1 (VAR_12);
    FUNC_17 ();
    FUNC_35 (0, "creating %d workers\n", VAR_50);
    for (VAR_53 = 0; VAR_53 < VAR_50; VAR_53++) {
      int VAR_57 = FUNC_9 ();
      FUNC_1 (VAR_57 >= 0);
      if (!VAR_57) {
        int VAR_58 = VAR_53, VAR_59 = 0;
        while (VAR_58 < VAR_30) {
          FUNC_19 (VAR_1 + VAR_59, VAR_1 + VAR_58, sizeof (struct related_binlog));
          VAR_58 += VAR_50;
          VAR_59++;
        }
        VAR_49 = VAR_53;
        VAR_30 = VAR_59;
        VAR_50 = 0;
        VAR_44 = 1;
        VAR_37 = FUNC_12 ();
        FUNC_1 (VAR_37 > 1);
        break;
      } else {
        VAR_38[VAR_53] = VAR_57;
      }
    }
  }

  FUNC_0 (VAR_13);

  if (FUNC_4 (VAR_47) < 0) {
    FUNC_10 (VAR_46, "fatal: cannot change user to %s\n", VAR_47 ? VAR_47 : "(none)");
    FUNC_8 (1);
  }

  if (FUNC_5 () <= 0 && !VAR_50) {
    FUNC_10 (VAR_46, "fatal: do not have needed binlog files\n");
    FUNC_8 (3);
  }

  if (VAR_50) {
    VAR_30 = 0;
  }

  FUNC_13 (0, 0);

  VAR_45 = FUNC_33(0);

  if (!VAR_44) {
    FUNC_15 (VAR_33);
  }
  FUNC_25 ();

  VAR_28 = FUNC_18 ();
  VAR_29 = FUNC_18 ();

  FUNC_31();

  return 0;
}
