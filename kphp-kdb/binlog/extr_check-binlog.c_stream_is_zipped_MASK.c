
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* F; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_6__ {scalar_t__ kfs_file_type; int flags; } ;
struct TYPE_5__ {TYPE_2__* info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1 (stream_t *VAR_2) {
  FUNC_0 (VAR_2->F && VAR_2->F->info && (VAR_2->F->info->kfs_file_type == VAR_0 || VAR_2->F->info->kfs_file_type == VAR_1));
  return (VAR_2->F->info->flags & 16) ? 1 : 0;
}
