
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int userlist_entry_t ;
struct TYPE_6__ {int user_id; scalar_t__ list_cnt; scalar_t__ hash_cnt; int magic; } ;
struct TYPE_5__ {int delmsg_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__ VAR_12 ;
 TYPE_1__* VAR_13 ;
 TYPE_1__** VAR_14 ;
 int* VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 char* VAR_19 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int VAR_20 ;
 int FUNC_5 () ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (int,int ) ;
 int FUNC_8 (int) ;
 scalar_t__* VAR_24 ;
 int FUNC_9 () ;
 char** VAR_25 ;
 int FUNC_10 (int ,char*,...) ;
 int* VAR_26 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int,char**,char*) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__,int ) ;
 void* VAR_30 ;
 int FUNC_16 (int ,int) ;
 char* VAR_31 ;
 char* VAR_32 ;
 int VAR_33 ;
 int * VAR_34 ;
 char* VAR_35 ;
 int FUNC_17 (int,char*,int) ;
 void* VAR_36 ;
 int VAR_37 ;
 int FUNC_18 () ;
 char* VAR_38 ;
 int VAR_39 ;
 int FUNC_19 (scalar_t__,int *,int ) ;
 int FUNC_20 (int) ;
 scalar_t__ VAR_40 ;
 int FUNC_21 (scalar_t__,int) ;
 int FUNC_22 (char*,int,char*,char*,void*) ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 char* VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int FUNC_25 (scalar_t__,int *,int) ;

int FUNC_26 (int VAR_48, char *VAR_49[]) {
  int VAR_50;

  VAR_38 = VAR_49[0];
  while ((VAR_50 = FUNC_12 (VAR_48, VAR_49, "hvu:c:a:i:")) != -1) {
    switch (VAR_50) {
    case 'v':
      VAR_46 = 1;
      break;
    case 'h':
      FUNC_24();
      return 2;
    case 'u':
      VAR_43 = VAR_36;
      break;
    case 'a':
      VAR_18 = VAR_36;
      break;
    case 'i':
      VAR_30 = VAR_36;
      break;
    case 'c':
      VAR_20 = FUNC_1(VAR_36);
      if (VAR_20 > 1000000 || VAR_20 < 0) {
 VAR_20 = VAR_3;
      }
    }
  }
  if (VAR_48 != VAR_37 + 2) {
    FUNC_24();
    return 2;
  }

  if (VAR_43 && FUNC_2(VAR_43) < 0) {
    FUNC_10 (VAR_42, "fatal: cannot change user to %s\n", VAR_43 ? VAR_43 : "(none)");
    FUNC_8(1);
  }

  FUNC_17 (0, VAR_49[VAR_37], 0);
  FUNC_22 (VAR_35, 254, "%s%s", VAR_49[VAR_37], VAR_18);
  VAR_19 = VAR_35;
  FUNC_17 (1, VAR_35, 0);

  FUNC_17 (2, VAR_49[VAR_37+1], 1);
  if (VAR_26[2]) {
    FUNC_10 (VAR_42, "new huge index file %s already exists and is not empty\n", VAR_25[2]);
    return 1;
  }

  FUNC_22 (VAR_31, 254, "%s%s", VAR_49[VAR_37+1], VAR_18);
  FUNC_17 (3, VAR_31, 1);
  if (VAR_26[3]) {
    FUNC_10 (VAR_42, "new binlog file %s already exists and is not empty\n", VAR_25[3]);
    return 1;
  }

  FUNC_22 (VAR_32, 254, "%s%s", VAR_49[VAR_37+1], VAR_30);
  FUNC_17 (4, VAR_32, 1);
  if (VAR_26[4]) {
    FUNC_10 (VAR_42, "new metaindex file %s already exists and is not empty\n", VAR_25[4]);
    return 1;
  }

  FUNC_13();

  VAR_41 = VAR_33 = FUNC_23(0);

  if (VAR_26[1] && VAR_24[1]) {
    if (VAR_46) {
      FUNC_10 (VAR_42, "replaying binlog file %s (size %d), cutoff time=%d\n", VAR_19, VAR_26[1], VAR_41 - VAR_20);
    }
    VAR_16 = FUNC_11(VAR_0);

    FUNC_3 ();
    FUNC_21 (VAR_24[1], VAR_26[1]);
    FUNC_20 (VAR_41 - VAR_20);

    VAR_16 = FUNC_11(VAR_0) - VAR_16;
    VAR_17 = VAR_28;

    if (VAR_27 < 0) {
      VAR_27 = VAR_28;
    }

    if (VAR_46) {
      FUNC_10 (VAR_42, "replay binlog file: done, pos=%lld, cutoff_pos=%lld, alloc_mem=%ld out of %ld, time %.6lds\n",
        (long long) VAR_28, (long long) VAR_27, (long) (VAR_21 - VAR_22), (long) (VAR_23 - VAR_22), VAR_16);
    }
  }

  FUNC_3();
  FUNC_6();

  if (VAR_46) {
    FUNC_10 (VAR_42, "purged %d recently added and deleted messages\n", VAR_39);
    FUNC_10 (VAR_42, "scanning data file \"%s\", size=%d\n", VAR_25[0], VAR_26[0]);
  }

  while (FUNC_14() > 0) {
    if (VAR_12.user_id && (unsigned) VAR_12.user_id < VAR_6) {
      VAR_13 = FUNC_7 (VAR_12.user_id, 0);
      if (VAR_13 && VAR_13->delmsg_cnt == -239) {
 FUNC_10 (VAR_42, "duplicate user id %d in file %s at position %lld\n", VAR_12.user_id, VAR_25[0], (long long) VAR_40);
      } else {

 FUNC_5 ();
 if (VAR_13) {
   VAR_13->delmsg_cnt = -239;
 }
      }
    } else {
      VAR_45++;
      FUNC_10 (VAR_42, "dropping messages of user %d (user_id out of bounds)\n", VAR_12.user_id);
    }
  }

  if (VAR_46) {
    FUNC_10 (VAR_42, "scanning new users...\n");
  }

  VAR_12.magic = VAR_5;

  for (VAR_50 = 0; VAR_50 < VAR_10; VAR_50++) {
    VAR_13 = VAR_14[VAR_50];
    if (VAR_13 && VAR_13->delmsg_cnt != -239) {
      VAR_12.user_id = VAR_15[VAR_50];
      VAR_44++;
      if (VAR_12.user_id && (unsigned) VAR_12.user_id < VAR_6) {
 VAR_12.hash_cnt = VAR_12.list_cnt = 0;
 VAR_1 = 0;
 VAR_2 = 0;
 if (VAR_46 > 1) {
   FUNC_10 (VAR_42, "adding new user %d\n", VAR_12.user_id);
 }
 FUNC_5 ();
      } else {
 VAR_45++;
 FUNC_10 (VAR_42, "ignoring messages of new user %d (user_id out of bounds)\n", VAR_12.user_id);
      }
    }
  }

  FUNC_9();

  if (VAR_46) {
    FUNC_10 (VAR_42, "file %s created, total size %lld\n", VAR_25[2], (long long) VAR_47);
  }
  FUNC_4 (VAR_24[2]);

  FUNC_16 (0, VAR_7 - 1);

  for (VAR_50 = 0; VAR_50 < VAR_7; VAR_50++) {
    VAR_8[VAR_50] = *VAR_9[VAR_50];
  }
  VAR_50 = FUNC_25 (VAR_24[4], VAR_8, VAR_7 * sizeof(userlist_entry_t));
  FUNC_0 (VAR_50 == VAR_7 * sizeof(userlist_entry_t));
  FUNC_4 (VAR_24[4]);

  if (VAR_46) {
    FUNC_10 (VAR_42, "%d userlist entries (%ld bytes) written to %s\n", VAR_7, (long)VAR_7*sizeof(userlist_entry_t), VAR_25[4]);
  }

  FUNC_0 (FUNC_15 (VAR_24[1], VAR_27, VAR_11) >= 0);
  do {
    VAR_50 = FUNC_19(VAR_24[1], VAR_34, VAR_4);
    FUNC_0 (FUNC_25 (VAR_24[3], VAR_34, VAR_50) == VAR_50);
    VAR_29 += VAR_50;
  } while (VAR_50);
  FUNC_4 (VAR_24[3]);

  if (VAR_46) {
    FUNC_10 (VAR_42, "%lld bytes copied from old binlog %s, position %lld to new binlog %s\n", (long long) VAR_29, VAR_25[1], (long long) VAR_27, VAR_25[3]);
    FUNC_18();
  }

  return 0;
}
