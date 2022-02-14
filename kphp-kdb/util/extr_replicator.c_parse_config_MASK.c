
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repl_server_status {int dummy; } ;
struct remote_binlog {char* binlog_tag; int flags; struct location_list_entry* first; } ;
struct location_list_entry {int location_len; char* location; int flags; struct location_list_entry* next; } ;
struct TYPE_2__ {int flags; struct location_list_entry* master; struct location_list_entry* local; struct remote_binlog* binlog; struct repl_server_status* server_last; struct repl_server_status* server_first; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (struct remote_binlog*) ;
 void* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int * VAR_13 ;
 int FUNC_6 (int ,char*,...) ;
 struct location_list_entry* FUNC_7 (struct remote_binlog*) ;
 struct remote_binlog* FUNC_8 (int*,int,int) ;
 char* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (char*,char,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int*,int) ;
 struct remote_binlog** VAR_18 ;
 int FUNC_12 (int ,void*,int) ;
 int VAR_19 ;
 int FUNC_13 (char*) ;
 scalar_t__ VAR_20 ;
 void* FUNC_14 (int) ;

int FUNC_15 (int VAR_21) {
  int VAR_22, VAR_23, VAR_24;

  struct remote_binlog *VAR_25;

  if (!(VAR_21 & 1)) {
    VAR_11 = VAR_22 = FUNC_12 (VAR_13[0], VAR_10, VAR_2+1);
  } else {
    VAR_22 = VAR_11;
  }

  if (VAR_22 < 0) {
    FUNC_6 (VAR_19, "error reading configuration file %s: %m\n", VAR_12);
    return -2;
  }
  if (VAR_22 > VAR_2) {
    FUNC_6 (VAR_19, "configuration file %s too long (max %d bytes)\n", VAR_12, VAR_2);
    return -2;
  }
  VAR_4 = VAR_8 = VAR_10;
  VAR_5 = VAR_8 + VAR_22;
  *VAR_5 = 0;
  VAR_7 = 1;

  while (1) {
    FUNC_3 ();

    VAR_23 = FUNC_2 (1);
    if (!VAR_23) {
      break;
    }
    VAR_25 = FUNC_8 (VAR_4, VAR_23, 1);

    VAR_4 += VAR_23;

    while (*VAR_4 == 32 || *VAR_4 == 9) {
      FUNC_4();
      int VAR_26 = 1;

      if (*VAR_4 == '#') {
        break;
      }
      if (*VAR_4 == '*') {
        VAR_26 = 0;
        VAR_4++;
      }
      VAR_23 = FUNC_2 (0);
      if (!VAR_23) {
        if (!VAR_26) {
          return FUNC_13 ("'*' must be followed with target description");
        }
        break;
      }

      struct location_list_entry *VAR_27 = VAR_25->first;
      while (VAR_27) {
        if (VAR_23 == VAR_27->location_len && !FUNC_10 (VAR_27->location, VAR_4, VAR_23)) {
          VAR_27->flags |= VAR_26;
          break;
        }
        VAR_27 = VAR_27->next;
      }

      if (!VAR_27) {
        char *VAR_28 = FUNC_14 (VAR_23 + 1);
        FUNC_11 (VAR_28, VAR_4, VAR_23);
        VAR_28[VAR_23] = 0;
        if (!FUNC_9 (VAR_28, ':', VAR_23)) {
          FUNC_6 (VAR_19, "error at line %d: location %s for binlog %s is not of <hostname>:<path> format\n", VAR_7, VAR_28, VAR_25->binlog_tag);
          return -1;
        }
        VAR_27 = FUNC_14 (sizeof (struct location_list_entry));
        VAR_27->next = VAR_25->first;
        VAR_27->location = VAR_28;
        VAR_27->location_len = VAR_23;
        VAR_25->first = VAR_27;
        if (VAR_23 > VAR_15 && !FUNC_10 (VAR_28, VAR_14, VAR_15) && VAR_28[VAR_15] == ':') {
          VAR_26 |= 2;
          if (!(VAR_25->flags & 2)) {
            VAR_25->flags |= 2;

            FUNC_0 (VAR_17 < VAR_3);
            for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
              if (VAR_1[VAR_24].local->location_len == VAR_23 && !FUNC_10 (VAR_1[VAR_24].local->location, VAR_28, VAR_23)) {
                FUNC_6 (VAR_19, "error: location %s suggested for two different binlogs %s and %s\n", VAR_28, VAR_25->binlog_tag, VAR_1[VAR_24].binlog->binlog_tag);
                return -1;
              }
            }
            VAR_1[VAR_17].local = VAR_27;
            VAR_1[VAR_17].server_first = VAR_1[VAR_17].server_last = (struct repl_server_status *) &VAR_1[VAR_17];
            VAR_1[VAR_17++].binlog = VAR_25;
            if (VAR_20 > 0) {
              FUNC_6 (VAR_19, "found related binlog: %s at %s\n", VAR_25->binlog_tag, VAR_27->location);
            }
          }
        }
        VAR_27->flags = VAR_26;
      }
      VAR_4 += VAR_23;
    }

    FUNC_4();
    if (*VAR_4 != 13 && *VAR_4 != 10 && *VAR_4 != '#') {
      break;
    }

  }

  FUNC_1 ();
  if (VAR_6) {
    return FUNC_13 ("EOF expected");
  }

  if (VAR_20 > 0) {
    FUNC_6 (VAR_19, "%d related binlogs found\n", VAR_17);
  }

  if (VAR_9) {
    int VAR_29, VAR_30 = 0;
    for (VAR_29 = 0; VAR_29 < VAR_0; VAR_29++) {
      if (VAR_18[VAR_29]) {
        VAR_30 += FUNC_5 (VAR_18[VAR_29]);
      }
    }
    if (VAR_30) {
      FUNC_6 (VAR_19, "%d wrong remote binlog descriptions found in configuration file\n", VAR_30);
      return -1;
    }
  }

  int VAR_31 = 0;
  for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
    VAR_31 += FUNC_5 (VAR_1[VAR_24].binlog);
    VAR_1[VAR_24].master = FUNC_7 (VAR_1[VAR_24].binlog);
    if (VAR_1[VAR_24].master == VAR_1[VAR_24].local) {
      VAR_1[VAR_24].binlog->flags |= 4;
      VAR_16++;
    }
    VAR_1[VAR_24].flags = VAR_1[VAR_24].binlog->flags;
  }

  if (VAR_31) {
    FUNC_6 (VAR_19, "%d wrong related binlog descriptions found\n", VAR_31);
    return -1;
  }

  if (VAR_20 > 0) {
    FUNC_6 (VAR_19, "found %d related binlog descriptions, we (%s) hold master copy for %d of them\n", VAR_17, VAR_14, VAR_16);
    for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++) {
      VAR_25 = VAR_1[VAR_24].binlog;
      if (VAR_25->flags & 4) {
        FUNC_6 (VAR_19, "binlog #%d: %s, master at %s\n", VAR_24, VAR_25->binlog_tag, VAR_1[VAR_24].local->location);
      } else {
        FUNC_6 (VAR_19, "binlog #%d: %s, slave at %s, master is at %s\n", VAR_24, VAR_25->binlog_tag, VAR_1[VAR_24].local->location, VAR_1[VAR_24].master->location);
      }
    }
  }

  return 0;
}
