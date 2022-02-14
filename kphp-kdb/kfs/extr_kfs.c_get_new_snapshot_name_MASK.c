
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfs_file_info {int dummy; } ;
typedef TYPE_1__* kfs_replica_handle_t ;
struct TYPE_3__ {int snapshot_num; struct kfs_file_info** snapshots; } ;


 char* FUNC_0 (struct kfs_file_info*,long long,char const*,int) ;

char *FUNC_1 (kfs_replica_handle_t VAR_0, long long VAR_1, const char *VAR_2) {
  struct kfs_file_info *VAR_3 = 0;

  if (VAR_0 && VAR_0->snapshot_num) {
    VAR_3 = VAR_0->snapshots[VAR_0->snapshot_num - 1];
  }

  return FUNC_0 (VAR_3, VAR_1, VAR_2, 2);
}
