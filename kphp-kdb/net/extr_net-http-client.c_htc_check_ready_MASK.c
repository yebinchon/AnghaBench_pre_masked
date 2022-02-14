
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int (* htc_check_ready ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (struct connection *VAR_0) {
  return FUNC_0(VAR_0)->htc_check_ready (VAR_0);
}
