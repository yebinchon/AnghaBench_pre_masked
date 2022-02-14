
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
 int* VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct connection*,double,int *) ;
 int FUNC_3 (int ,char*,struct connection*) ;
 int FUNC_4 (struct connection*,char const*,int) ;
 int FUNC_5 (struct connection*,double) ;
 int VAR_5 ;
 int FUNC_6 (struct connection*) ;
 int VAR_6 ;

int FUNC_7 (struct connection *VAR_7, const char *VAR_8, int VAR_9) {
  FUNC_0();
  int VAR_10 = FUNC_4 (VAR_7, VAR_8, VAR_9);

  if (VAR_10 == -2) {
    if (VAR_7->flags & VAR_0) {
      if (VAR_6 > 1) {
        FUNC_3 (VAR_5, "memcache_get: IN TIMEOUT (%p)\n", VAR_7);
      }
      return 0;
    }

    if (VAR_7->Out.total_bytes > 8192) {
      VAR_7->flags |= VAR_1;
      VAR_7->type->writer (VAR_7);
    }

    FUNC_1 (VAR_3);

    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
      FUNC_1 (VAR_2[VAR_11]);
      FUNC_2 (VAR_2[VAR_11], VAR_7, 0.7, &VAR_4);
    }
    FUNC_5 (VAR_7, 0.5);
    return 0;
  }

  FUNC_1 (VAR_10 == 0);
  return 0;
}
