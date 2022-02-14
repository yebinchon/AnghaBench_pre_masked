
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ** traffic_secrets_t ;
typedef int ptls_update_traffic_key_t ;
typedef int ptls_t ;
struct TYPE_4__ {TYPE_1__* hash; } ;
struct TYPE_3__ {size_t digest_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int *) ;
 int **** FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(ptls_update_traffic_key_t *VAR_2, ptls_t *VAR_3, int VAR_4, size_t VAR_5, const void *VAR_6)
{
    traffic_secrets_t *VAR_7 = *FUNC_4(VAR_3);
    FUNC_2(FUNC_0((*VAR_7)[VAR_4][VAR_5], VAR_1, VAR_0) == 0);

    size_t VAR_8 = FUNC_3(VAR_3)->hash->digest_size;
    FUNC_1((*VAR_7)[VAR_4][VAR_5], VAR_6, VAR_8);
    return 0;
}
