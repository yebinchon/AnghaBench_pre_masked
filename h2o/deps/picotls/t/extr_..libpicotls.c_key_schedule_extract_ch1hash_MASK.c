
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* hashes; } ;
typedef TYPE_2__ ptls_key_schedule_t ;
struct TYPE_7__ {int (* final ) (TYPE_3__*,int *,int ) ;} ;
struct TYPE_5__ {TYPE_3__* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static void FUNC_1(ptls_key_schedule_t *VAR_1, uint8_t *VAR_2)
{
    VAR_1->hashes[0].ctx->final(VAR_1->hashes[0].ctx, VAR_2, VAR_0);
}
