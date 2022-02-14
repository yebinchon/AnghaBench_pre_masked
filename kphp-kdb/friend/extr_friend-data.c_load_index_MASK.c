
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int user_t ;
typedef TYPE_1__* kfs_file_handle_t ;
struct TYPE_8__ {scalar_t__ magic; int tot_users; int log_split_mod; int log_split_max; int log_split_min; scalar_t__ log_pos1_crc32; scalar_t__ log_pos1; scalar_t__ log_timestamp; } ;
typedef TYPE_2__ index_header ;
struct TYPE_9__ {int pr_tree; void* req_time_tree; void* req_tree; void* fr_tree; int req_cnt; int user_id; } ;
struct TYPE_7__ {int fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__** VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,scalar_t__,int) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 void* FUNC_7 () ;
 int FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_3__* FUNC_10 (int) ;

int FUNC_11 (kfs_file_handle_t VAR_21) {
  if (VAR_21 == ((void*)0)) {
    VAR_8 = 0;
    VAR_7 = 0;
    VAR_6 = 0;
    return 0;
  }
  VAR_5 = VAR_21->fd;
  index_header VAR_22;
  FUNC_0 (FUNC_4 (VAR_5, &VAR_22, sizeof (index_header)) == sizeof (index_header));
  if ((!VAR_15 || VAR_22.magic != VAR_2) &&
      (VAR_15 || VAR_22.magic != VAR_0)) {
    FUNC_2 (VAR_17, "index file is not for friends-engine. Magic = %lx.\n", VAR_22.magic);
    return -1;
  }
  VAR_8 = VAR_22.log_timestamp;
  VAR_7 = VAR_22.log_pos1;
  VAR_6 = VAR_22.log_pos1_crc32;

  VAR_10 = VAR_22.log_split_min;
  VAR_9 = VAR_22.log_split_max;
  VAR_11 = VAR_22.log_split_mod;

  VAR_18 = VAR_22.tot_users;
  int VAR_23;
  FUNC_1 ();
  long long VAR_24 = 0;
  long long VAR_25 = 0;
  long long VAR_26 = 0;
  long long VAR_27 = 0;
  for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
    if (VAR_19 >= 3) {
      FUNC_2 (VAR_17, "reading user %d of %d\n", VAR_23 + 1, VAR_18);
    }
    char *VAR_28 = FUNC_9 (4 + 8 + 16 + 32 * 4);
    if (!VAR_28) {
      FUNC_2 (VAR_17, "Unexpected end of file");
      FUNC_0 (0);
    }
    int VAR_29 = *((int *)VAR_28);
    FUNC_8 (4);
    VAR_28 += 4;

    FUNC_0 (VAR_29 >= 0 && VAR_29 < VAR_1);
    VAR_3[VAR_29] = FUNC_10 (sizeof (user_t));
    FUNC_3 (&VAR_3[VAR_29]->user_id, VAR_16, 8);
    FUNC_8 (8);
    VAR_28 += 8;

    FUNC_3 (&VAR_3[VAR_29]->req_cnt, VAR_16, 16 + 32 * 4);
    FUNC_8 (16 + 32 * 4);
    VAR_28 += 16 + 32 * 4;

    VAR_24 -= VAR_12;
    VAR_3[VAR_29]->fr_tree = FUNC_7 ();
    VAR_24 += VAR_12;
    if (!VAR_15) {
      VAR_25 -= VAR_12;
      VAR_3[VAR_29]->req_tree = FUNC_7 ();
      VAR_25 += VAR_12;
      VAR_26 -= VAR_12;
      VAR_3[VAR_29]->req_time_tree = FUNC_7 ();
      VAR_26 += VAR_12;
      VAR_27 -= VAR_12;
      VAR_3[VAR_29]->pr_tree = FUNC_5 ();
      VAR_27 += VAR_12;
    }
  }
  if (VAR_15) {
    VAR_14 = FUNC_6 ();
  }
  FUNC_0 (VAR_16 == VAR_20);
  VAR_13 = VAR_4;
  if (VAR_19) {
    FUNC_2 (VAR_17, "Index loaded. %lld bytes for friends, %lld for friend requests, %lld for time friend requests and %lld for privacy\n", VAR_24, VAR_25, VAR_26, VAR_27);
  }
  return 0;
}
