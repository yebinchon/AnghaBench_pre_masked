
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int incoming; int outgoing; } ;
typedef TYPE_1__ client_ctx ;


 scalar_t__ FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(client_ctx *VAR_1) {
  if (FUNC_0("client", &VAR_1->incoming, &VAR_1->outgoing)) {
    return FUNC_1(VAR_1);
  }

  if (FUNC_0("upstream", &VAR_1->outgoing, &VAR_1->incoming)) {
    return FUNC_1(VAR_1);
  }

  return VAR_0;
}
