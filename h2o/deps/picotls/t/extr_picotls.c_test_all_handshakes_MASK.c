
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ ptls_sign_certificate_t ;
struct TYPE_7__ {TYPE_1__* sign_certificate; } ;


 TYPE_4__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_1(void)
{
    ptls_sign_certificate_t VAR_18 = {VAR_5};
    VAR_2 = VAR_1->sign_certificate;
    VAR_1->sign_certificate = &VAR_18;

    ptls_sign_certificate_t VAR_19 = {VAR_4};
    if (VAR_1 != VAR_0) {
        VAR_3 = VAR_0->sign_certificate;
        VAR_0->sign_certificate = &VAR_19;
    }

    FUNC_0("full-handshake", VAR_8);
    FUNC_0("full-handshake-with-client-authentication", VAR_9);
    FUNC_0("hrr-handshake", VAR_11);
    FUNC_0("hrr-stateless-handshake", VAR_12);
    FUNC_0("resumption", VAR_14);
    FUNC_0("resumption-different-preferred-key-share", VAR_15);
    FUNC_0("resumption-with-client-authentication", VAR_16);

    FUNC_0("enforce-retry-stateful", VAR_6);
    FUNC_0("enforce-retry-stateless", VAR_7);

    FUNC_0("stateless-hrr-aad-change", VAR_17);

    FUNC_0("key-update", VAR_13);

    FUNC_0("handshake-api", VAR_10);

    VAR_1->sign_certificate = VAR_2;

    if (VAR_1 != VAR_0)
        VAR_0->sign_certificate = VAR_3;
}
