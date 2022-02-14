
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; int ctx; } ;
struct TYPE_5__ {int ctr_crypt; int ige_crypt; int cbc_crypt; TYPE_1__ u; } ;
typedef TYPE_2__ vk_aes_ctx_t ;


 int FUNC_0 (unsigned char*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3 (vk_aes_ctx_t *VAR_6, unsigned char *VAR_7, int VAR_8) {
  if (FUNC_1 () && VAR_8 == 256) {
    FUNC_2 (&VAR_6->u.ctx, VAR_7);
    VAR_6->cbc_crypt = VAR_0;
    VAR_6->ige_crypt = VAR_2;
    VAR_6->ctr_crypt = VAR_1;
  } else {
    FUNC_0 (VAR_7, VAR_8, &VAR_6->u.key);
    VAR_6->cbc_crypt = VAR_3;
    VAR_6->ige_crypt = VAR_5;
    VAR_6->ctr_crypt = VAR_4;
  }
}
