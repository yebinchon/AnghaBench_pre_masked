
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ptls_t ;
struct TYPE_17__ {char* key; void* additional_data; } ;
struct TYPE_18__ {int enforce_retry; int retry_uses_cookie; TYPE_4__ cookie; } ;
struct TYPE_16__ {int * member_0; } ;
struct TYPE_15__ {TYPE_3__ member_0; } ;
struct TYPE_14__ {TYPE_2__ member_0; } ;
struct TYPE_19__ {TYPE_5__ server; TYPE_1__ member_0; } ;
typedef TYPE_6__ ptls_handshake_properties_t ;
struct TYPE_20__ {size_t off; int base; } ;
typedef TYPE_7__ ptls_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_7__*,int ,size_t*,TYPE_6__*) ;
 void* FUNC_5 (char*,int) ;
 int * FUNC_6 (int ,int) ;
 int * FUNC_7 (TYPE_7__*,TYPE_6__*) ;

__attribute__((used)) static void FUNC_8(void)
{
    ptls_t *VAR_3, *VAR_4;
    ptls_handshake_properties_t VAR_5 = {{{{((void*)0)}}}};
    ptls_buffer_t VAR_6, VAR_7;
    size_t VAR_8;
    int VAR_9;

    VAR_5.server.cookie.key = "0123456789abcdef0123456789abcdef0123456789abcdef";
    VAR_5.server.cookie.additional_data = FUNC_5("1.2.3.4:1234", 12);
    VAR_5.server.enforce_retry = 1;
    VAR_5.server.retry_uses_cookie = 1;

    VAR_3 = FUNC_7(&VAR_7, &VAR_5);
    FUNC_2(&VAR_6, "", 0);

    VAR_8 = VAR_7.off;
    VAR_9 = FUNC_4(VAR_3, &VAR_6, VAR_7.base, &VAR_8, ((void*)0));
    FUNC_0(VAR_9 == VAR_1);
    FUNC_0(VAR_7.off == VAR_8);
    VAR_7.off = 0;

    VAR_4 = FUNC_6(VAR_2, 1);
    VAR_5.server.cookie.additional_data = FUNC_5("1.2.3.4:4321", 12);

    VAR_8 = VAR_6.off;
    VAR_9 = FUNC_4(VAR_4, &VAR_7, VAR_6.base, &VAR_8, &VAR_5);
    FUNC_0(VAR_9 == VAR_0);

    FUNC_3(VAR_3);
    FUNC_3(VAR_4);

    FUNC_1(&VAR_6);
    FUNC_1(&VAR_7);
}
