
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tot_users; int log_split_mod; int log_split_max; int log_split_min; int log_pos1_crc32; int log_timestamp; int log_pos1; int created_at; int magic; } ;
typedef TYPE_1__ index_header ;
typedef int header ;
struct TYPE_9__ {int pr_tree; int req_time_tree; int req_tree; int fr_tree; TYPE_1__ req_cnt; TYPE_1__ user_id; } ;
struct TYPE_8__ {int replica_prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__** VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_4__* VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 char* FUNC_9 (TYPE_4__*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (char*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_17 (int *) ;
 int VAR_19 ;
 int FUNC_18 (char*) ;
 int VAR_20 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (int) ;

int FUNC_22 (int VAR_21) {
  char *VAR_22 = ((void*)0);

  if (VAR_8) {
    VAR_22 = FUNC_9 (VAR_8, FUNC_10(), VAR_8->replica_prefix);
  }

  if (!VAR_22 || VAR_22[0] == '-') {
    FUNC_7 (VAR_18, "cannot write index: cannot compute its name\n");
    FUNC_5 (1);
  }

  if (FUNC_10() == VAR_9) {
    FUNC_7 (VAR_18, "skipping generation of new snapshot %s for position %d: snapshot for this position already exists\n",
       VAR_22, VAR_9);
    return 0;
  }

  if (VAR_20 > 0) {
    FUNC_7 (VAR_18, "creating index %s at log position %d\n", VAR_22, FUNC_10());
  }

  VAR_15 = FUNC_12 (VAR_22, VAR_2 | VAR_4 | VAR_5 | VAR_3, 0660);

  if (VAR_15 < 0) {
    FUNC_7 (VAR_18, "cannot create new index file %s: %m\n", VAR_22);
    FUNC_5 (1);
  }
  index_header VAR_23;
  FUNC_11 (&VAR_23, 0, sizeof (VAR_23));

  if (!VAR_17) {
    VAR_23.magic = VAR_0;
  } else {
    VAR_23.magic = VAR_6;
  }
  VAR_23.created_at = FUNC_17 (((void*)0));
  VAR_23.log_pos1 = FUNC_10 ();
  VAR_23.log_timestamp = VAR_11;
  if (VAR_21) {
    FUNC_15 ();
  } else {
    FUNC_14 (0);
  }
  VAR_23.log_pos1_crc32 = ~VAR_10;
  VAR_23.log_split_min = VAR_13;
  VAR_23.log_split_max = VAR_12;
  VAR_23.log_split_mod = VAR_14;
  VAR_23.tot_users = VAR_19;

  FUNC_19 (0);
  FUNC_20 (&VAR_23, sizeof (VAR_23));

  if (VAR_20 >= 2) {
    FUNC_7 (VAR_18, "Written header\n");
  }

  int VAR_24 = 0;
  int VAR_25;
  for (VAR_25 = 0; VAR_25 < VAR_1; VAR_25++) {
    if (VAR_7[VAR_25]) {
      if (VAR_20 >= 3) {
        FUNC_7 (VAR_18, "Writing user %d (real %d)\n", VAR_24, VAR_25);
      }
      VAR_24++;
      FUNC_21 (VAR_25);
      FUNC_20 (&VAR_7[VAR_25]->user_id, 8);
      FUNC_20 (&VAR_7[VAR_25]->req_cnt, 16 + 32 * 4);
      FUNC_4 (VAR_7[VAR_25]->fr_tree);
      if (!VAR_17) {
        FUNC_4 (VAR_7[VAR_25]->req_tree);
        FUNC_4 (VAR_7[VAR_25]->req_time_tree);
        FUNC_2 (VAR_7[VAR_25]->pr_tree);
      }
    }
  }
  FUNC_0 (VAR_24 == VAR_19);
  if (VAR_17) {
    FUNC_3 (VAR_16);
  }
  FUNC_6 ();

  FUNC_0 (FUNC_8 (VAR_15) >= 0);
  FUNC_0 (FUNC_1 (VAR_15) >= 0);

  if (VAR_20 >= 3) {
    FUNC_7 (VAR_18, "writing index done\n");
  }

  if (FUNC_16 (VAR_22)) {
    FUNC_7 (VAR_18, "cannot rename new index file from %s: %m\n", VAR_22);
    FUNC_18 (VAR_22);
    FUNC_5 (1);
  }

  FUNC_13 (VAR_22);

  return 0;
}
