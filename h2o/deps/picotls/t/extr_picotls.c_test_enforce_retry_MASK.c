
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
struct TYPE_17__ {char* key; int additional_data; } ;
struct TYPE_18__ {int enforce_retry; int retry_uses_cookie; TYPE_4__ cookie; } ;
struct TYPE_16__ {int * member_0; } ;
struct TYPE_15__ {TYPE_3__ member_0; } ;
struct TYPE_14__ {TYPE_2__ member_0; } ;
struct TYPE_19__ {TYPE_5__ server; TYPE_1__ member_0; } ;
typedef TYPE_6__ ptls_handshake_properties_t ;
struct TYPE_20__ {size_t off; int * base; } ;
typedef TYPE_7__ ptls_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_7__*,int *,size_t*,TYPE_6__*) ;
 int FUNC_6 (char*,int) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (int *,TYPE_7__*,int *,size_t*) ;
 int FUNC_9 (int *,TYPE_7__*,char*,int) ;

__attribute__((used)) static void FUNC_10(int VAR_3)
{
    ptls_t *VAR_4, *VAR_5;
    ptls_handshake_properties_t VAR_6 = {{{{((void*)0)}}}};
    ptls_buffer_t VAR_7, VAR_8, VAR_9;
    size_t VAR_10;
    int VAR_11;

    VAR_6.server.cookie.key = "0123456789abcdef0123456789abcdef0123456789abcdef";
    VAR_6.server.cookie.additional_data = FUNC_6("1.2.3.4:1234", 12);
    VAR_6.server.enforce_retry = 1;
    VAR_6.server.retry_uses_cookie = VAR_3;

    FUNC_3(&VAR_7, "", 0);
    FUNC_3(&VAR_8, "", 0);
    FUNC_3(&VAR_9, "", 0);

    VAR_4 = FUNC_7(VAR_2, 0);

    VAR_11 = FUNC_5(VAR_4, &VAR_7, ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_11 == VAR_0);
    FUNC_1(VAR_7.off != 0);

    VAR_5 = FUNC_7(VAR_2, 1);

    VAR_10 = VAR_7.off;
    VAR_11 = FUNC_5(VAR_5, &VAR_8, VAR_7.base, &VAR_10, &VAR_6);
    VAR_7.off = 0;

    if (VAR_3) {
        FUNC_1(VAR_11 == VAR_1);
        FUNC_4(VAR_5);
        VAR_5 = FUNC_7(VAR_2, 1);
    } else {
        FUNC_1(VAR_11 == VAR_0);
    }

    VAR_10 = VAR_8.off;
    VAR_11 = FUNC_5(VAR_4, &VAR_7, VAR_8.base, &VAR_10, ((void*)0));
    FUNC_1(VAR_11 == VAR_0);
    FUNC_1(VAR_8.off == VAR_10);
    VAR_8.off = 0;

    VAR_10 = VAR_7.off;
    VAR_11 = FUNC_5(VAR_5, &VAR_8, VAR_7.base, &VAR_10, &VAR_6);
    FUNC_1(VAR_11 == 0);
    FUNC_1(VAR_7.off == VAR_10);
    VAR_7.off = 0;

    VAR_10 = VAR_8.off;
    VAR_11 = FUNC_5(VAR_4, &VAR_7, VAR_8.base, &VAR_10, ((void*)0));
    FUNC_1(VAR_11 == 0);
    FUNC_1(VAR_8.off == VAR_10);
    VAR_8.off = 0;

    VAR_11 = FUNC_9(VAR_4, &VAR_7, "hello world", 11);
    FUNC_1(VAR_11 == 0);

    VAR_10 = VAR_7.off;
    VAR_11 = FUNC_8(VAR_5, &VAR_9, VAR_7.base, &VAR_10);
    FUNC_1(VAR_11 == 0);
    FUNC_1(VAR_7.off == VAR_10);
    VAR_7.off = 0;

    FUNC_1(VAR_9.off == 11);
    FUNC_1(FUNC_0(VAR_9.base, "hello world", 11) == 0);
    VAR_9.off = 0;

    FUNC_4(VAR_4);
    FUNC_4(VAR_5);

    FUNC_2(&VAR_7);
    FUNC_2(&VAR_8);
    FUNC_2(&VAR_9);
}
