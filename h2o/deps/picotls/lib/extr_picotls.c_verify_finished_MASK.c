
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int verify_data ;
typedef int uint8_t ;
struct TYPE_10__ {int secret; } ;
struct TYPE_11__ {TYPE_1__ dec; } ;
struct TYPE_14__ {TYPE_9__* key_schedule; TYPE_2__ traffic_protection; } ;
typedef TYPE_5__ ptls_t ;
struct TYPE_15__ {scalar_t__ len; scalar_t__ base; } ;
typedef TYPE_6__ ptls_iovec_t ;
struct TYPE_16__ {TYPE_4__* hashes; } ;
struct TYPE_13__ {TYPE_3__* algo; } ;
struct TYPE_12__ {scalar_t__ digest_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_9__*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(ptls_t *VAR_4, ptls_iovec_t VAR_5)
{
    uint8_t VAR_6[VAR_3];
    int VAR_7;

    if (VAR_2 + VAR_4->key_schedule->hashes[0].algo->digest_size != VAR_5.len) {
        VAR_7 = VAR_0;
        goto Exit;
    }

    if ((VAR_7 = FUNC_0(VAR_6, VAR_4->key_schedule, VAR_4->traffic_protection.dec.secret)) != 0)
        goto Exit;
    if (!FUNC_2(VAR_5.base + VAR_2, VAR_6, VAR_4->key_schedule->hashes[0].algo->digest_size)) {
        VAR_7 = VAR_1;
        goto Exit;
    }

Exit:
    FUNC_1(VAR_6, sizeof(VAR_6));
    return VAR_7;
}
