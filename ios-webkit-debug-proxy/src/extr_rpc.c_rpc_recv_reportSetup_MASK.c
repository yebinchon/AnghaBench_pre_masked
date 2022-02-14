
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef int plist_t ;
struct TYPE_4__ {int (* on_reportSetup ) (TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (TYPE_1__*) ;

rpc_status FUNC_2(rpc_t VAR_2, const plist_t VAR_3) {
  if (FUNC_0(VAR_3) != VAR_0) {
    return VAR_1;
  }
  return VAR_2->on_reportSetup(VAR_2);
}
