
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kfs_file {int dummy; } ;
typedef TYPE_1__* kfs_replica_handle_t ;
typedef struct kfs_file* kfs_file_handle_t ;
struct TYPE_4__ {int snapshot_num; } ;


 int FUNC_0 (int ,char*) ;
 struct kfs_file* FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;

kfs_file_handle_t FUNC_2 (kfs_replica_handle_t VAR_2) {
  if (!VAR_2) {
    return 0;
  }
  if (VAR_1 > 1) {
    FUNC_0 (VAR_0, "opening last snapshot file\n");
  }

  struct kfs_file *VAR_3 = 0;
  int VAR_4 = VAR_2->snapshot_num - 1;
  while (VAR_4 >= 0 && (VAR_3 = FUNC_1 (VAR_2, VAR_4)) == 0) {
    --VAR_4;
  }
  return VAR_3;
}
