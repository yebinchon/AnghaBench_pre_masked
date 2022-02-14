
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int * one_rtt; int * early; } ;
struct TYPE_13__ {TYPE_7__* key_schedule; TYPE_1__ exporter_master_secret; TYPE_4__* ctx; } ;
typedef TYPE_5__ ptls_t ;
struct TYPE_14__ {TYPE_3__* hashes; } ;
struct TYPE_12__ {int use_exporter; } ;
struct TYPE_11__ {TYPE_2__* algo; } ;
struct TYPE_10__ {int digest_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int *,char*) ;
 int FUNC_2 (TYPE_5__*,char*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(ptls_t *VAR_1, int VAR_2)
{
    int VAR_3;

    if (!VAR_1->ctx->use_exporter)
        return 0;

    uint8_t **VAR_4 = VAR_2 ? &VAR_1->exporter_master_secret.early : &VAR_1->exporter_master_secret.one_rtt;
    FUNC_0(*VAR_4 == ((void*)0));
    if ((*VAR_4 = FUNC_3(VAR_1->key_schedule->hashes[0].algo->digest_size)) == ((void*)0))
        return VAR_0;

    if ((VAR_3 = FUNC_1(VAR_1->key_schedule, *VAR_4, VAR_2 ? "e exp master" : "exp master")) != 0)
        return VAR_3;

    FUNC_2(VAR_1, VAR_2 ? "EARLY_EXPORTER_SECRET" : "EXPORTER_SECRET",
               FUNC_4(*VAR_4, VAR_1->key_schedule->hashes[0].algo->digest_size));

    return 0;
}
