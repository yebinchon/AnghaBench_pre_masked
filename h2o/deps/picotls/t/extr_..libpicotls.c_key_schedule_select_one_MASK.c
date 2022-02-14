
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int generation; size_t num_hashes; int secret; TYPE_1__* hashes; } ;
typedef TYPE_2__ ptls_key_schedule_t ;
struct TYPE_10__ {scalar_t__ hash; } ;
typedef TYPE_3__ ptls_cipher_suite_t ;
struct TYPE_11__ {int (* final ) (TYPE_4__*,int *,int ) ;} ;
struct TYPE_8__ {scalar_t__ algo; TYPE_4__* ctx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static int FUNC_5(ptls_key_schedule_t *VAR_2, ptls_cipher_suite_t *VAR_3, int VAR_4)
{
    size_t VAR_5 = VAR_1, VAR_6;
    int VAR_7;

    FUNC_0(VAR_2->generation == 1);


    for (VAR_6 = 0; VAR_6 != VAR_2->num_hashes; ++VAR_6) {
        if (VAR_2->hashes[VAR_6].algo == VAR_3->hash) {
            FUNC_0(VAR_5 == VAR_1);
            VAR_5 = VAR_6;
        } else {
            VAR_2->hashes[VAR_6].ctx->final(VAR_2->hashes[VAR_6].ctx, ((void*)0), VAR_0);
        }
    }
    if (VAR_5 != 0) {
        VAR_2->hashes[0] = VAR_2->hashes[VAR_5];
        VAR_4 = 1;
    }
    VAR_2->num_hashes = 1;


    if (VAR_4) {
        --VAR_2->generation;
        FUNC_2(VAR_2->secret, 0, sizeof(VAR_2->secret));
        if ((VAR_7 = FUNC_1(VAR_2, FUNC_3(((void*)0), 0))) != 0)
            goto Exit;
    }

    VAR_7 = 0;
Exit:
    return VAR_7;
}
