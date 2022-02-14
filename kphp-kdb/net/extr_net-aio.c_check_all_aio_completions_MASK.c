
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aio_connection {struct aio_connection* next; } ;
struct TYPE_2__ {struct aio_connection* first; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct aio_connection*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2 (void) {
  struct aio_connection *VAR_3, *VAR_4;
  int VAR_5 = 0;

  if (VAR_2 > 3) {
    FUNC_1 (VAR_1, "check_all_aio_completions ()\n");
  }

  for (VAR_3 = VAR_0.first; VAR_3 != (struct aio_connection *)&VAR_0; VAR_3 = VAR_4) {
    VAR_4 = VAR_3->next;

    VAR_5 += FUNC_0 (VAR_3);
  }
  if (VAR_2 > 1 && VAR_5 > 0) {
    FUNC_1 (VAR_1, "check_all_aio_completions returns %d\n", VAR_5);
  }
  return VAR_5;
}
