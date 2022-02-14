
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptls_t ;
typedef int ptls_save_ticket_t ;
struct TYPE_4__ {int len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_5__ {int len; int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_2(ptls_save_ticket_t *VAR_1, ptls_t *VAR_2, ptls_iovec_t VAR_3)
{
    VAR_0.base = FUNC_0(VAR_3.len);
    FUNC_1(VAR_0.base, VAR_3.base, VAR_3.len);
    VAR_0.len = VAR_3.len;
    return 0;
}
