
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int status; int result; int mask; scalar_t__ transaction_id; long long st_dev; long long st_ino; int binlog_pos; struct TYPE_16__* next; scalar_t__ pid; void* creation_time; } ;
typedef TYPE_1__ transaction_t ;
struct stat {scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
struct lev_copyexec_main_transaction_status {int result; int mask; scalar_t__ pid; long long st_dev; long long st_ino; scalar_t__ transaction_id; void* creation_time; int binlog_pos; } ;
struct lev_copyexec_aux_transaction_header {int mask; } ;
struct buffered_logevent {int dummy; } ;
typedef int sigset_t ;
struct TYPE_17__ {scalar_t__ transaction_id; int binlog_pos; int key_id; int ilen; int input; } ;
typedef TYPE_2__ replay_transaction_info_t ;
typedef scalar_t__ pid_t ;
typedef int lev_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct lev_copyexec_main_transaction_status* FUNC_0 (struct buffered_logevent*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_16 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__ VAR_17 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (int ,int ,int ,int ,scalar_t__,unsigned char**,int*) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_26 ;
 int FUNC_12 (scalar_t__*) ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_13 (struct buffered_logevent*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (unsigned char*) ;
 scalar_t__ FUNC_16 (scalar_t__,struct stat*) ;
 int FUNC_17 (scalar_t__) ;
 void* FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_21 (scalar_t__,int) ;
 int FUNC_22 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_23 () ;
 int FUNC_24 () ;
 int VAR_29 ;
 scalar_t__ FUNC_25 () ;
 int FUNC_26 (char*,...) ;
 scalar_t__ FUNC_27 (int ,int) ;
 scalar_t__ FUNC_28 (int,int,int) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 scalar_t__ VAR_30 ;
 int FUNC_31 (int,struct sigaction*,int *) ;
 int FUNC_32 (int *,int) ;
 int FUNC_33 (int *) ;
 scalar_t__ VAR_31 ;
 scalar_t__ FUNC_34 (unsigned char*,int) ;
 int FUNC_35 (TYPE_1__*,TYPE_1__*) ;
 struct lev_copyexec_main_transaction_status* FUNC_36 (TYPE_1__*) ;
 int FUNC_37 (scalar_t__) ;
 int FUNC_38 (TYPE_1__*,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_39 (void*,int) ;
 int FUNC_40 (TYPE_1__*) ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_41 (int,char*,...) ;

void FUNC_42 (replay_transaction_info_t *VAR_42) {
  if (VAR_42->transaction_id < VAR_28) {
    FUNC_41 (3, "skip tr%d (first_transaction_id = %d)\n", VAR_42->transaction_id, VAR_28);
    return;
  }

  FUNC_41 (3, "exec_transaction (id = %d)\n", VAR_42->transaction_id);

  transaction_t *VAR_43 = FUNC_21 (VAR_42->transaction_id, 0);
  if (VAR_43 != ((void*)0)) {
    if (!FUNC_40 (VAR_43)) {
      FUNC_41 (3, "skip tr%d (status = %d)\n", VAR_42->transaction_id, VAR_43->status);
      return;
    }
  }

  if (VAR_43 == ((void*)0)) {
    VAR_43 = FUNC_21 (VAR_42->transaction_id, 1);
    if (VAR_43 == ((void*)0)) {
      FUNC_6 ();
    }
    VAR_43->status = VAR_41;
  }
  VAR_43->binlog_pos = VAR_42->binlog_pos;


  unsigned char *VAR_44;
  int VAR_45;
  int VAR_46 = FUNC_8 (VAR_42->input, VAR_42->ilen, VAR_42->key_id, VAR_42->binlog_pos, VAR_42->transaction_id, &VAR_44, &VAR_45);
  if (VAR_46 < 0) {
    FUNC_26 ("decrypt_transaction (key_id: %d, binlog_pos: %lld, transaction_id: %d) returns %s.\n", VAR_42->key_id, VAR_42->binlog_pos, VAR_42->transaction_id, FUNC_7 (VAR_46));
    FUNC_24 ();

    FUNC_38 (VAR_43, VAR_35);
    struct lev_copyexec_main_transaction_status *VAR_47 = FUNC_36 (VAR_43);
    VAR_47->binlog_pos = VAR_43->binlog_pos;
    VAR_47->result = VAR_43->result = -VAR_46;
    return;
  }

  FUNC_41 (3, "transaction was successfully decrypted.\n");


  struct lev_copyexec_aux_transaction_header *VAR_48 = (struct lev_copyexec_aux_transaction_header *) VAR_44;
  VAR_43->mask = VAR_48->mask;
  if (!(VAR_43->mask & VAR_29) || FUNC_34 (VAR_44, VAR_45)) {
    FUNC_38 (VAR_43, VAR_37);
    struct lev_copyexec_main_transaction_status *VAR_49 = FUNC_36 (VAR_43);
    VAR_49->binlog_pos = VAR_43->binlog_pos;
    VAR_49->mask = VAR_43->mask;
    FUNC_15 (VAR_44);
    return;
  }


  FUNC_20 (VAR_43, VAR_32);
  FUNC_41 (3, "transaction_dir = %s\n", VAR_32);

  if (VAR_43->status != VAR_41) {
    FUNC_41 (3, "exec_transaction: T->status = %d (T->status != ts_unset).\n", (int) VAR_43->status);
    FUNC_9 ();
  }

  if (FUNC_27 (VAR_32, 0700) < 0) {
    FUNC_26 ("mkdir %s failed. %m\n", VAR_32);
    FUNC_24 ();
    FUNC_1 (VAR_43, VAR_5);
    FUNC_15 (VAR_44);
    return;
  }



  if (FUNC_3 (VAR_32) < 0) {
    FUNC_26 ("chdir %s failed. %m\n", VAR_32);
    FUNC_24 ();
    FUNC_1 (VAR_43, VAR_1);
    FUNC_9 ();
    FUNC_15 (VAR_44);
    return;
  }

  FUNC_19 (VAR_43, VAR_20);
  FUNC_41 (3, "[tr%d] binlog_name: %s\n", VAR_43->transaction_id, VAR_20);

  while (1) {
    VAR_27 = FUNC_28 (VAR_20, VAR_12 | VAR_9 | VAR_11 | VAR_10, 0400);
    if (VAR_27 < 0 && VAR_25 == VAR_6) {
      continue;
    }
    break;
  }

  if (VAR_27 < 0) {
    FUNC_26 ("creat (%s) failed. %m\n", VAR_20);
    FUNC_24 ();
    FUNC_1 (VAR_43, VAR_2);
    FUNC_9 ();
    FUNC_15 (VAR_44);
    return ;
  }

  struct stat VAR_50;
  if (FUNC_16 (VAR_27, &VAR_50) < 0) {
    FUNC_26 ("fstat (%s) failed. %m\n", VAR_20);
    FUNC_24 ();
    FUNC_1 (VAR_43, VAR_4);
    FUNC_9 ();
    FUNC_15 (VAR_44);
    return;
  }

  sigset_t VAR_51;
  FUNC_33 (&VAR_51);
  FUNC_32 (&VAR_51, VAR_13);
  FUNC_32 (&VAR_51, VAR_14);
  struct sigaction VAR_52;
  VAR_52.sa_handler = VAR_19;
  VAR_52.sa_mask = VAR_51;
  VAR_52.sa_flags = 0;


  pid_t VAR_53 = FUNC_14 ();
  if (VAR_53 < 0) {
    FUNC_26 ("fork () failed. %m\n");
    FUNC_24();
    FUNC_1 (VAR_43, VAR_3);
    FUNC_9 ();
    FUNC_15 (VAR_44);
    return;
  }

  if (VAR_53 > 0) {
    VAR_43->creation_time = FUNC_18 (VAR_53);
    FUNC_15 (VAR_44);
    FUNC_12 (&VAR_27);
    VAR_43->pid = VAR_53;
    FUNC_38 (VAR_43, VAR_39);
    FUNC_35 (&VAR_17, VAR_43);
    struct lev_copyexec_main_transaction_status *VAR_54 = FUNC_36 (VAR_43);
    VAR_54->binlog_pos = VAR_43->binlog_pos;
    VAR_54->mask = VAR_43->mask;
    VAR_54->pid = VAR_53;
    VAR_54->creation_time = VAR_43->creation_time;
    VAR_54->st_dev = VAR_43->st_dev = (long long) VAR_50.st_dev;
    VAR_54->st_ino = VAR_43->st_ino = (long long) VAR_50.st_ino;
    return;
  }

  FUNC_2 (!FUNC_31 (VAR_13, &VAR_52, ((void*)0)));
  FUNC_2 (!FUNC_31 (VAR_14, &VAR_52, ((void*)0)));

  FUNC_29 ();


  if (VAR_31 == FUNC_23 () && !VAR_33) {
    VAR_33 = VAR_14;
  }

  FUNC_30 ();


  FUNC_4 (VAR_0, 1);
  FUNC_12 (&VAR_26);
  FUNC_12 (&VAR_24);
  if (VAR_30) {
    FUNC_12 (&VAR_30);
  }
  FUNC_5 (VAR_27);

  VAR_43->pid = FUNC_23 ();
  FUNC_22 (VAR_43, VAR_21);
  VAR_18 = 0;
  VAR_22 = VAR_42->transaction_id;
  FUNC_37 (VAR_22);

  if (VAR_43->mask & VAR_8) {
    transaction_t *VAR_55;

    for (VAR_55 = VAR_16.next; VAR_55 != &VAR_16; VAR_55 = VAR_55->next) {
      if (VAR_55->transaction_id < VAR_22) {
        FUNC_10 (VAR_55->transaction_id);
      }
    }

    for (VAR_55 = VAR_17.next; VAR_55 != &VAR_17; VAR_55 = VAR_55->next) {
      if (VAR_55->transaction_id < VAR_22) {
        FUNC_10 (VAR_55->transaction_id);
      }
    }
  }


  void *VAR_56 = VAR_44 + VAR_45 - 20, *VAR_57 = VAR_44 + sizeof (struct lev_copyexec_aux_transaction_header);
  int VAR_58 = 0;


  while (VAR_57 < VAR_56 && !VAR_33) {
    if (FUNC_25 ()) {
      VAR_33 = VAR_15;
      break;
    }
    int VAR_59 = FUNC_39 (VAR_57, VAR_56 - VAR_57);
    if (VAR_59 < 0) {
      VAR_58 = VAR_59;
      break;
    }
    VAR_59 = (VAR_59 + 3) & -4;
    VAR_57 += VAR_59;
  }

  FUNC_15 (VAR_44);
  if (VAR_58 < 0) {
    FUNC_41 (1, "transaction: %d, res = %d\n", VAR_22, VAR_58);
  }

  lev_type_t VAR_60 = VAR_7;
  if (VAR_33) {
    if (VAR_18) {
      VAR_60 += VAR_38;
    } else {
      VAR_60 += VAR_34;
      VAR_23 = VAR_33 << 8;
    }
  } else {
    VAR_60 += (VAR_58 < 0) ? VAR_36 : VAR_40;
  }

  struct buffered_logevent VAR_61;
  struct lev_copyexec_main_transaction_status *VAR_62 = FUNC_0 (&VAR_61, VAR_60, sizeof (*VAR_62));
  VAR_62->transaction_id = VAR_43->transaction_id;
  VAR_62->binlog_pos = VAR_43->binlog_pos;
  VAR_62->mask = VAR_43->mask;
  VAR_62->pid = FUNC_23 ();
  VAR_62->creation_time = FUNC_18 (VAR_62->pid);
  VAR_62->result = VAR_43->result = VAR_23;
  VAR_62->st_dev = (long long) VAR_50.st_dev;
  VAR_62->st_ino = (long long) VAR_50.st_ino;

  FUNC_13 (&VAR_61);

  FUNC_17 (VAR_27);
  FUNC_12 (&VAR_27);

  FUNC_11 (0);
}
