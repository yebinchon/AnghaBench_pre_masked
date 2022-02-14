
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int * one_rtt; int * early; } ;
struct TYPE_11__ {TYPE_4__* key_schedule; TYPE_1__ exporter_master_secret; } ;
typedef TYPE_5__ ptls_t ;
struct TYPE_10__ {TYPE_3__* hashes; } ;
struct TYPE_9__ {TYPE_2__* algo; } ;
struct TYPE_8__ {int digest_size; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(ptls_t *VAR_0, int VAR_1)
{
    uint8_t *VAR_2 = VAR_1 ? VAR_0->exporter_master_secret.early : VAR_0->exporter_master_secret.one_rtt;
    if (VAR_2 == ((void*)0))
        return;
    FUNC_0(VAR_0->key_schedule != ((void*)0));
    FUNC_2(VAR_2, VAR_0->key_schedule->hashes[0].algo->digest_size);
    FUNC_1(VAR_2);
}
