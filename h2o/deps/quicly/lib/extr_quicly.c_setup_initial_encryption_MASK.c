
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct st_quicly_cipher_context_t {int dummy; } ;
typedef int secret ;
typedef int salt ;
typedef int ptls_iovec_t ;
struct TYPE_4__ {int hash; } ;
typedef TYPE_1__ ptls_cipher_suite_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,int*,int ,int ) ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (struct st_quicly_cipher_context_t*,TYPE_1__*,int*,char const*,int) ;

__attribute__((used)) static int FUNC_4(ptls_cipher_suite_t *VAR_1, struct st_quicly_cipher_context_t *VAR_2,
                                    struct st_quicly_cipher_context_t *VAR_3, ptls_iovec_t VAR_4, int VAR_5)
{
    static const uint8_t VAR_6[] = {0xc3, 0xee, 0xf7, 0x12, 0xc7, 0x2e, 0xbb, 0x5a, 0x11, 0xa7,
                                   0xd2, 0x43, 0x2b, 0xb4, 0x63, 0x65, 0xbe, 0xf9, 0xf5, 0x02};
    static const char *VAR_7[2] = {"client in", "server in"};
    uint8_t VAR_8[VAR_0];
    int VAR_9;


    if ((VAR_9 = FUNC_1(VAR_1->hash, VAR_8, FUNC_2(VAR_6, sizeof(VAR_6)), VAR_4)) != 0)
        goto Exit;


    if ((VAR_9 = FUNC_3(VAR_2, VAR_1, VAR_8, VAR_7[VAR_5], 0)) != 0)
        goto Exit;
    if ((VAR_9 = FUNC_3(VAR_3, VAR_1, VAR_8, VAR_7[!VAR_5], 1)) != 0)
        goto Exit;

Exit:
    FUNC_0(VAR_8, sizeof(VAR_8));
    return VAR_9;
}
