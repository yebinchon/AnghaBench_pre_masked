
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* kfs_replica_handle_t ;
struct TYPE_5__ {int (* ctr_crypt ) (TYPE_2__*,unsigned char*,unsigned char*,int,unsigned char*,long long) ;} ;
struct TYPE_4__ {TYPE_2__* ctx_crypto; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,unsigned char*,int,unsigned char*,long long) ;

__attribute__((used)) static void FUNC_2 (kfs_replica_handle_t VAR_0, unsigned char *VAR_1, long long VAR_2, unsigned char VAR_3[16], long long VAR_4) {
  FUNC_0 (VAR_0 && VAR_0->ctx_crypto && VAR_2 >= 0);
  if (!VAR_2) {
    return;
  }
  while (1) {
    int VAR_5 = 0x7ffffff0 < VAR_2 ? 0x7ffffff0 : VAR_2;
    VAR_0->ctx_crypto->ctr_crypt (VAR_0->ctx_crypto, VAR_1, VAR_1, VAR_5, VAR_3, VAR_4);
    VAR_2 -= VAR_5;
    if (!VAR_2) {
      break;
    }
    VAR_1 += VAR_5;
    VAR_4 += VAR_5;
  }
}
