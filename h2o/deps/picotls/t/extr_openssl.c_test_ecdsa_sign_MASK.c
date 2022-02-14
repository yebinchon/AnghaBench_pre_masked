
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sigbuf_small ;
struct TYPE_5__ {char const* base; int off; } ;
typedef TYPE_1__ ptls_buffer_t ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;
 int FUNC_12 (char const*,int ) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_15(void)
{
    EVP_PKEY *VAR_1;

    {
        EC_KEY *VAR_2 = FUNC_2(VAR_0);
        FUNC_1(VAR_2);
        VAR_1 = FUNC_4();
        FUNC_5(VAR_1, VAR_2);
        FUNC_0(VAR_2);
    }

    const char *VAR_3 = "hello world";
    ptls_buffer_t VAR_4;
    uint8_t VAR_5[1024];

    FUNC_11(&VAR_4, VAR_5, sizeof(VAR_5));
    FUNC_9(FUNC_8(VAR_1, &VAR_4, FUNC_12(VAR_3, FUNC_13(VAR_3)), FUNC_7()) == 0);
    FUNC_6(VAR_1);
    FUNC_9(FUNC_14(VAR_1, FUNC_12(VAR_3, FUNC_13(VAR_3)), FUNC_12(VAR_4.base, VAR_4.off)) == 0);

    FUNC_10(&VAR_4);
    FUNC_3(VAR_1);
}
