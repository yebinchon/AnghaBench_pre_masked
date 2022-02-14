
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* kfs_replica_handle_t ;
struct TYPE_3__ {int * ctx_crypto; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2 (kfs_replica_handle_t VAR_0) {
  if (VAR_0->ctx_crypto) {
    FUNC_1 (VAR_0->ctx_crypto, 0, sizeof (*VAR_0->ctx_crypto));
    FUNC_0 (VAR_0->ctx_crypto);
    VAR_0->ctx_crypto = ((void*)0);
  }
}
