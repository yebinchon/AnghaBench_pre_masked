
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* hashes; int hkdf_label_prefix; } ;
typedef TYPE_2__ ptls_key_schedule_t ;
typedef int ptls_iovec_t ;
struct TYPE_8__ {int digest_size; } ;
struct TYPE_6__ {TYPE_3__* algo; } ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ,char*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(ptls_key_schedule_t *VAR_0, uint8_t *VAR_1, ptls_iovec_t VAR_2)
{
    int VAR_3;

    if ((VAR_3 = FUNC_0(VAR_0, VAR_1, "res master")) != 0)
        goto Exit;
    if ((VAR_3 = FUNC_1(VAR_0->hashes[0].algo, VAR_1, VAR_0->hashes[0].algo->digest_size,
                                 FUNC_3(VAR_1, VAR_0->hashes[0].algo->digest_size), "resumption", VAR_2,
                                 VAR_0->hkdf_label_prefix)) != 0)
        goto Exit;

Exit:
    if (VAR_3 != 0)
        FUNC_2(VAR_1, VAR_0->hashes[0].algo->digest_size);
    return VAR_3;
}
