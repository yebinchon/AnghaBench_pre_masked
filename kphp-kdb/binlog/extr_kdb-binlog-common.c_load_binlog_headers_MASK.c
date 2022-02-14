
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct lev_start {int type; scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; } ;
struct lev_rotate_from {int cur_log_pos; int cur_log_hash; int prev_log_hash; int crc32; int timestamp; } ;
struct kfs_file_header {int dummy; } ;
struct TYPE_11__ {scalar_t__ first36_bytes; } ;
typedef TYPE_1__ kfs_binlog_zip_header_t ;
struct TYPE_13__ {int fd; } ;
struct TYPE_12__ {scalar_t__ magic; scalar_t__ kfs_file_type; scalar_t__ header_seq_num; scalar_t__ data_size; scalar_t__ raw_size; int log_pos; int finished; scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; int prev_log_hash; int file_id_hash; int log_pos_crc32; int prev_log_time; int replica_id_hash; scalar_t__ data_crc32; } ;


 TYPE_5__* VAR_0 ;
 struct lev_rotate_from* VAR_1 ;

 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;


 int VAR_4 ;
 struct lev_start* VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_2__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (TYPE_5__*,TYPE_2__*,int,long long) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (int,TYPE_2__*,int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_7 (int VAR_18) {
  int VAR_19;
  struct lev_start *VAR_20;
  FUNC_0 (sizeof (struct kfs_file_header) == 4096);

  VAR_7 = 0;
  VAR_6 = 0;
  VAR_5 = 0;
  VAR_1 = 0;
  VAR_3 = 0;
  VAR_9 = 0;
  VAR_13 = 0;
  VAR_16 = 0;
  VAR_17 = 0;

  if (FUNC_4 (VAR_18, 0, VAR_4) != 0) {
    FUNC_2 (VAR_15, "cannot lseek binlog file %d: %m\n", VAR_18);
    return -1;
  }

  VAR_19 = FUNC_6 (VAR_18, VAR_11, 4096 * 3);
  if (!VAR_19) {
    return 0;
  }

  if (VAR_0 && VAR_0->fd == VAR_18) {
    FUNC_3 (VAR_0, VAR_11, VAR_19, 0LL);
  }

  if (VAR_19 >= 4096 && VAR_11[0].magic == VAR_2) {
    if (FUNC_1 (VAR_11) < 0 || VAR_11[0].kfs_file_type != VAR_12) {
      FUNC_2 (VAR_15, "bad kfs header #0\n");
      return -1;
    }
    VAR_7++;
    if (VAR_19 >= 8192 && VAR_11[1].magic == VAR_2) {
      if (FUNC_1 (VAR_11 + 1) < 0 || VAR_11[1].kfs_file_type != VAR_12) {
        FUNC_2 (VAR_15, "bad kfs header #1\n");
        return -1;
      }
      VAR_7++;
      if (VAR_11[1].header_seq_num == VAR_11[0].header_seq_num) {
        FUNC_0 (!FUNC_5 (VAR_11 + 1, VAR_11, 4096));
      }
    }
  }
  VAR_19 -= VAR_7 * 4096;
  if (VAR_19 < 4) {
    FUNC_2 (VAR_15, "no first entry in binlog\n");
    return -1;
  }
  VAR_20 = (struct lev_start *) (VAR_11 + VAR_7);

  loop:
  switch (VAR_20->type) {
  case 128:
    FUNC_0 (VAR_19 >= sizeof (struct lev_start) - 4);
    VAR_5 = VAR_20;
    VAR_14 = 0;
    break;
  case 129:
    FUNC_0 (VAR_19 >= sizeof (struct lev_rotate_from));
    VAR_1 = (struct lev_rotate_from *) VAR_20;
    VAR_14 = VAR_1->cur_log_pos;
    VAR_9 = VAR_1->cur_log_hash;
    break;
  case 130:
    FUNC_0 (!VAR_7 && VAR_8);
    FUNC_0 (VAR_19 >= sizeof (kfs_binlog_zip_header_t));

    FUNC_0 (VAR_20 == (struct lev_start *) (VAR_11 + VAR_7));
    VAR_20 = (struct lev_start *) ((kfs_binlog_zip_header_t *) VAR_20)->first36_bytes;
    VAR_19 = 36;
    goto loop;
  default:
    FUNC_2 (VAR_15, "fatal: binlog file begins with wrong entry type %08x\n", VAR_20->type);
    return -1;
  }

  VAR_6 = 1;

  if (!VAR_7) {
    VAR_13 = 0;
    FUNC_0 (FUNC_4 (VAR_18, VAR_13, VAR_4) == VAR_13);
    return 0;
  }

  VAR_3 = VAR_11;
  if (VAR_7 > 1 && VAR_11[1].header_seq_num > VAR_11[0].header_seq_num) {
    VAR_3++;
  }

  FUNC_0 (VAR_3->data_size + VAR_7 * 4096 == VAR_3->raw_size);


  VAR_16 = VAR_3->data_crc32;
  VAR_17 = VAR_3->log_pos + VAR_3->data_size;

  if (VAR_3->finished == -1) {
    FUNC_2 (VAR_15, "fatal: incomplete kfs file\n");
    return -1;
  }

  if (VAR_5) {
    if (VAR_5->schema_id != VAR_3->schema_id) {
      FUNC_2 (VAR_15, "fatal: binlog schema id mismatch.\n");
      return -1;
    }
    if (VAR_5->split_min != VAR_3->split_min || VAR_5->split_max != VAR_3->split_max || VAR_5->split_mod != VAR_3->split_mod) {
      FUNC_2 (VAR_15, "fatal: binlog slice parameters mismatch.\n");
      return -1;
    }
    if (VAR_3->log_pos) {
      FUNC_2 (VAR_15, "fatal: first binlog file has non-zero log_pos %d\n", VAR_3->log_pos);
      return -1;
    }
  }

  if (VAR_1) {
    if (VAR_3->log_pos != VAR_1->cur_log_pos) {
      FUNC_2 (VAR_15, "fatal: continuation binlog file log_pos mismatch: %d != %d\n", VAR_3->log_pos, VAR_1->cur_log_pos);
      return -1;
    }
    if (VAR_3->prev_log_hash != VAR_1->prev_log_hash) {
      FUNC_2 (VAR_15, "fatal: binlog file prev_log_hash mismatch: %016x != %016x\n", VAR_3->prev_log_hash, VAR_1->prev_log_hash);
      return -1;
    }
    if (VAR_3->file_id_hash != VAR_1->cur_log_hash) {
      FUNC_2 (VAR_15, "fatal: binlog file file_id_hash mismatch: %016x != %016x\n", VAR_3->file_id_hash, VAR_1->cur_log_hash);
      return -1;
    }
    if (VAR_3->log_pos_crc32 != VAR_1->crc32) {
      FUNC_2 (VAR_15, "fatal: binlog file crc32 mismatch: %08x != %08x\n", VAR_3->log_pos_crc32, VAR_1->crc32);
      return -1;
    }
    if (VAR_3->prev_log_time != VAR_1->timestamp) {
      FUNC_2 (VAR_15, "fatal: binlog file file_id_hash mismatch: %d != %d\n", VAR_3->prev_log_time, VAR_1->timestamp);
      return -1;
    }
  }

  VAR_13 = VAR_7 * 4096;
  FUNC_0 (FUNC_4 (VAR_18, VAR_13, VAR_4) == VAR_13);

  if (VAR_3) {
    VAR_9 = VAR_3->file_id_hash;
    if (!VAR_10) {
      VAR_10 = VAR_3->replica_id_hash;
    } else if (VAR_10 != VAR_3->replica_id_hash) {
      FUNC_2 (VAR_15, "fatal: binlog file replica_hash mismatch: %016x != %016x\n", VAR_3->replica_id_hash, VAR_10);
      return -1;
    }
  }

  return VAR_7;
}
