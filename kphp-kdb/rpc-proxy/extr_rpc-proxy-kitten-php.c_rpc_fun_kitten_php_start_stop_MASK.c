
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_4__ {scalar_t__ in_type; struct connection* extra; } ;
struct TYPE_3__ {int error; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,struct connection*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,char*,...) ;

int FUNC_4 (void **VAR_6, void **VAR_7) {
  int VAR_8 = (long)*VAR_7;
  if (VAR_8 == VAR_2 || VAR_8 == VAR_3) {
    if (VAR_0->in_type != VAR_5) { return 0; }
    struct connection *VAR_9 = VAR_0->extra;
    FUNC_2 (12);
    FUNC_3 (2, "Kitten php %s\n", VAR_8 == VAR_2 ? "connected" : "disconnected");
    int VAR_10 = FUNC_1 (VAR_8, VAR_9);
    FUNC_3 (2, "Kitten_php_ready: res = %d, fetch_error = %s, new_size = %d\n", VAR_10, VAR_4.error, FUNC_0 ());
    return 0;
  }
  VAR_1;
}
