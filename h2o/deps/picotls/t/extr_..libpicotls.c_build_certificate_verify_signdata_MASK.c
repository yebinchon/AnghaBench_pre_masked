
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* hashes; } ;
typedef TYPE_3__ ptls_key_schedule_t ;
struct TYPE_9__ {int (* final ) (TYPE_4__*,int *,int ) ;} ;
struct TYPE_7__ {TYPE_1__* algo; TYPE_4__* ctx; } ;
struct TYPE_6__ {scalar_t__ digest_size; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*,scalar_t__) ;
 int FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static size_t FUNC_5(uint8_t *VAR_2, ptls_key_schedule_t *VAR_3, const char *VAR_4)
{
    size_t VAR_5 = 0;

    FUNC_2(VAR_2 + VAR_5, 32, 64);
    VAR_5 += 64;
    FUNC_1(VAR_2 + VAR_5, VAR_4, FUNC_3(VAR_4) + 1);
    VAR_5 += FUNC_3(VAR_4) + 1;
    VAR_3->hashes[0].ctx->final(VAR_3->hashes[0].ctx, VAR_2 + VAR_5, VAR_0);
    VAR_5 += VAR_3->hashes[0].algo->digest_size;
    FUNC_0(VAR_5 <= VAR_1);

    return VAR_5;
}
