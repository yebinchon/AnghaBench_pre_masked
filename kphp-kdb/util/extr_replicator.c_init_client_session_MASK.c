
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct repl_handshake {int handshake_id; int binlog_file_size; int binlog_first_file_size; int binlog_tag_len; int binlog_slice_name_len; int binlog_slice_end_pos; int binlog_slice_start_pos; scalar_t__* binlog_tag; int binlog_file_end_hash; int binlog_file_start_hash; scalar_t__* binlog_first_file_start_hash; scalar_t__ flags; int type; } ;
struct repl_client_status {int conn_generation; struct connection* conn; struct related_binlog* rb; } ;
struct related_binlog {int first_file_start_size; char first_file_start_hash; TYPE_3__* binlog; TYPE_2__* kfs_binlog; TYPE_1__* kfs_replica; int min_binlog_pos; int max_binlog_pos; int slice_binlog_pos; struct repl_client_status** client; } ;
struct kfs_file_info {char* filename; int file_size; } ;
struct connection {int remote_port; int generation; } ;
typedef int md5_hash_t ;
struct TYPE_6__ {int binlog_tag_len; char* binlog_tag; } ;
struct TYPE_5__ {int fd; struct kfs_file_info* info; } ;
struct TYPE_4__ {int * binlogs; scalar_t__ binlog_num; } ;


 int VAR_0 ;
 struct repl_handshake* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,char*,struct repl_client_status*,int) ;
 struct repl_client_status* FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct related_binlog*) ;
 int FUNC_7 (scalar_t__*,char*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct connection*,int) ;
 int FUNC_10 (struct connection*) ;
 int VAR_2 ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (int,char*,int ,int ,int,scalar_t__*,char*,int,int ,int ) ;

int FUNC_14 (struct related_binlog *VAR_4, struct connection *VAR_5, int VAR_6) {
  FUNC_1 (!VAR_4->client[VAR_6]);
  int VAR_7 = (++VAR_1 & 0x3fffffff) + 1;
  FUNC_1 (!FUNC_4 (VAR_7, 0));
  struct repl_client_status *VAR_8 = VAR_4->client[VAR_6] = FUNC_4 (VAR_7, 1);
  VAR_8->rb = VAR_4;
  VAR_8->conn = VAR_5;
  VAR_8->conn_generation = VAR_5->generation;
  if (VAR_3 > 0) {
    FUNC_3 (VAR_2, "sending handshake to client %p, handshake_id=%d\n", VAR_8, VAR_7);
  }
  FUNC_1 ((VAR_4->kfs_binlog && VAR_4->kfs_replica->binlog_num) || (!VAR_4->kfs_binlog && !VAR_4->kfs_replica->binlog_num));
  int VAR_9 = VAR_4->binlog->binlog_tag_len;
  char *VAR_10 = VAR_4->kfs_binlog ? VAR_4->kfs_binlog->info->filename : "";
  int VAR_11 = 0;
  if (VAR_10) {
    char *VAR_12 = FUNC_12 (VAR_10, '/');
    if (VAR_12) {
      VAR_10 = VAR_12 + 1;
    }
    VAR_11 = FUNC_11 (VAR_10);
  }
  if (!VAR_4->min_binlog_pos && VAR_4->kfs_replica->binlog_num) {
    FUNC_1 (FUNC_6 (VAR_4) >= 0);
  }
  struct kfs_file_info *VAR_13 = VAR_4->kfs_binlog ? VAR_4->kfs_binlog->info : 0;
  int VAR_14 = sizeof (struct repl_handshake) + VAR_9 + VAR_11 + 2;

  struct repl_handshake *VAR_15 = FUNC_0 (VAR_14);
  VAR_15->type = VAR_0;
  VAR_15->handshake_id = VAR_7;
  VAR_15->flags = 0;
  VAR_15->binlog_slice_start_pos = VAR_4->slice_binlog_pos;
  VAR_15->binlog_slice_end_pos = VAR_4->max_binlog_pos;
  VAR_15->binlog_file_size = VAR_13 ? VAR_13->file_size : -1;
  VAR_15->binlog_first_file_size = !VAR_4->min_binlog_pos && VAR_4->kfs_replica->binlog_num ? FUNC_5 (VAR_4->kfs_replica->binlogs[0]) : -1;
  int VAR_16 = VAR_15->binlog_first_file_size < (1L << 20) ? VAR_15->binlog_first_file_size : (1L << 20);
  FUNC_1 (VAR_16 == VAR_4->first_file_start_size);
  FUNC_7 (VAR_15->binlog_first_file_start_hash, &VAR_4->first_file_start_hash, sizeof (md5_hash_t));
  if (!VAR_13) {
    FUNC_8 (VAR_15->binlog_file_start_hash, 0, sizeof (md5_hash_t));
    FUNC_8 (VAR_15->binlog_file_end_hash, 0, sizeof (md5_hash_t));
  } else {
    FUNC_2 (VAR_4->kfs_binlog->fd, VAR_13->file_size, VAR_15->binlog_file_start_hash, VAR_15->binlog_file_end_hash);
  }
  VAR_15->binlog_tag_len = VAR_9;
  VAR_15->binlog_slice_name_len = VAR_11;
  FUNC_7 (VAR_15->binlog_tag, VAR_4->binlog->binlog_tag, VAR_9);
  VAR_15->binlog_tag[VAR_9] = 0;
  FUNC_7 (VAR_15->binlog_tag + VAR_9 + 1, VAR_10, VAR_11);
  VAR_15->binlog_tag[VAR_9 + 1 + VAR_11] = 0;

  FUNC_13 (2, "sending handshake packet to %s:%d, handshake_id=%d, for binlog tag %s, slice name %s (size %lld, pos %lld..%lld)\n", FUNC_10 (VAR_5), VAR_5->remote_port, VAR_15->handshake_id, VAR_15->binlog_tag, VAR_10, VAR_15->binlog_file_size, VAR_15->binlog_slice_start_pos, VAR_15->binlog_slice_end_pos);

  FUNC_9 (VAR_5, VAR_14);

  return 0;
}
