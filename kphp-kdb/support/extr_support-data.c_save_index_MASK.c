
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int log_pos1_crc32; int log_split_mod; int log_split_max; int log_split_min; int log_timestamp; scalar_t__ log_pos1; int created_at; int magic; } ;
typedef TYPE_1__ index_header ;
typedef int header ;
struct TYPE_8__ {int replica_prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_4__* VAR_7 ;
 int FUNC_3 (int) ;
 int* VAR_8 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (int) ;
 long long FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 long long FUNC_9 (int,long long,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (char*,int,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (char*) ;
 int VAR_15 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 scalar_t__ VAR_16 ;
 int FUNC_18 (int,TYPE_1__*,int) ;

int FUNC_19 (void) {
  char *VAR_17 = ((void*)0);

  FUNC_2 ("save_index\n");
  if (VAR_7) {
    VAR_17 = FUNC_7 (VAR_7, FUNC_8(), VAR_7->replica_prefix);
  }

  if (!VAR_17 || VAR_17[0] == '-') {
    FUNC_4 (VAR_15, "cannot write index: cannot compute its name\n");
    FUNC_3 (1);
  }

  if (FUNC_8() == VAR_9) {
    FUNC_4 (VAR_15, "skipping generation of new snapshot %s for position %ld: snapshot for this position already exists\n",
       VAR_17, VAR_9);
    return 0;
  }

  if (VAR_16 > 0) {
    FUNC_4 (VAR_15, "creating index %s at log position %ld\n", VAR_17, FUNC_8());
  }

  if (!VAR_6) {
    FUNC_14();
  } else {
    FUNC_13 (0);
  }

  index_header VAR_18;
  FUNC_10 (&VAR_18, 0, sizeof (VAR_18));

  VAR_8[1] = FUNC_11 (VAR_17, VAR_0 | VAR_2 | VAR_3 | VAR_1, 0660);
  if (VAR_8[1] < 0) {
    FUNC_4 (VAR_15, "cannot create new index file %s: %m\n", VAR_17);
    FUNC_3 (1);
  }

  VAR_18.magic = VAR_5;
  VAR_18.created_at = FUNC_16 (((void*)0));

  long long VAR_19 = FUNC_6 (&VAR_18);
  FUNC_0 (FUNC_9 (VAR_8[1], VAR_19, VAR_4) == VAR_19);


  VAR_18.log_pos1 = FUNC_8();
  VAR_18.log_timestamp = VAR_11;
  VAR_18.log_split_min = VAR_13;
  VAR_18.log_split_max = VAR_12;
  VAR_18.log_split_mod = VAR_14;
  FUNC_13 (0);
  VAR_18.log_pos1_crc32 = ~VAR_10;

  FUNC_0 (FUNC_9 (VAR_8[1], 0, VAR_4) == 0);
  FUNC_0 (FUNC_18 (VAR_8[1], &VAR_18, sizeof (VAR_18)) == sizeof (VAR_18));

  FUNC_0 (FUNC_5 (VAR_8[1]) >= 0);
  FUNC_0 (FUNC_1 (VAR_8[1]) >= 0);
  VAR_8[1] = -1;

  if (FUNC_15 (VAR_17)) {
    FUNC_4 (VAR_15, "cannot rename new index file from %s: %m\n", VAR_17);
    FUNC_17 (VAR_17);
    FUNC_3 (1);
  }

  FUNC_12 (VAR_17);
  return 0;
}
