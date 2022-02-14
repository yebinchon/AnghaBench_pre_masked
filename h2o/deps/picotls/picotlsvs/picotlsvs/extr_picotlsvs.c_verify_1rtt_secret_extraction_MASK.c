
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int secret_server ;
typedef int secret_client ;
typedef int ptls_t ;
struct TYPE_7__ {TYPE_2__* hash; TYPE_1__* aead; } ;
typedef TYPE_3__ ptls_cipher_suite_t ;
struct TYPE_6__ {scalar_t__ digest_size; } ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (int *,char const*,TYPE_3__**,int *,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;

int FUNC_4(ptls_t *VAR_1, ptls_t *VAR_2)
{
    int VAR_3 = 0;
    ptls_cipher_suite_t * VAR_4;
    ptls_cipher_suite_t * VAR_5;
    uint8_t VAR_6[64];
    uint8_t VAR_7[64];
    char const * VAR_8 = "This is just a test";

    VAR_3 = FUNC_0(VAR_1, VAR_8, &VAR_4,
        VAR_6, sizeof(VAR_6));

    if (VAR_3 != 0)
    {
        FUNC_1(VAR_0, "Cannot extract client 1RTT secret, ret=%d\n", VAR_3);
    }
    else
    {
        VAR_3 = FUNC_0(VAR_2, VAR_8, &VAR_5,
            VAR_7, sizeof(VAR_7));
        if (VAR_3 != 0)
        {
            FUNC_1(VAR_0, "Cannot extract client 1RTT secret, ret=%d\n", VAR_3);
        }
    }

    if (VAR_3 == 0)
    {
        if (FUNC_3(VAR_4->aead->name, VAR_5->aead->name) != 0)
        {
            FUNC_1(VAR_0, "AEAD differ, client:%s, server:%s\n",
                VAR_4->aead->name, VAR_5->aead->name);
            VAR_3 = -1;
        }
        else if (VAR_4->hash->digest_size != VAR_5->hash->digest_size)
        {
            FUNC_1(VAR_0, "Key length differ, client:%d, server:%d\n",
                (int) VAR_4->hash->digest_size, (int) VAR_5->hash->digest_size);
            VAR_3 = -1;
        }
        else if (FUNC_2(VAR_6, VAR_7, VAR_4->hash->digest_size) != 0)
        {
            FUNC_1(VAR_0, "Key of client and server differ!\n");
            VAR_3 = -1;
        }
    }

    return VAR_3;
}
