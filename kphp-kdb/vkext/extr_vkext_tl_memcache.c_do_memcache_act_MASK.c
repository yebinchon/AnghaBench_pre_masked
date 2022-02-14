
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_connection {int dummy; } ;
struct TYPE_3__ {char* data; void* len; } ;
struct TYPE_4__ {TYPE_1__ strval; } ;
struct memcache_value {TYPE_2__ val; void* type; } ;


 void* VAR_0 ;
 struct memcache_value FUNC_0 () ;
 scalar_t__ FUNC_1 (double) ;
 scalar_t__ FUNC_2 (long long,double) ;
 void* VAR_1 ;
 void* FUNC_3 (char*) ;

struct memcache_value FUNC_4 (struct rpc_connection *VAR_2, long long VAR_3, int VAR_4, double VAR_5) {
  struct memcache_value VAR_6;
  if (VAR_3 < 0) {
    VAR_6.type = VAR_0;
    VAR_6.val.strval.data = VAR_1;
    VAR_6.val.strval.len = VAR_6.val.strval.data ? FUNC_3 (VAR_6.val.strval.data) : 0;
    return VAR_6;
  }
  if ((VAR_4 & 1) && FUNC_1 (VAR_5)) {
    VAR_6.type = VAR_0;
    VAR_6.val.strval.data = VAR_1;
    VAR_6.val.strval.len = VAR_6.val.strval.data ? FUNC_3 (VAR_6.val.strval.data) : 0;
    return VAR_6;
  }
  if (FUNC_2 (VAR_3, VAR_5) < 0) {
    VAR_6.type = VAR_0;
    VAR_6.val.strval.data = "timeout";
    VAR_6.val.strval.len = FUNC_3 (VAR_6.val.strval.data);
    return VAR_6;
  }
  return FUNC_0 ();
}
