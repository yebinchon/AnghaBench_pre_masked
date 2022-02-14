
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int cid; } ;
typedef TYPE_1__ quicly_cid_t ;
struct TYPE_6__ {int len; int base; } ;
typedef TYPE_2__ ptls_iovec_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(quicly_cid_t *VAR_0, ptls_iovec_t VAR_1)
{
    FUNC_0(VAR_0->cid, VAR_1.base, VAR_1.len);
    VAR_0->len = VAR_1.len;
}
