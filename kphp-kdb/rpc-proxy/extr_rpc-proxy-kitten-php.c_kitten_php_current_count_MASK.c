
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cluster {int dummy; } ;
struct TYPE_2__ {struct rpc_cluster** schema_extra; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;

int FUNC_1 (void) {
  struct rpc_cluster *VAR_3 = VAR_0->schema_extra[VAR_1];
  if (!VAR_3) {
    return -1;
  }
  return FUNC_0 (VAR_2);
}
