
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kfs_file_info {int * iv; int filename; TYPE_1__* replica; } ;
typedef TYPE_1__* kfs_replica_handle_t ;
struct TYPE_4__ {int * ctx_crypto; } ;


 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,int ,int **) ;
 int FUNC_3 (char const*) ;

int FUNC_4 (struct kfs_file_info *VAR_0) {
  kfs_replica_handle_t VAR_1 = VAR_0->replica;
  FUNC_0 (VAR_1);
  if (VAR_1->ctx_crypto == ((void*)0) || VAR_0->iv != ((void*)0)) {
    return 0;
  }
  const char *VAR_2 = FUNC_1 (VAR_0->filename);
  if (FUNC_2 (VAR_1, VAR_2, FUNC_3 (VAR_2), &VAR_0->iv) < 0) {
    return -1;
  }
  return 0;
}
