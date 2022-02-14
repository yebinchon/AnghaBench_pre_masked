
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* kfs_file_handle_t ;
struct TYPE_5__ {TYPE_1__* info; } ;
struct TYPE_4__ {scalar_t__ iv; int replica; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char*,long long,scalar_t__,long long) ;

void FUNC_2 (kfs_file_handle_t VAR_0, void *VAR_1, long long VAR_2, long long VAR_3) {
  FUNC_0 (VAR_3 >= 0);
  if (VAR_0 && VAR_0->info && VAR_0->info->iv) {
    FUNC_1 (VAR_0->info->replica, (unsigned char *) VAR_1, VAR_2, VAR_0->info->iv, VAR_3);
  }
}
