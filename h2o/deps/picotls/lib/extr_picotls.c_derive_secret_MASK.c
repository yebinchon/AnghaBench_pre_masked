
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* hashes; } ;
typedef TYPE_2__ ptls_key_schedule_t ;
typedef int hash_value ;
struct TYPE_8__ {int (* final ) (TYPE_3__*,int *,int ) ;} ;
struct TYPE_6__ {TYPE_3__* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,void*,char const*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_3(ptls_key_schedule_t *VAR_2, void *VAR_3, const char *VAR_4)
{
    uint8_t VAR_5[VAR_1];

    VAR_2->hashes[0].ctx->final(VAR_2->hashes[0].ctx, VAR_5, VAR_0);
    int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
    FUNC_1(VAR_5, sizeof(VAR_5));
    return VAR_6;
}
