
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lev_copyexec_result_connect {unsigned long long random_tag; unsigned long long volume_id; int hostname_length; int pid; int hostname; int ip; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {int ip; int last_action_time; } ;
typedef TYPE_1__ host_t ;


 int VAR_0 ;
 struct lev_copyexec_result_connect* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct connection*,unsigned long long,unsigned long long,char const* const,int,TYPE_1__**) ;
 int FUNC_3 (int ,char const* const,int) ;
 int VAR_1 ;
 int FUNC_4 (char const* const) ;
 int FUNC_5 (int,char*,int,...) ;

int FUNC_6 (struct connection *VAR_2, unsigned long long VAR_3, unsigned long long VAR_4, const char *const VAR_5, int VAR_6, host_t **VAR_7) {
  FUNC_5 (3, "do_connect (c: %p, volume_id: 0x%llx, random_tag: 0x%llx, hostname: %s, pid: %d)\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  int VAR_8 = FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_5 (4, "get_host_on_connect returns %d.\n", VAR_8);
  if (VAR_8 < 0) {
    return VAR_8;
  }
  (*VAR_7)->last_action_time = VAR_1;
  if (VAR_8 != 0) {
    FUNC_1 ((*VAR_7) != ((void*)0));
    int VAR_9 = FUNC_4 (VAR_5);
    struct lev_copyexec_result_connect *VAR_10 = FUNC_0 (VAR_0, sizeof (*VAR_10) + VAR_9, 0);
    VAR_10->random_tag = VAR_4;
    VAR_10->volume_id = VAR_3;
    VAR_10->ip = (*VAR_7)->ip;
    VAR_10->hostname_length = VAR_9;
    FUNC_3 (VAR_10->hostname, VAR_5, VAR_9);
    VAR_10->pid = VAR_6;
  }
  return VAR_8;
}
