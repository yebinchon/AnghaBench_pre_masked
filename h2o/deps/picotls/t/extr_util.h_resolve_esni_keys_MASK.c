
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptls_iovec_t ;
struct TYPE_5__ {int off; int * base; int is_allocated; } ;
typedef TYPE_1__ ptls_buffer_t ;
typedef int ptls_base64_decode_state_t ;
typedef int ns_rr ;
typedef int ns_msg ;
typedef int esni_name ;
typedef int answer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*,int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char*,int ,int ,int *,int) ;
 int FUNC_13 (char*,int,char*,char const*) ;

__attribute__((used)) static inline ptls_iovec_t FUNC_14(const char *VAR_3)
{
    char VAR_4[256], *VAR_5;
    uint8_t VAR_6[1024];
    ns_msg VAR_7;
    ns_rr VAR_8;
    ptls_buffer_t VAR_9;
    ptls_base64_decode_state_t VAR_10;
    int VAR_11;

    FUNC_10(&VAR_9, "", 0);

    if (FUNC_13(VAR_4, sizeof(VAR_4), "_esni.%s", VAR_3) > sizeof(VAR_4) - 1)
        goto Error;
    if ((VAR_11 = FUNC_12(VAR_4, VAR_0, VAR_2, VAR_6, sizeof(VAR_6))) <= 0)
        goto Error;
    if (FUNC_2(VAR_6, VAR_11, &VAR_7) != 0)
        goto Error;
    if (FUNC_3(VAR_7, VAR_1) < 1)
        goto Error;
    if (FUNC_4(&VAR_7, VAR_1, 0, &VAR_8) != 0)
        goto Error;
    VAR_5 = (void *)FUNC_5(VAR_8);
    if (!FUNC_1((void *)VAR_5, FUNC_6(VAR_8)))
        goto Error;

    FUNC_8(&VAR_10);
    if (FUNC_7(VAR_5, &VAR_10, &VAR_9) != 0)
        goto Error;
    FUNC_0(VAR_9.is_allocated);

    return FUNC_11(VAR_9.base, VAR_9.off);
Error:
    FUNC_9(&VAR_9);
    return FUNC_11(((void*)0), 0);
}
