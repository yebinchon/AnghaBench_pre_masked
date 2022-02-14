
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t num_hashes; TYPE_1__* hashes; int secret; } ;
typedef TYPE_2__ ptls_key_schedule_t ;
struct TYPE_8__ {int (* final ) (TYPE_3__*,int *,int ) ;} ;
struct TYPE_6__ {TYPE_3__* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static void FUNC_3(ptls_key_schedule_t *VAR_1)
{
    size_t VAR_2;
    FUNC_1(VAR_1->secret, sizeof(VAR_1->secret));
    for (VAR_2 = 0; VAR_2 != VAR_1->num_hashes; ++VAR_2)
        VAR_1->hashes[VAR_2].ctx->final(VAR_1->hashes[VAR_2].ctx, ((void*)0), VAR_0);
    FUNC_0(VAR_1);
}
