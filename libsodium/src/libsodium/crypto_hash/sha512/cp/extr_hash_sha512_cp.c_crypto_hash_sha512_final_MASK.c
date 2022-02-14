
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ crypto_hash_sha512_state ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (void*,int) ;

int
FUNC_3(crypto_hash_sha512_state *VAR_0, unsigned char *VAR_1)
{
    uint64_t VAR_2[80 + 8];

    FUNC_0(VAR_0, VAR_2);
    FUNC_1(VAR_1, VAR_0->state, 64);
    FUNC_2((void *) VAR_2, sizeof VAR_2);
    FUNC_2((void *) VAR_0, sizeof *VAR_0);

    return 0;
}
