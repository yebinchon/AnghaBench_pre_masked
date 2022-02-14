
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int user_id; TYPE_3__* search_mf; scalar_t__ dir_entry; } ;
typedef TYPE_2__ user_t ;
struct file_user_list_entry_search {int user_search_size; int user_data_size; int user_data_offset; } ;
struct file_search_header {scalar_t__ magic; int words_num; } ;
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
 int VAR_14 ;
 scalar_t__ VAR_15 ;

int FUNC_5 (struct connection *VAR_16, int VAR_17) {
  if (VAR_15 > 0) {
    FUNC_2 (VAR_12, "onload_search_metafile(%d,%d)\n", VAR_16, VAR_17);
  }
  FUNC_0 (VAR_10);

  struct aio_connection *VAR_18 = (struct aio_connection *)VAR_16;
  core_mf_t *VAR_19 = (core_mf_t *) VAR_18->extra;
  user_t *VAR_20 = VAR_19->user;

  FUNC_0 (VAR_18->basic_type == VAR_6);
  FUNC_0 (VAR_19->mf_type == VAR_1);
  FUNC_0 (VAR_20->search_mf == VAR_19);
  FUNC_0 (VAR_19->aio == VAR_18);

  struct file_user_list_entry_search *VAR_21 = (struct file_user_list_entry_search *) VAR_20->dir_entry;

  unsigned VAR_22, VAR_23;
  if (VAR_9 && VAR_17 == VAR_19->len && VAR_17 < VAR_11) {
    FUNC_0 (VAR_17 >= 4);
    VAR_23 = *((unsigned *) (VAR_19->data + VAR_17 - 4));
    VAR_22 = FUNC_1 (VAR_19->data, VAR_17 - 4);
  } else {
    VAR_23 = VAR_22 = 0;
  }

  FUNC_0 (VAR_19->len == VAR_21->user_search_size + VAR_9 * 4);
  if (VAR_17 != VAR_19->len || VAR_23 != VAR_22) {
    VAR_4++;
    if (VAR_15 >= 0) {
      FUNC_2 (VAR_12, "ERROR reading user %d search data from index at position %d [pending aio queries: %d]: read %d bytes out of %d: %m\n", VAR_20->user_id, VAR_21->user_data_offset + VAR_21->user_data_size, VAR_2, VAR_17, VAR_19->len);
    }
    if (VAR_23 != VAR_22) {
      VAR_3++;
      if (VAR_15 >= 0) {
 FUNC_2 (VAR_12, "CRC mismatch: expected %08x, found %08x\n", VAR_23, VAR_22);
      }
      FUNC_0 (VAR_23 == VAR_22);
    }

    VAR_5 -= VAR_19->len;
    VAR_19->next->prev = VAR_19->prev;
    VAR_19->prev->next = VAR_19->next;
    VAR_19->prev = VAR_19->next = 0;
    VAR_19->aio = 0;

    FUNC_3 (VAR_19);
    VAR_20->search_mf = 0;

    return 0;
  }

  if (VAR_15 > 0) {
    FUNC_2 (VAR_12, "*** Read user %d search data from index at position %d: read %d bytes\n", VAR_20->user_id, VAR_21->user_data_offset + VAR_21->user_data_size, VAR_17);
  }

  VAR_19->aio = 0;

  struct file_search_header *VAR_24 = (struct file_search_header *) FUNC_4 (VAR_20);

  FUNC_0 (VAR_24->magic == VAR_0);
  FUNC_0 (VAR_24->words_num > 0);
  FUNC_0 (VAR_24->words_num <= (VAR_17 >> 2) - 2);

  VAR_7 += VAR_17;
  VAR_13 += VAR_17;
  VAR_8++;
  VAR_14++;

  if (VAR_20->user_id == 92226304) {


  }

  return 1;
}
