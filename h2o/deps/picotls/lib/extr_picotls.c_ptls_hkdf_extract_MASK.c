
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ len; int base; } ;
typedef TYPE_1__ ptls_iovec_t ;
struct TYPE_13__ {int (* final ) (TYPE_2__*,void*,int ) ;int (* update ) (TYPE_2__*,int ,scalar_t__) ;} ;
typedef TYPE_2__ ptls_hash_context_t ;
struct TYPE_14__ {int digest_size; } ;
typedef TYPE_3__ ptls_hash_algorithm_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 TYPE_1__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,void*,int ) ;
 int VAR_2 ;

int FUNC_4(ptls_hash_algorithm_t *VAR_3, void *VAR_4, ptls_iovec_t VAR_5, ptls_iovec_t VAR_6)
{
    ptls_hash_context_t *VAR_7;

    if (VAR_5.len == 0)
        VAR_5 = FUNC_1(VAR_2, VAR_3->digest_size);

    if ((VAR_7 = FUNC_0(VAR_3, VAR_5.base, VAR_5.len)) == ((void*)0))
        return VAR_0;
    VAR_7->update(VAR_7, VAR_6.base, VAR_6.len);
    VAR_7->final(VAR_7, VAR_4, VAR_1);
    return 0;
}
