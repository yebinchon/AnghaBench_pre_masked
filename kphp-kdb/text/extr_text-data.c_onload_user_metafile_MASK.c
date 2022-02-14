
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int user_id; TYPE_3__* mf; struct file_user_list_entry* dir_entry; } ;
typedef TYPE_2__ user_t ;
struct file_user_list_entry_search_history {int user_history_min_ts; int user_history_max_ts; } ;
struct file_user_list_entry_search {int user_search_size; } ;
struct file_user_list_entry {int user_last_local_id; int user_data_offset; } ;
struct file_user_header {scalar_t__ magic; int user_first_local_id; int user_last_local_id; int user_id; int sublists_num; int peers_offset; int peers_num; int sublists_offset; int legacy_list_offset; int directory_offset; int data_offset; int extra_offset; int total_bytes; } ;
struct file_message_extras {int dummy; } ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;
struct TYPE_11__ {scalar_t__ mf_type; int len; int data; struct aio_connection* aio; TYPE_1__* next; TYPE_1__* prev; TYPE_2__* user; } ;
typedef TYPE_3__ core_mf_t ;
struct TYPE_13__ {int sublists_num; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_9__ {struct TYPE_9__* next; struct TYPE_9__* prev; } ;


 scalar_t__ VAR_0 ;
 TYPE_8__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 unsigned int FUNC_2 (int,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_4__* FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_17 ;

int FUNC_6 (struct connection *VAR_18, int VAR_19) {
  if (VAR_17 > 0) {
    FUNC_3 (VAR_14, "onload_user_metafile(%d,%d)\n", VAR_18, VAR_19);
  }
  struct aio_connection *VAR_20 = (struct aio_connection *)VAR_18;
  core_mf_t *VAR_21 = (core_mf_t *) VAR_20->extra;
  user_t *VAR_22 = VAR_21->user;

  FUNC_0 (VAR_20->basic_type == VAR_7);
  FUNC_0 (VAR_21->mf_type == VAR_2);
  FUNC_0 (VAR_22->mf == VAR_21);
  FUNC_0 (VAR_21->aio == VAR_20);

  struct file_user_list_entry *VAR_23 = VAR_22->dir_entry;
  struct file_user_header *VAR_24;

  unsigned VAR_25, VAR_26;
  if (VAR_10 && VAR_19 == VAR_21->len && VAR_19 < VAR_13) {
    FUNC_0 (VAR_19 >= 4);
    VAR_26 = *((unsigned *) (VAR_21->data + VAR_19 - 4));
    VAR_25 = FUNC_2 (VAR_21->data, VAR_19 - 4);
  } else {
    VAR_26 = VAR_25 = 0;
  }

  if (VAR_19 < VAR_21->len || VAR_26 != VAR_25) {
    VAR_5++;
    if (VAR_17 >= 0) {
      FUNC_3 (VAR_14, "ERROR reading user %d data from index at position %d [pending aio queries: %d]: read %d bytes out of %d: %m\n", VAR_22->user_id, VAR_23->user_data_offset, VAR_3, VAR_19, VAR_21->len);
    }
    if (VAR_26 != VAR_25) {
      VAR_4++;
      if (VAR_17 >= 0) {
 FUNC_3 (VAR_14, "CRC mismatch: expected %08x, found %08x\n", VAR_26, VAR_25);
      }
      FUNC_0 (VAR_26 == VAR_25);
    }

    VAR_6 -= VAR_21->len;
    VAR_21->next->prev = VAR_21->prev;
    VAR_21->prev->next = VAR_21->next;
    VAR_21->prev = VAR_21->next = 0;
    VAR_21->aio = 0;

    FUNC_4 (VAR_21);
    VAR_22->mf = 0;

    return 0;
  }

  VAR_21->aio = 0;

  VAR_24 = (struct file_user_header *) (FUNC_5 (VAR_21)->data);

  if (VAR_17 > 0 || VAR_24->magic != VAR_0) {
    FUNC_3 (VAR_14, "*** Read user %d data from index at position %d: read %d bytes at address %p, magic %08lx\n", VAR_22->user_id, VAR_23->user_data_offset, VAR_19, VAR_24, VAR_24->magic);
  }

  FUNC_0 (VAR_24->magic == VAR_0);
  FUNC_0 (VAR_24->user_first_local_id >= 1 && VAR_24->user_last_local_id >= VAR_24->user_first_local_id - 1);
  FUNC_0 (VAR_24->user_last_local_id == VAR_23->user_last_local_id);
  int VAR_27 = VAR_24->user_last_local_id - VAR_24->user_first_local_id + 1;
  FUNC_0 (VAR_24->user_id == VAR_22->user_id);
  FUNC_0 (VAR_24->sublists_num == VAR_1.sublists_num);
  FUNC_0 (VAR_24->peers_offset == sizeof (struct file_user_header));
  FUNC_0 ((unsigned) VAR_24->peers_num <= (1 << 24));
  FUNC_0 (VAR_24->sublists_offset >= VAR_24->peers_offset + (VAR_24->peers_num ? VAR_24->peers_num * 8 + 4 : 0));
  FUNC_0 (VAR_24->legacy_list_offset >= VAR_24->sublists_offset + (VAR_24->sublists_num ? VAR_24->sublists_num * 8 + 4 : 0));
  FUNC_0 (VAR_24->directory_offset >= VAR_24->legacy_list_offset);
  FUNC_0 (VAR_24->data_offset == VAR_24->directory_offset + 4*(VAR_27+1));
  FUNC_0 (VAR_24->extra_offset >= VAR_24->data_offset);

  int VAR_28 = (VAR_12 || VAR_11) ? ((struct file_user_list_entry_search *) VAR_23)->user_search_size : 0;
  if (VAR_28 && VAR_10) {
    VAR_28 += 4;
  }

  int VAR_29 = 1, VAR_30 = 0, VAR_31 = 0;
  if (VAR_11) {
    VAR_29 = ((struct file_user_list_entry_search_history *) VAR_23)->user_history_min_ts;
    VAR_30 = ((struct file_user_list_entry_search_history *) VAR_23)->user_history_max_ts;
    if (VAR_30 >= VAR_29) {
      VAR_31 = (VAR_30 - VAR_29 + 1) * 8 + 16;
    }
  }

  FUNC_0 (VAR_24->total_bytes == VAR_24->extra_offset + VAR_28 + VAR_31 + VAR_27 * sizeof (struct file_message_extras) + 4 * VAR_10);
  FUNC_0 (VAR_24->extra_offset == VAR_21->len);

  VAR_8 += VAR_21->len;
  VAR_15 += VAR_21->len;
  VAR_9++;
  VAR_16++;

  FUNC_1 (VAR_22);

  return 1;
}
