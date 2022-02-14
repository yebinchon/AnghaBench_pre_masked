
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total_bytes; } ;
struct connection {int flags; TYPE_2__* type; TYPE_1__ Out; } ;
struct TYPE_4__ {int (* writer ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,struct connection*,double,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct connection*,char const*,int) ;
 int FUNC_3 (struct connection*,double) ;
 int VAR_4 ;
 int FUNC_4 (struct connection*) ;
 int VAR_5 ;

int FUNC_5 (struct connection *VAR_6, const char *VAR_7, int VAR_8) {
  if (VAR_5 > 1) {
    FUNC_1 (VAR_4, "memcache_get: key='%s'\n", VAR_7);
  }

  VAR_2 = 0;

  int VAR_9 = FUNC_2 (VAR_6, VAR_7, VAR_8);

  if (VAR_9 == -2) {
    if (VAR_5 > 2) {
      FUNC_1 (VAR_4, "wait for aio..\n");
    }
    if (VAR_6->flags & VAR_0) {
      if (VAR_5 > 1) {
        FUNC_1 (VAR_4, "memcache_get: IN TIMEOUT (%p)\n", VAR_6);
      }
      return 0;
    }
    if (VAR_6->Out.total_bytes > 8192) {
      VAR_6->flags |= VAR_1;
      VAR_6->type->writer (VAR_6);
    }

    if (!VAR_2) {
      FUNC_1 (VAR_4, "WaitAio=0 - no memory to load user metafile, query dropped.\n");
      return 0;
    }
    FUNC_0 (VAR_2, VAR_6, 0.7, &VAR_3);
    FUNC_3 (VAR_6, 0.5);
    return 0;
  }

  return 0;
}
