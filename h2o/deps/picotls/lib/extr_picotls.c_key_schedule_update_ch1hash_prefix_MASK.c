
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* hashes; } ;
typedef TYPE_3__ ptls_key_schedule_t ;
typedef int prefix ;
struct TYPE_7__ {TYPE_1__* algo; } ;
struct TYPE_6__ {int digest_size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void FUNC_1(ptls_key_schedule_t *VAR_1)
{
    uint8_t VAR_2[4] = {VAR_0, 0, 0, (uint8_t)VAR_1->hashes[0].algo->digest_size};
    FUNC_0(VAR_1, VAR_2, sizeof(VAR_2));
}
