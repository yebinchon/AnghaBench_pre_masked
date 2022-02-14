
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int (* htc_becomes_ready ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (struct connection*) ;

int FUNC_2 (struct connection *VAR_1) {
  ++VAR_0;

  if (FUNC_0(VAR_1)->htc_becomes_ready != ((void*)0)) {
    FUNC_0(VAR_1)->htc_becomes_ready (VAR_1);
  }

  return 0;
}
