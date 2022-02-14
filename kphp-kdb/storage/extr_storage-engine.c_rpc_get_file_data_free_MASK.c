
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_get_file_data {int fwd_header_ints; struct rpc_get_file_data* fwd_header; TYPE_1__* meta; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (struct rpc_get_file_data*,int) ;

__attribute__((used)) static void FUNC_1 (struct rpc_get_file_data *VAR_0) {
  if (VAR_0->meta) {
    VAR_0->meta->refcnt--;
  }
  if (VAR_0->fwd_header) {
    FUNC_0 (VAR_0->fwd_header, 4 * VAR_0->fwd_header_ints);
  }
  FUNC_0 (VAR_0, sizeof (struct rpc_get_file_data));
}
