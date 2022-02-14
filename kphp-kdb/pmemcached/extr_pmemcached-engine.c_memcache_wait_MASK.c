
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int total_bytes; } ;
struct connection {int flags; TYPE_1__* type; TYPE_2__ Out; } ;
struct TYPE_3__ {int (* writer ) (struct connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct connection*,double,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct connection*,double) ;
 int VAR_5 ;
 int FUNC_4 (struct connection*) ;
 int VAR_6 ;

int FUNC_5 (struct connection *VAR_7) {
  if (VAR_6 > 2) {
    FUNC_2 (VAR_5, "wait for aio..\n");
  }
  if (VAR_7->flags & VAR_0) {
    if (VAR_6 > 1) {
      FUNC_2 (VAR_5, "memcache: IN TIMEOUT (%p)\n", VAR_7);
    }
    return 0;
  }
  if (VAR_7->Out.total_bytes > 8192) {
    VAR_7->flags |= VAR_1;
    VAR_7->type->writer (VAR_7);
  }

  if (!VAR_3) {
    FUNC_2 (VAR_5, "WaitAio=0 - no memory to load user metafile, query dropped.\n");
    return 0;
  }
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
    FUNC_1 (VAR_2[VAR_8], VAR_7, 0.7, &VAR_4);
  }
  FUNC_3 (VAR_7, 0.5);
  FUNC_0 ();
  return 1;
}
