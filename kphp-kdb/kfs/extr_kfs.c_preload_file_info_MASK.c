
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lev_start {int type; } ;
struct kfs_file_info {int start; char* filename; int flags; int preloaded_bytes; scalar_t__ kfs_file_type; int kfs_headers; scalar_t__ log_pos; scalar_t__ min_log_pos; scalar_t__ max_log_pos; scalar_t__ file_size; TYPE_1__* replica; struct kfs_file_header* khdr; scalar_t__ iv; } ;
struct kfs_file_header {scalar_t__ magic; scalar_t__ header_seq_num; scalar_t__ data_size; scalar_t__ raw_size; scalar_t__ kfs_file_type; scalar_t__ log_pos; scalar_t__ replica_id_hash; } ;
typedef TYPE_1__* kfs_replica_handle_t ;
typedef int kfs_binlog_zip_header_t ;
struct TYPE_4__ {int (* ctr_crypt ) (TYPE_2__*,unsigned char*,unsigned char*,int,scalar_t__,unsigned long long) ;} ;
struct TYPE_3__ {scalar_t__ replica_id_hash; TYPE_2__* ctx_crypto; } ;



 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct kfs_file_header*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (struct kfs_file_info*) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct kfs_file_header*,struct kfs_file_header*,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct kfs_file_info*,int,int *) ;
 int FUNC_11 (struct kfs_file_info*,int,int,struct lev_start*) ;
 int FUNC_12 (int,int,int ) ;
 int VAR_5 ;
 int FUNC_13 (TYPE_2__*,unsigned char*,unsigned char*,int,scalar_t__,unsigned long long) ;
 int VAR_6 ;

int FUNC_14 (struct kfs_file_info *VAR_7) {
  if (!VAR_7->start) {
    int VAR_8 = FUNC_9 (VAR_7->filename, VAR_1);
    if (VAR_8 < 0) {
      FUNC_3 (VAR_5, "Cannot open %s file %s: %m\n", VAR_7->flags & 1 ? "snapshot" : "binlog", VAR_7->filename);
      return -2;
    }
    if (FUNC_5 (VAR_7) < 0) {
      FUNC_3 (VAR_5, "Cannot compute AES initialization vector for %s file %s.\n", VAR_7->flags & 1 ? "snapshot" : "binlog", VAR_7->filename);
      return -2;
    }
    VAR_7->start = FUNC_7 (VAR_3);
    FUNC_0 (VAR_7->start);
    int VAR_9 = FUNC_12 (VAR_8, VAR_7->start, VAR_3);
    if (VAR_9 < 0) {
      FUNC_3 (VAR_5, "Cannot read %s file %s: %m\n", VAR_7->flags & 1 ? "snapshot" : "binlog", VAR_7->filename);
      FUNC_0 (FUNC_2 (VAR_8) >= 0);
      FUNC_4 (VAR_7->start);
      VAR_7->start = 0;
      return -2;
    }
    VAR_7->preloaded_bytes = VAR_9;
    if (VAR_7->iv) {
      kfs_replica_handle_t VAR_10 = VAR_7->replica;
      FUNC_0 (VAR_10 && VAR_10->ctx_crypto);
      VAR_10->ctx_crypto->ctr_crypt (VAR_10->ctx_crypto, (unsigned char *) VAR_7->start, (unsigned char *) VAR_7->start, VAR_9, VAR_7->iv, 0ULL);
    }
    struct kfs_file_header *VAR_11 = (struct kfs_file_header *) VAR_7->start;
    int VAR_12 = 0;

    if (VAR_9 >= 4096 && VAR_11[0].magic == VAR_0) {
      if (FUNC_1 (VAR_11) < 0) {
        FUNC_3 (VAR_5, "bad kfs header #0\n");
        FUNC_0 (FUNC_2 (VAR_8) >= 0);
        FUNC_4 (VAR_7->start);
        VAR_7->start = 0;
        return -2;
      }
      VAR_12++;
      if (VAR_9 >= 8192 && VAR_11[1].magic == VAR_0) {
        if (FUNC_1 (VAR_11 + 1) < 0) {
          FUNC_3 (VAR_5, "bad kfs header #1\n");
          FUNC_0 (FUNC_2 (VAR_8) >= 0);
          FUNC_4 (VAR_7->start);
          VAR_7->start = 0;
          return -2;
        }
        VAR_12++;
        if (VAR_11[1].header_seq_num == VAR_11[0].header_seq_num) {
          FUNC_0 (!FUNC_8 (VAR_11 + 1, VAR_11, 4096));
        }
      }
    }

    VAR_7->khdr = VAR_12 ? VAR_11 : 0;
    if (VAR_12 > 1 && VAR_11[1].header_seq_num > VAR_11[0].header_seq_num) {
      VAR_7->khdr++;
    }

    FUNC_0 (!VAR_12 || VAR_7->khdr->data_size + VAR_12 * 4096 == VAR_7->khdr->raw_size);
    FUNC_0 (!VAR_12 || VAR_7->khdr->kfs_file_type == VAR_7->kfs_file_type);

    VAR_7->kfs_headers = VAR_12;

    if (VAR_7->kfs_file_type == VAR_4) {

      struct lev_start *VAR_13 = (struct lev_start *) (VAR_11 + VAR_12);

      VAR_9 -= 4096 * VAR_12;

      switch (VAR_13->type) {
      case 128:
      case 129:
        if (VAR_7->flags & 16) {
          FUNC_3 (VAR_5, "error: zipped binlog file '%s' starts from LEV_START or LEV_ROTATE_FROM.\n", VAR_7->filename);
          FUNC_0 (FUNC_2 (VAR_8) >= 0);
          return -2;
        }
        if (FUNC_11 (VAR_7, VAR_8, VAR_9, VAR_13) < 0) {
          return -2;
        }
        break;
      case 130:
        if (VAR_12) {
          FUNC_3 (VAR_5, "error: zipped binlog file '%s' contains KFS headers\n", VAR_7->filename);
          FUNC_0 (FUNC_2 (VAR_8) >= 0);
          return -2;
        }
        if (!(VAR_7->flags & 16)) {
          FUNC_3 (VAR_5, "error: not zipped binlog file '%s' contains KFS_BINLOG_ZIP_MAGIC\n", VAR_7->filename);
          FUNC_0 (FUNC_2 (VAR_8) >= 0);
          return -2;
        }
        if (FUNC_10 (VAR_7, VAR_8, (kfs_binlog_zip_header_t *) VAR_13) < 0) {
          return -2;
        }
        break;
      default:
        FUNC_3 (VAR_5, "warning: binlog file %s begins with wrong entry type %08x\n", VAR_7->filename, VAR_13->type);
        FUNC_0 (FUNC_2 (VAR_8) >= 0);
        return -2;
      }

      if (VAR_7->khdr && VAR_7->khdr->log_pos != VAR_7->log_pos) {
        FUNC_3 (VAR_5, "warning: binlog file %s has different starting position in header (%ld) and starting record (%ld)\n", VAR_7->filename, VAR_7->khdr->log_pos, VAR_7->log_pos);
        FUNC_0 (FUNC_2 (VAR_8) >= 0);
        return -2;
      }

      if (VAR_7->log_pos < VAR_7->min_log_pos || VAR_7->log_pos > VAR_7->max_log_pos) {
        FUNC_3 (VAR_5, "warning: binlog file %s starts from position %ld (should be in %ld..%ld)\n", VAR_7->filename, VAR_7->log_pos, VAR_7->min_log_pos, VAR_7->max_log_pos);
        FUNC_0 (FUNC_2 (VAR_8) >= 0);
        return -2;
      }

      if (VAR_6 > 1) {
        FUNC_3 (VAR_5, "preloaded binlog file info for %s (%ld bytes, %d headers), covering %ld..%ld, name corresponds to %ld..%ld\n", VAR_7->filename, VAR_7->file_size, VAR_12, VAR_7->log_pos, VAR_7->log_pos + VAR_7->file_size - 4096 * VAR_12, VAR_7->min_log_pos, VAR_7->max_log_pos);
      }
    }

    if (VAR_7->khdr && VAR_7->replica) {
      if (!VAR_7->khdr->replica_id_hash) {
        FUNC_3 (VAR_5, "warning: binlog file %s has zero replica_id_hash, skipping\n", VAR_7->filename);
        FUNC_0 (FUNC_2 (VAR_8) >= 0);
        return -2;
      }
      if (!VAR_7->replica->replica_id_hash) {
        VAR_7->replica->replica_id_hash = VAR_7->khdr->replica_id_hash;
      } else if (VAR_7->replica->replica_id_hash != VAR_7->khdr->replica_id_hash) {
        FUNC_3 (VAR_5, "warning: binlog file %s has incorrect replica_id_hash %016lx != %016lx\n", VAR_7->filename, VAR_7->khdr->replica_id_hash, VAR_7->replica->replica_id_hash);
      }
    }

    FUNC_0 (FUNC_6 (VAR_8, 4096 * VAR_12, VAR_2) == 4096 * VAR_12);

    return VAR_8;
  } else {
    return -1;
  }
}
