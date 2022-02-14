
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memcache_server_functions {TYPE_1__* info; } ;
struct connection {int fd; int pending_queries; int status; int * extra; } ;
struct TYPE_2__ {int t_timeouts; int a_timeouts; int mc_proxy_inbound; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (struct connection*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3 (struct connection *VAR_4) {
  if (VAR_3 > 1) {
    FUNC_1 (VAR_2, "proxy_memcache_server connection %d timeout alarm, %d queries pending, status=%d\n", VAR_4->fd, VAR_4->pending_queries, VAR_4->status);
  }

  VAR_0 = ((struct memcache_server_functions *) VAR_4->extra)->info;
  FUNC_0 (VAR_0 && &VAR_0->mc_proxy_inbound == VAR_4->extra);
  VAR_0->a_timeouts ++;
  VAR_0->t_timeouts ++;

  FUNC_0 (VAR_4->status == VAR_1);
  return FUNC_2 (VAR_4);
}
