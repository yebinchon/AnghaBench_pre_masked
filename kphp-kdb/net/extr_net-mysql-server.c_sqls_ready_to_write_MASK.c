
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int (* sql_ready_to_write ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;

__attribute__((used)) static int FUNC_2 (struct connection *VAR_0) {
  if (FUNC_0(VAR_0)->sql_ready_to_write) {
    FUNC_0(VAR_0)->sql_ready_to_write (VAR_0);
  }
  return 0;
}
