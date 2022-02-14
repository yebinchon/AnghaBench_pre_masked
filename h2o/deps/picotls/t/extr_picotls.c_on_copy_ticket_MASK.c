
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptls_t ;
struct TYPE_6__ {scalar_t__ len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
typedef int ptls_encrypt_ticket_t ;
struct TYPE_7__ {scalar_t__ off; scalar_t__ base; } ;
typedef TYPE_2__ ptls_buffer_t ;


 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(ptls_encrypt_ticket_t *VAR_0, ptls_t *VAR_1, int VAR_2, ptls_buffer_t *VAR_3, ptls_iovec_t VAR_4)
{
    int VAR_5;

    if ((VAR_5 = FUNC_1(VAR_3, VAR_4.len)) != 0)
        return VAR_5;
    FUNC_0(VAR_3->base + VAR_3->off, VAR_4.base, VAR_4.len);
    VAR_3->off += VAR_4.len;

    return 0;
}
