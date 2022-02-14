
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int user_id; TYPE_3__* history_mf; scalar_t__ dir_entry; } ;
typedef TYPE_2__ user_t ;
struct file_user_list_entry_search_history {int user_history_max_ts; int user_history_min_ts; int user_data_size; int user_data_offset; } ;
struct file_history_header {scalar_t__ magic; int history_min_ts; scalar_t__ history_max_ts; } ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;
struct TYPE_8__ {scalar_t__ mf_type; int len; int data; struct aio_connection* aio; TYPE_1__* next; TYPE_1__* prev; TYPE_2__* user; } ;
typedef TYPE_3__ core_mf_t ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

int FUNC_5 (struct connection *VAR_15, int VAR_16) {
  if (VAR_14 > 0) {
    FUNC_2 (VAR_11, "onload_history_metafile(%d,%d)\n", VAR_15, VAR_16);
  }
  FUNC_0 (VAR_9);

  struct aio_connection *VAR_17 = (struct aio_connection *)VAR_15;
  core_mf_t *VAR_18 = (core_mf_t *) VAR_17->extra;
  user_t *VAR_19 = VAR_18->user;

  FUNC_0 (VAR_17->basic_type == VAR_6);
  FUNC_0 (VAR_18->mf_type == VAR_1);
  FUNC_0 (VAR_19->history_mf == VAR_18);
  FUNC_0 (VAR_18->aio == VAR_17);

  struct file_user_list_entry_search_history *VAR_20 = (struct file_user_list_entry_search_history *) VAR_19->dir_entry;

  unsigned VAR_21, VAR_22;
  if (VAR_16 == VAR_18->len && VAR_16 < VAR_10) {
    FUNC_0 (VAR_16 >= 4);
    VAR_22 = *((unsigned *) (VAR_18->data + VAR_16 - 4));
    VAR_21 = FUNC_1 (VAR_18->data, VAR_16 - 4);
  } else {
    VAR_22 = VAR_21 = 0;
  }

  int VAR_23 = (VAR_20->user_history_max_ts - VAR_20->user_history_min_ts + 1) * 8 + 12;

  FUNC_0 (VAR_18->len == VAR_23 + 4);
  if (VAR_16 != VAR_18->len || VAR_22 != VAR_21) {
    VAR_4++;
    if (VAR_14 >= 0) {
      FUNC_2 (VAR_11, "ERROR reading user %d history data from index at position %d [pending aio queries: %d]: read %d bytes out of %d: %m\n", VAR_19->user_id, VAR_20->user_data_offset + VAR_20->user_data_size, VAR_2, VAR_16, VAR_18->len);
    }
    if (VAR_22 != VAR_21) {
      VAR_3++;
      if (VAR_14 >= 0) {
 FUNC_2 (VAR_11, "CRC mismatch: expected %08x, found %08x\n", VAR_22, VAR_21);
      }
      FUNC_0 (VAR_22 == VAR_21);
    }

    VAR_5 -= VAR_18->len;
    VAR_18->next->prev = VAR_18->prev;
    VAR_18->prev->next = VAR_18->next;
    VAR_18->prev = VAR_18->next = 0;
    VAR_18->aio = 0;

    FUNC_3 (VAR_18);
    VAR_19->history_mf = 0;

    return 0;
  }

  if (VAR_14 > 0) {
    FUNC_2 (VAR_11, "*** Read user %d history data from index at position %d: read %d bytes\n", VAR_19->user_id, VAR_20->user_data_offset + VAR_20->user_data_size, VAR_16);
  }

  VAR_18->aio = 0;

  struct file_history_header *VAR_24 = (struct file_history_header *) FUNC_4 (VAR_19);

  FUNC_0 (VAR_24->magic == VAR_0);
  FUNC_0 (VAR_24->history_min_ts == VAR_20->user_history_min_ts);
  FUNC_0 (VAR_24->history_max_ts == VAR_20->user_history_max_ts);
  FUNC_0 (VAR_24->history_min_ts > 0 && VAR_24->history_max_ts >= VAR_24->history_min_ts - 1);

  VAR_7 += VAR_16;
  VAR_12 += VAR_16;
  VAR_8++;
  VAR_13++;

  if (VAR_19->user_id == 92226304) {


  }

  return 1;
}
