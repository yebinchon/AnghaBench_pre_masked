
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int backup_status_t ;
struct TYPE_9__ {TYPE_6__* F; } ;
struct TYPE_8__ {TYPE_3__ S; } ;
typedef TYPE_2__ backup_file_t ;
struct TYPE_10__ {TYPE_1__* info; } ;
struct TYPE_7__ {int filename; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,long long) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,long long) ;
 scalar_t__ FUNC_3 (TYPE_3__*,long long) ;
 int FUNC_4 (int,char*,long long,int ,long long) ;

__attribute__((used)) static int FUNC_5 (backup_file_t *VAR_6, long long VAR_7, long long VAR_8, backup_status_t *VAR_9) {
  FUNC_0 (VAR_6->S.F);
  if (FUNC_3 (&VAR_6->S, VAR_7) < 0) {
    *VAR_9 = VAR_3;
    return -1;
  }
  if (FUNC_2 (&VAR_6->S, VAR_1, VAR_8) < 0) {
    *VAR_9 = VAR_3;
    return -1;
  }

  FUNC_4 (2, "read %lld bytes from backup '%s', offset: %lld\n", (long long) VAR_8, VAR_6->S.F->info->filename, VAR_7);

  if (FUNC_1 (VAR_5 + VAR_0, VAR_1, VAR_8)) {
    *VAR_9 = VAR_2;
    return -1;
  }
  *VAR_9 = VAR_4;
  return 0;
}
