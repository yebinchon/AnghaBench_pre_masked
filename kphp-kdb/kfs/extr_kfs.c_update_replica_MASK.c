
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct kfs_file_info {scalar_t__ file_size; TYPE_1__* replica; } ;
typedef TYPE_1__* kfs_replica_handle_t ;
struct TYPE_6__ {char* replica_prefix; int binlog_num; int snapshot_num; struct kfs_file_info** snapshots; struct kfs_file_info** binlogs; int * ctx_crypto; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct kfs_file_info*,struct kfs_file_info*) ;
 int FUNC_3 (int ,char*,char*,int,int,int,int) ;
 TYPE_1__* FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_6 (kfs_replica_handle_t VAR_2, int VAR_3) {
  if (!VAR_2) {
    return -1;
  }
  kfs_replica_handle_t VAR_4 = FUNC_4 (VAR_2->replica_prefix, VAR_3);
  if (!VAR_4) {
    return -1;
  }

  FUNC_5 (VAR_2);
  VAR_2->ctx_crypto = VAR_4->ctx_crypto;
  VAR_4->ctx_crypto = ((void*)0);

  int VAR_5 = 0, VAR_6 = 0;
  struct kfs_file_info *VAR_7, *VAR_8, **VAR_9;

  while (VAR_5 < VAR_4->binlog_num && VAR_6 < VAR_2->binlog_num) {
    VAR_7 = VAR_4->binlogs[VAR_5];
    VAR_8 = VAR_2->binlogs[VAR_6];
    int VAR_10 = FUNC_2 (VAR_7, VAR_8);
    if (VAR_10 < 0) {
      VAR_5++;
    } else if (VAR_10 > 0) {
      VAR_6++;
    } else {
      VAR_4->binlogs[VAR_5++] = VAR_8;
      VAR_2->binlogs[VAR_6++] = VAR_7;
      FUNC_0 (VAR_8->file_size <= VAR_7->file_size);
      VAR_8->file_size = VAR_7->file_size;
    }
  }

  VAR_5 = VAR_6 = 0;
  while (VAR_5 < VAR_4->snapshot_num && VAR_6 < VAR_2->snapshot_num) {
    VAR_7 = VAR_4->snapshots[VAR_5];
    VAR_8 = VAR_2->snapshots[VAR_6];
    int VAR_11 = FUNC_2 (VAR_7, VAR_8);
    if (VAR_11 < 0) {
      VAR_5++;
    } else if (VAR_11 > 0) {
      VAR_6++;
    } else {
      VAR_4->snapshots[VAR_5++] = VAR_8;
      VAR_2->snapshots[VAR_6++] = VAR_7;
      FUNC_0 (VAR_8->file_size <= VAR_7->file_size);
      VAR_8->file_size = VAR_7->file_size;
    }
  }

  VAR_5 = VAR_2->binlog_num; VAR_2->binlog_num = VAR_4->binlog_num; VAR_4->binlog_num = VAR_5;
  VAR_9 = VAR_2->binlogs; VAR_2->binlogs = VAR_4->binlogs; VAR_4->binlogs = VAR_9;

  VAR_5 = VAR_2->snapshot_num; VAR_2->snapshot_num = VAR_4->snapshot_num; VAR_4->snapshot_num = VAR_5;
  VAR_9 = VAR_2->snapshots; VAR_2->snapshots = VAR_4->snapshots; VAR_4->snapshots = VAR_9;

  if (VAR_1 > 1) {
    FUNC_3 (VAR_0, "finished reloading file list for replica %s: %d binlogs, %d snapshots (OLD: %d, %d)\n",
      VAR_2->replica_prefix, VAR_2->binlog_num, VAR_2->snapshot_num, VAR_4->binlog_num, VAR_4->snapshot_num);
  }

  FUNC_1 (VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_2->binlog_num; VAR_5++) {
    VAR_2->binlogs[VAR_5]->replica = VAR_2;
  }

  for (VAR_5 = 0; VAR_5 < VAR_2->snapshot_num; VAR_5++) {
    VAR_2->snapshots[VAR_5]->replica = VAR_2;
  }

  return 1;
}
