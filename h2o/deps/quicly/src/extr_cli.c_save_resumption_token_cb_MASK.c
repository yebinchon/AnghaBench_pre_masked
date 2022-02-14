
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int quicly_save_resumption_token_t ;
typedef int quicly_conn_t ;
struct TYPE_5__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_7__ {int base; } ;
struct TYPE_6__ {TYPE_4__ address_token; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_4__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_6(quicly_save_resumption_token_t *VAR_1, quicly_conn_t *VAR_2, ptls_iovec_t VAR_3)
{
    FUNC_0(VAR_0.address_token.base);
    VAR_0.address_token = FUNC_3(FUNC_1(VAR_3.len), VAR_3.len);
    FUNC_2(VAR_0.address_token.base, VAR_3.base, VAR_3.len);

    return FUNC_5(FUNC_4(VAR_2));
}
