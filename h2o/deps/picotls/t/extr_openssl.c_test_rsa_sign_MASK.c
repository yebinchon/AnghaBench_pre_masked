
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sigbuf_small ;
struct TYPE_7__ {int key; } ;
typedef TYPE_1__ ptls_openssl_sign_certificate_t ;
struct TYPE_8__ {void const* base; int off; } ;
typedef TYPE_2__ ptls_buffer_t ;
struct TYPE_9__ {scalar_t__ sign_certificate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_6__* VAR_0 ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,int) ;
 int FUNC_6 (void const*,int ) ;
 int FUNC_7 (void const*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    ptls_openssl_sign_certificate_t *VAR_1 = (ptls_openssl_sign_certificate_t *)VAR_0->sign_certificate;

    const void *VAR_2 = "hello world";
    ptls_buffer_t VAR_3;
    uint8_t VAR_4[1024];

    FUNC_5(&VAR_3, VAR_4, sizeof(VAR_4));
    FUNC_3(FUNC_2(VAR_1->key, &VAR_3, FUNC_6(VAR_2, FUNC_7(VAR_2)), FUNC_1()) == 0);
    FUNC_0(VAR_1->key);
    FUNC_3(FUNC_8(VAR_1->key, FUNC_6(VAR_2, FUNC_7(VAR_2)), FUNC_6(VAR_3.base, VAR_3.off)) == 0);

    FUNC_4(&VAR_3);
}
