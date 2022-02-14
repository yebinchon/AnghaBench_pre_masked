
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* hashes; } ;
typedef TYPE_3__ ptls_key_schedule_t ;
struct TYPE_7__ {TYPE_1__* algo; } ;
struct TYPE_6__ {int empty_digest; } ;


 int FUNC_0 (TYPE_3__*,void*,char const*,int ) ;

__attribute__((used)) static int FUNC_1(ptls_key_schedule_t *VAR_0, void *VAR_1, const char *VAR_2)
{
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0->hashes[0].algo->empty_digest);
}
