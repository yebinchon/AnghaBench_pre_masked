
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int remote_pid; } ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*,int,int) ;

int FUNC_4 (struct connection *VAR_3, int VAR_4, int VAR_5) {
  FUNC_2 (VAR_3);
  if (VAR_4 != VAR_0) {
    return VAR_1;
  }
  VAR_2 = &FUNC_0(VAR_3)->remote_pid;
  FUNC_1 ();
  return FUNC_3 (VAR_3, VAR_4, VAR_5);
}
