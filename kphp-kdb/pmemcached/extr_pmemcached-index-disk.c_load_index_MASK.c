
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct metafile_header_old {int dummy; } ;
struct metafile_header {int dummy; } ;
typedef TYPE_2__* kfs_file_handle_t ;
struct TYPE_14__ {scalar_t__ magic; size_t nrecords; int key_len; scalar_t__ log_pos1_crc32; scalar_t__ log_pos1; scalar_t__ log_timestamp; } ;
typedef TYPE_3__ index_header ;
struct TYPE_16__ {TYPE_4__* header; int * aio; scalar_t__ local_offsets; scalar_t__ data; } ;
struct TYPE_15__ {int nrecords; int metafile_size; TYPE_3__* key; } ;
struct TYPE_13__ {TYPE_1__* info; int fd; } ;
struct TYPE_12__ {scalar_t__ file_size; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int) ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 TYPE_7__* VAR_15 ;
 size_t* VAR_16 ;
 int FUNC_3 () ;
 size_t* VAR_17 ;
 int FUNC_4 (int ,TYPE_3__*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_4__* FUNC_6 (int) ;

int FUNC_7 (kfs_file_handle_t VAR_23) {
  VAR_7 = VAR_3;
  VAR_17[VAR_0] = VAR_0;
  VAR_16[VAR_0] = VAR_0;
  if (VAR_23 == ((void*)0)) {
    VAR_6 = 0;
    VAR_11 = 0;
    VAR_10 = 0;
    VAR_9 = 0;
    VAR_18 = 0;
    return 0;
  }
  VAR_13 = 1;
  VAR_5 = VAR_23->fd;
  index_header VAR_24;
  FUNC_4 (VAR_5, &VAR_24, sizeof (index_header));
  if (VAR_24.magic != VAR_1 && VAR_24.magic != VAR_2) {
    FUNC_0 (VAR_19, "index file is not for pmemcached\n");
    return -1;
  }
  int VAR_25 = (VAR_24.magic == VAR_2);
  VAR_21 = !VAR_25;
  VAR_11 = VAR_24.log_timestamp;
  VAR_10 = VAR_24.log_pos1;
  VAR_9 = VAR_24.log_pos1_crc32;

  VAR_14 = VAR_24.nrecords;
  if (VAR_22>=2){
    FUNC_0 (VAR_19, "%zu metafiles readed\n", VAR_24.nrecords);
  }
  if (VAR_14 > VAR_0) {
    FUNC_0 (VAR_19, "Fatal: too many metafiles\n");
    return -1;
  }

  int VAR_26;
  VAR_20 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_14; VAR_26++) {
    if (VAR_25) {
      FUNC_4 (VAR_5, &VAR_12, sizeof (struct metafile_header_old));
      FUNC_5 (&VAR_12);
    } else {
      FUNC_4 (VAR_5, &VAR_12, sizeof (struct metafile_header));
    }
    VAR_15[VAR_26].header = FUNC_6 (sizeof (struct metafile_header) + VAR_12.key_len);
    VAR_8 += sizeof (struct metafile_header) + VAR_12.key_len;
    FUNC_2 (VAR_15[VAR_26].header, &VAR_12, sizeof (struct metafile_header));
    VAR_15[VAR_26].data = 0;
    VAR_15[VAR_26].local_offsets = 0;
    VAR_15[VAR_26].aio = ((void*)0);
    FUNC_4 (VAR_5, VAR_15[VAR_26].header->key, VAR_12.key_len);
    FUNC_1 (VAR_5, VAR_15[VAR_26].header->metafile_size, VAR_4);
    if (VAR_22 >= 3) {
      FUNC_0 (VAR_19, "read metafile %d\n", VAR_26);
      FUNC_0 (VAR_19, "number of records = %d\n", VAR_15[VAR_26].header->nrecords);
    }
    VAR_20 += VAR_15[VAR_26].header->nrecords;
  }

  if (VAR_22) {
    FUNC_0 (VAR_19, "Total %d records in index\n", VAR_20);
  }
  VAR_6 = VAR_23->info->file_size;
  VAR_18 = VAR_8;

  FUNC_3();
  return 0;
}
