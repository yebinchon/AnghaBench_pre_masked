
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct lev_start {int type; scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; } ;
struct lev_rotate_from {scalar_t__ cur_log_pos; scalar_t__ prev_log_hash; } ;
struct kfs_file_header {int dummy; } ;
struct TYPE_7__ {scalar_t__ magic; scalar_t__ kfs_file_type; scalar_t__ header_seq_num; scalar_t__ data_size; scalar_t__ raw_size; int finished; scalar_t__ schema_id; scalar_t__ split_min; scalar_t__ split_max; scalar_t__ split_mod; scalar_t__ log_pos; scalar_t__ prev_log_hash; int data_crc32; } ;


 struct lev_rotate_from* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;


 int VAR_3 ;
 struct lev_start* VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_5 (int,TYPE_1__*,int) ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_6 (int VAR_11) {
  int VAR_12 = FUNC_5 (VAR_11, VAR_7, 4096 * 3);
  struct lev_start *VAR_13;
  FUNC_0 (sizeof (struct kfs_file_header) == 4096);
  VAR_6 = 0;
  VAR_5 = 0;
  VAR_4 = 0;
  VAR_0 = 0;
  VAR_2 = 0;
  if (!VAR_12) {
    return 0;
  }
  if (VAR_12 >= 4096 && VAR_7[0].magic == VAR_1) {
    if (FUNC_1 (VAR_7) < 0 || VAR_7[0].kfs_file_type != VAR_8) {
      FUNC_2 (VAR_9, "bad kfs header #0\n");
      return -1;
    }
    VAR_6++;
    if (VAR_12 >= 8192 && VAR_7[1].magic == VAR_1) {
      if (FUNC_1 (VAR_7 + 1) < 0 || VAR_7[1].kfs_file_type != VAR_8) {
        FUNC_2 (VAR_9, "bad kfs header #1\n");
        return -1;
      }
      VAR_6++;
      if (VAR_7[1].header_seq_num == VAR_7[0].header_seq_num) {
        FUNC_0 (!FUNC_4 (VAR_7 + 1, VAR_7, 4096));
      }
    }
  }
  VAR_12 -= VAR_6 * 4096;
  if (VAR_12 < 4) {
    FUNC_2 (VAR_9, "no first entry in binlog\n");
    return -1;
  }
  VAR_13 = (struct lev_start *) (VAR_7 + VAR_6);

  switch (VAR_13->type) {
  case 128:
    FUNC_0 (VAR_12 >= sizeof (struct lev_start));
    VAR_4 = VAR_13;
    break;
  case 129:
    FUNC_0 (VAR_12 >= sizeof (struct lev_rotate_from));
    VAR_0 = (struct lev_rotate_from *) VAR_13;
    break;
  default:
    FUNC_2 (VAR_9, "fatal: binlog file begins with wrong entry type %08x\n", VAR_13->type);
    return -1;
  }

  VAR_5 = 1;

  if (!VAR_6) {
    return 0;
  }

  VAR_2 = VAR_7;
  if (VAR_6 > 1 && VAR_7[1].header_seq_num > VAR_7[0].header_seq_num) {
    VAR_2++;
  }

  FUNC_0 (VAR_2->data_size + VAR_6 * 4096 == VAR_2->raw_size);
  FUNC_0 (FUNC_3 (VAR_11, 0, VAR_3) == VAR_2->raw_size);

  VAR_10 = ~VAR_2->data_crc32;

  if (VAR_2->finished == -1) {
    FUNC_2 (VAR_9, "fatal: incomplete kfs file\n");
    return -1;
  }

  if (VAR_4) {
    if (VAR_4->schema_id != VAR_2->schema_id) {
      FUNC_2 (VAR_9, "fatal: binlog schema id mismatch.\n");
      return -1;
    }
    if (VAR_4->split_min != VAR_2->split_min || VAR_4->split_max != VAR_2->split_max || VAR_4->split_mod != VAR_2->split_mod) {
      FUNC_2 (VAR_9, "fatal: binlog slice parameters mismatch.\n");
      return -1;
    }
    if (VAR_2->log_pos) {
      FUNC_2 (VAR_9, "fatal: first binlog file has non-zero log_pos %ld\n", VAR_2->log_pos);
      return -1;
    }
  }

  if (VAR_0) {
    if (VAR_2->log_pos != VAR_0->cur_log_pos) {
      FUNC_2 (VAR_9, "fatal: continuation binlog file log_pos mismatch: %ld != %ld\n", VAR_2->log_pos, VAR_0->cur_log_pos);
      return -1;
    }
    if (VAR_2->prev_log_hash != VAR_0->prev_log_hash) {
      FUNC_2 (VAR_9, "fatal: binlog file prev_log_hash mismatch: %016lx != %016lx\n", VAR_2->prev_log_hash, VAR_0->prev_log_hash);
      return -1;
    }
  }

  return VAR_6;
}
