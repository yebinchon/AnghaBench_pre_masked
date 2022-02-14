
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
 double VAR_5 ;
 int FUNC_1 (int ,struct connection*,double,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct connection*,double) ;
 int VAR_6 ;
 int FUNC_4 (struct connection*) ;
 int VAR_7 ;

int FUNC_5 (struct connection *VAR_8) {
  if (!VAR_3) {
    return 0;
  }
  if (VAR_7 > 2) {
    FUNC_2 (VAR_6, "wait for aio..\n");
  }
  if (VAR_8->flags & VAR_0) {
    if (VAR_7 > 1) {
      FUNC_2 (VAR_6, "memcache: IN TIMEOUT (%p)\n", VAR_8);
    }
    FUNC_0 ();
    return 0;
  }
  if (VAR_8->Out.total_bytes > 8192) {
    VAR_8->flags |= VAR_1;
    VAR_8->type->writer (VAR_8);
  }
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
    FUNC_1 (VAR_2[VAR_9], VAR_8, 1.1 * VAR_5, &VAR_4);
  }
  FUNC_3 (VAR_8, VAR_5);
  FUNC_0 ();

  return 1;
}
