
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_ptls_cipher_context_t {int dummy; } ;
struct TYPE_3__ {scalar_t__ do_init; } ;
struct TYPE_4__ {int tweaks; TYPE_1__ super; } ;
typedef TYPE_2__ ptls_ffx_context_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,void const*,int) ;

__attribute__((used)) static void FUNC_2(struct st_ptls_cipher_context_t *VAR_0, const void *VAR_1)
{
    ptls_ffx_context_t *VAR_2 = (ptls_ffx_context_t *)VAR_0;
    FUNC_0(VAR_2->super.do_init == FUNC_2);
    FUNC_1(VAR_2->tweaks, VAR_1, 16);
}
