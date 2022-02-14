
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int do_transform; int do_init; int do_dispose; } ;
struct aesctr_context_t {int aes; TYPE_1__ super; } ;
typedef int ptls_cipher_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(ptls_cipher_context_t *VAR_3, int VAR_4, const void *VAR_5, size_t VAR_6)
{
    struct aesctr_context_t *VAR_7 = (struct aesctr_context_t *)VAR_3;
    VAR_7->super.do_dispose = VAR_0;
    VAR_7->super.do_init = VAR_1;
    VAR_7->super.do_transform = VAR_2;
    FUNC_0(&VAR_7->aes, VAR_5, VAR_6);
    return 0;
}
