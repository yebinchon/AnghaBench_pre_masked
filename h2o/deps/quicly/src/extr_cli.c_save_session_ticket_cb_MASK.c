
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int quicly_conn_t ;
typedef int ptls_t ;
typedef int ptls_save_ticket_t ;
struct TYPE_5__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_7__ {int base; } ;
struct TYPE_6__ {TYPE_4__ tls_ticket; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int ** FUNC_3 (int *) ;
 TYPE_4__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_2__ VAR_0 ;

int FUNC_7(ptls_save_ticket_t *VAR_1, ptls_t *VAR_2, ptls_iovec_t VAR_3)
{
    FUNC_0(VAR_0.tls_ticket.base);
    VAR_0.tls_ticket = FUNC_4(FUNC_1(VAR_3.len), VAR_3.len);
    FUNC_2(VAR_0.tls_ticket.base, VAR_3.base, VAR_3.len);

    quicly_conn_t *VAR_4 = *FUNC_3(VAR_2);
    return FUNC_6(FUNC_5(VAR_4));
}
