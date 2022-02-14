
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct st_ptls_traffic_protection_t {int * secret; } ;
typedef int secret ;
struct TYPE_9__ {struct st_ptls_traffic_protection_t dec; struct st_ptls_traffic_protection_t enc; } ;
struct TYPE_12__ {TYPE_3__* key_schedule; TYPE_1__ traffic_protection; } ;
typedef TYPE_4__ ptls_t ;
struct TYPE_13__ {int digest_size; } ;
typedef TYPE_5__ ptls_hash_algorithm_t ;
struct TYPE_11__ {int hkdf_label_prefix; TYPE_2__* hashes; } ;
struct TYPE_10__ {TYPE_5__* algo; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int *,int ,int ,char*,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,int,int *,int,int) ;

__attribute__((used)) static int FUNC_5(ptls_t *VAR_1, int VAR_2)
{
    struct st_ptls_traffic_protection_t *VAR_3 = VAR_2 ? &VAR_1->traffic_protection.enc : &VAR_1->traffic_protection.dec;
    uint8_t VAR_4[VAR_0];
    int VAR_5;

    ptls_hash_algorithm_t *VAR_6 = VAR_1->key_schedule->hashes[0].algo;
    if ((VAR_5 = FUNC_0(VAR_6, VAR_4, VAR_6->digest_size, FUNC_3(VAR_3->secret, VAR_6->digest_size), "traffic upd",
                                 FUNC_3(((void*)0), 0), VAR_1->key_schedule->hkdf_label_prefix)) != 0)
        goto Exit;
    FUNC_1(VAR_3->secret, VAR_4, sizeof(VAR_4));
    VAR_5 = FUNC_4(VAR_1, VAR_2, ((void*)0), 3, 1);

Exit:
    FUNC_2(VAR_4, sizeof(VAR_4));
    return VAR_5;
}
