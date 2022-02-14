
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int do_transform; int do_init; int do_dispose; } ;
struct chacha20_context_t {int chacha; TYPE_1__ super; } ;
typedef int ptls_cipher_context_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void const*,int ,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(ptls_cipher_context_t *VAR_4, int VAR_5, const void *VAR_6)
{
    struct chacha20_context_t *VAR_7 = (struct chacha20_context_t *)VAR_4;
    VAR_7->super.do_dispose = VAR_1;
    VAR_7->super.do_init = VAR_2;
    VAR_7->super.do_transform = VAR_3;
    FUNC_0(&VAR_7->chacha, VAR_6, VAR_0, (const uint8_t *)"01234567" );
    return 0;
}
